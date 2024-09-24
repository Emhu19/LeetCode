int strStr(char* haystack, char* needle) {
    int haystackLen = strlen(haystack);
    int needleLen = strlen(needle);

    for (int i = 0; i <= haystackLen - needleLen; i++) {
        int j = 0;
        
        while (j < needleLen && haystack[i + j] == needle[j]) {
            j++;
        }
        
        if (j == needleLen) {
            return i; 
        }
    }
    
    return -1;
}
