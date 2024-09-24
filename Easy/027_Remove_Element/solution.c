int removeElement(int* nums, int numsSize, int val) {
    int k = 0;
    int tmp;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] != val){
            tmp  = i;
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
