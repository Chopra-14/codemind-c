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
    int columnSum[M];
    for (int j = 0; j < M; j++) {
        columnSum[j] = 0;
        for (int i = 0; i < N; i++) {
            columnSum[j] += matrix[i][j];
        }
    }
    for (int j = 0; j < M; j++) {
        printf("%d ", columnSum[j]);
    }
}