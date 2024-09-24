int lengthOfLastWord(char* s) {
    int len = strlen(s);
    int max = 0;
    int i = len - 1;

    while(i >= 0 && s[i] == ' ') {
        i--;
    }

    while(i >= 0 && s[i] != ' ') {
        max++;
        i--;
    }

    return max;
}

