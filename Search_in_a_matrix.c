#include <stdio.h>
int search_matrix(int mat[][101], int N, int M, int X) {
    int i = 0; // row pointer
    int j = M - 1; // column pointer

    while (i < N && j >= 0) {
        if (mat[i][j] == X) {
            return 1; // Element found
        } else if (mat[i][j] > X) {
            j--; // Move left in the same row
        } else {
            i++; // Move down to the next row
        }
    }

    return 0; // Element not found
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int mat[101][101];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int X;
    scanf("%d", &X);

    int result = search_matrix(mat, N, M, X);
    printf("%d
", result);

    return 0;
}
