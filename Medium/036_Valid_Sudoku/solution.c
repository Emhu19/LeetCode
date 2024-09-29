bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    int rowCheck[9][9] = {0};
    int colCheck[9][9] = {0};
    int boxCheck[9][9] = {0};

    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            if (board[row][col] != '.') {
                int num = board[row][col] - '1';  
                int boxIndex = (row / 3) * 3 + (col / 3); 

                if (rowCheck[row][num] || colCheck[col][num] || boxCheck[boxIndex][num]) {
                    return false;
                }

                rowCheck[row][num] = 1;
                colCheck[col][num] = 1;
                boxCheck[boxIndex][num] = 1;
            }
        }
    }

    return true;
}

