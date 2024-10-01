int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize -1;

    while(left <= right){
        int m = left + (right - left) / 2;
        if(nums[m] == target)
            return m;
        else if(nums[m] < target){
            left = m + 1;
        }
        else{
            right = m - 1;
        }

    }

    return -1;
}


