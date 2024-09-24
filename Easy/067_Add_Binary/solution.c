char* addBinary(char* a, char* b) {
    int lena = strlen(a);
    int lenb = strlen(b);

    int max = lena >= lenb ? lena : lenb; 

    char* result = (char*) malloc((max + 2) * sizeof(char));
    result[max + 1] = '\0';

    int carry = 0;

    for(int i = 0; i < max; i++) {
        int bitA = (i < lena) ? a[lena - 1 - i] - '0' : 0;
        int bitB = (i < lenb) ? b[lenb - 1 - i] - '0' : 0;
        
        int sum = bitA + bitB + carry;
        result[max - i] = (sum % 2) + '0';
        carry = sum / 2;
    }

    if (carry) {
        result[0] = '1';
        return result;
    } else {
        return result + 1;
    }
}

