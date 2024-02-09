#include <stdio.h>
int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int matrix[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int max_row_sum = 0;
    int max_column_sum = 0;
    for (int i = 0; i < N; i++) {
        int row_sum = 0;
        for (int j = 0; j < M; j++) {
            row_sum += matrix[i][j];
        }
        if (row_sum > max_row_sum) {
            max_row_sum = row_sum;
        }
    }
    for (int j = 0; j < M; j++) {
        int column_sum = 0;
        for (int i = 0; i < N; i++) {
            column_sum += matrix[i][j];
        }
        if (column_sum > max_column_sum) {
            max_column_sum = column_sum;
        }
    }
    int max_sum = (max_row_sum > max_column_sum) ? max_row_sum : max_column_sum;
    printf("%d
", max_sum);
    return 0;
}