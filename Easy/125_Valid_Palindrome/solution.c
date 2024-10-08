

bool isPalindrome(char* s) {
    if (s == NULL) return true;
    
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {

        while (left < right && !isalnum(s[left])) {
            left++;
        }
        while (left < right && !isalnum(s[right])) {
            right--;
        }


        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }


        left++;
        right--;
    }
    
    return true;
}

