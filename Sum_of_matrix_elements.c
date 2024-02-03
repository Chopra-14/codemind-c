#include <stdio.h>
int sum_array(int arr[][100], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[100][100];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = sum_array(arr, m, n);
    printf("%d
",sum);
    return 0;
}
