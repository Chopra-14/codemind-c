#include <stdio.h>
int add_digits(int num) {
    while (num > 9) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}
int main() {
    int num;
    scanf("%d", &num);
    int result = add_digits(num);
    printf("%d
",result);
    return 0;
}