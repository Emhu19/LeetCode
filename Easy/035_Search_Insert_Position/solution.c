int searchInsert(int* nums, int numsSize, int target) {
    int result;
    for(int i = 0; i < numsSize; i ++){
        if(nums[i] >= target){
            return i;
        }
    }
    return numsSize;
}
