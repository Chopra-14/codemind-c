#include <stdio.h>
int isPerfectNumber(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        return 1; // True
    } else {
        return 0; // False
    }
}
int main() {
    int num;
    scanf("%d", &num);
    if (isPerfectNumber(num)) {
        printf("True
");
    } else {
        printf("False
");
    }
    return 0;
}