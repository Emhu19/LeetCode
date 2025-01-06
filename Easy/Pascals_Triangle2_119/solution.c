/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {

    int** result = (int**)malloc(numRows * sizeof(int*));
    if (!result) return NULL;

    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));
    if (!(*returnColumnSizes)) return NULL;
    
    for(int i = 0; i < numRows; i++){
        (*returnColumnSizes)[i] = i + 1;
        result[i] = (int*)malloc((i + 1) * sizeof(int));
        if (!result[i]) return NULL;
        
        for(int j = 0; j <= i; j++){
            if(j == 0 || j == i){
                result[i][j] = 1;
            }
            else{
                result[i][j] = result[i-1][j-1] + result[i-1][j];
            }
        }
    }

    *returnSize = numRows;
    return result;
}

int* getRow(int rowIndex, int* returnSize) {
    int* ColumnSizes;
    int numRows = rowIndex + 1;
    int** triangle = generate(rowIndex, returnSize, &ColumnSizes);
    int* result = (int*)malloc(*returnSize * sizeof(int));
    for(int i = 0; i <= rowIndex; i++){
        result[i] = triangle[rowIndex][i];
    }
    return result;
}

