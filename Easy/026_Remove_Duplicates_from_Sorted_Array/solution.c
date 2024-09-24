int removeDuplicates(int* nums, int numsSize) {
    int min = -101;
    int k;
    for(int i = 0; i < numsSize; i++){
        if(min < nums[i]){
            min = nums[i];
            nums[k] = min;
            k++;
        }
    }
    return k;
}
