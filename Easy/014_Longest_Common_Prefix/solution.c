char* longestCommonPrefix(char** strs, int strsSize) {
    
    int minLength = strlen(strs[0]);
    for (int i = 1; i < strsSize; i++) {
        int length = strlen(strs[i]);
        if (length < minLength) {
            minLength = length;
        }
    }

    char* result = (char*)malloc((minLength + 1) * sizeof(char));
    if (!result) return NULL;

    for (int i = 0; i < minLength; i++) {
        char tmp = strs[0][i];
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != tmp) {
                result[i] = '\0';
                return result;
            }
        }
        result[i] = tmp;
    }

    result[minLength] = '\0';
    return result;
}

