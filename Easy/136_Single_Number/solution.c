int singleNumber(int* nums, int numsSize) {
    int resultat = 0;
    for(int i = 0; i < numsSize; i++){
        resultat ^= nums[i];
    }
    return resultat;
}
