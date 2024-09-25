int calculate(char* s) {

    int stack[1000];
    int top = -1;
    int result = 0;
    int sign = 1;
    int i = 0;

    while (s[i] != '\0') {
        char c = s[i];

        if (isdigit(c)) {
            int num = 0;
            while (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            result += sign * num;
            i--;
        } else if (c == '+') {
            sign = 1;
        } else if (c == '-') {
            sign = -1;
        } else if (c == '(') {
            stack[++top] = result;
            stack[++top] = sign;
            result = 0;
            sign = 1;
        } else if (c == ')') {
            result = result * stack[top--];
            result += stack[top--];
        }
        i++;
    }

    return result;
}

