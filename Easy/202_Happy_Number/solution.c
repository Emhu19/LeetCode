int digitSquareSum(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    int sum = n;
    int tmp = digitSquareSum(n);

    while(sum != 1 && tmp != sum){
        sum = digitSquareSum(sum);
        tmp = digitSquareSum(digitSquareSum(tmp));
    }
    return tmp == 1;
}
