


typedef struct {
    int* stack;  // Pile principale
    int* minStack;  // Pile pour les valeurs minimales
    int topIndex;  // Indice du sommet de la pile principale
    int minTopIndex;  // Indice du sommet de la pile des minima
    
} MinStack;


MinStack* minStackCreate() {
    MinStack* obj = (MinStack*) malloc(sizeof(MinStack));
    obj->stack = (int*) malloc(10000 * sizeof(int));  
    obj->minStack = (int*) malloc(10000 * sizeof(int));
    obj->topIndex = -1;
    obj->minTopIndex = -1;
    return obj;
}

void minStackPush(MinStack* obj, int val) {
    obj->stack[++obj->topIndex] = val;

    if (obj->minTopIndex == -1 || val <= obj->minStack[obj->minTopIndex]) {
        obj->minStack[++obj->minTopIndex] = val;
    }
}

void minStackPop(MinStack* obj) {
    if(obj->stack[obj->topIndex] == obj->minStack[obj->minTopIndex]){
        obj->topIndex--;
        obj->minTopIndex--;
    }
    else{
        obj->topIndex--;
    }
}

int minStackTop(MinStack* obj) {
    return obj->stack[obj->topIndex];
}

int minStackGetMin(MinStack* obj) {
    return obj->minStack[obj->minTopIndex];
}

void minStackFree(MinStack* obj) {
    free(obj->stack);
    free(obj->minStack);
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, val);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/
