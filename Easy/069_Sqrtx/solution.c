int mySqrt(int x) {
    if(x==0)
        return 0;
    if(x==1 || x==2 || x==3)
        return 1;

    int left = 2, right = x / 2, mid, sqrt;

    while (left <= right) {
        mid = left + (right - left) / 2;
        long long square = (long long) mid * mid;

        if (square == x) {
            return mid;
        } else if (square < x) {
            left = mid + 1;
            sqrt = mid;
        } else {
            right = mid - 1;
        }
    }

    return sqrt;
}
