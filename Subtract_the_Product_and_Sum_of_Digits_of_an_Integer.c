#include <stdio.h>
int digit_difference(int n) {
    int product = 1;
    int sum = 0;
    while (n != 0) {
        int digit = n % 10;
        product *= digit;
        sum += digit;
        n /= 10;
    }
    return product - sum;
}
int main() {
    int n;
    scanf("%d", &n);
    int difference = digit_difference(n);
    printf("%d
", difference);
    return 0;
}
