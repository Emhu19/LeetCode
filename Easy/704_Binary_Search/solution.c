int search(int* nums, int numsSize, int target) {
    int m = numsSize / 2;
    if(nums[m] == target)
        return m;
    if (nums[m] > target)
        for(int i = 0; i < m; i++){
            if(nums[i] == target)
                return i;
        }
    else
        for(int i = m; i < numsSize; i++){
            if(nums[i] == target)
                return i;
        }
    return -1;
}
