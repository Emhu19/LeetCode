char* convertToTitle(int columnNumber) {
    char* array = (char*)malloc(20 * sizeof(char));
    int i = 0;
    while(columnNumber > 0){
        columnNumber--;  
        int result = columnNumber % 26; 
        array[i++] = 'A' + result; 
        columnNumber /= 26;
    }
    array[i] = '\0';
    
    int start = 0, end = i - 1;
    while (start < end) {
        char temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }

    return array;
}
