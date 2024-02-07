#include <stdio.h>
#include <math.h>
int convert_to_decimal(int arr[], int n) {
    int decimal = 0;
    for (int i = n - 1; i >= 0; i--) {
        decimal += arr[i] * pow(2, n - i - 1);
    }
    return decimal;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int decimal = convert_to_decimal(arr, n);
    printf("%d
", decimal);
    return 0;
}