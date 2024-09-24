bool isValid(char* s) {

    int len = strlen(s);
    int array[len];
    int top = -1;

    for(int i = 0; i < len; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            array[++top] = s[i];
        }
        else{
            if(top == -1){
                return false;
            }
            if((s[i] == ')' && array[top] != '(') || 
               (s[i] == ']' && array[top] != '[') || 
               (s[i] == '}' && array[top] != '{')){
                return false;
            }
            top--;
        }
    }
    return top == -1;
}
