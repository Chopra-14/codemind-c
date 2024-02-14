#include <stdio.h>
int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int is_mega_prime(int num) {
    if (!is_prime(num)) {
        return 0;
    }
    while (num > 0) {
        int digit = num % 10;
        if (!is_prime(digit)) {
            return 0;
        }
        num /= 10;
    }
    return 1;
}
int main() {
    int num;
    scanf("%d", &num);
    if (is_mega_prime(num)) {
        printf("Mega Prime
");
    } else {
        printf("Not Mega Prime
");
    }
    return 0;
}
