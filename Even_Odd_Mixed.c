#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);

    int even_digit= 0;
    int odd_digit= 0;
    int current_digit;

    while (num != 0) {
        current_digit = num % 10;

        if (current_digit % 2 == 0) {
            even_digit++;
        } 
        else {
            odd_digit++;
        }

        num /= 10;
    }

    if (even_digit > 0 && odd_digit > 0) {
        printf("Mixed
");
    } else if (even_digit > 0) {
        printf("Even
");
    } else {
        printf("Odd
");
    }
}