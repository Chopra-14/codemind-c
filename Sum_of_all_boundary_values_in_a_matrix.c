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
    int sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i == 0 || i == N - 1 || j == 0 || j == M - 1) {
                sum += matrix[i][j];
            }
        }
    }
    printf("%d
", sum);
    return 0;
}