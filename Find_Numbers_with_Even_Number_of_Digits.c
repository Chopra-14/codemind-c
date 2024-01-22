#include <stdio.h>
int count_even_digits(int n, int arr[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int digit_count = 0;
        while (num != 0) {
            num /= 10;
            digit_count++;
        }
        if (digit_count % 2 == 0) {
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int even_digit_count = count_even_digits(n, arr);
    printf("%d
", even_digit_count);

    return 0;
}
