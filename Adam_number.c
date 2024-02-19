#include <stdio.h>
#include <math.h>
int reverse_number(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}
int is_adam_number(int num) {
    int square = num * num;
    int reverse = reverse_number(num);
    int reverse_square = reverse * reverse;
    int reverse_of_reverse_square = reverse_number(reverse_square);
    if (square == reverse_of_reverse_square) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int num;
    scanf("%d", &num);
    if (is_adam_number(num)) {
        printf("True
");
    } else {
        printf("False
");
    }
    return 0;
}