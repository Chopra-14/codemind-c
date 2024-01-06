#include <stdio.h>

int main() {
    int N, M, K;
    scanf("%d %d %d", &N, &M, &K);
    // Check if Wanda can eat all the loaves of bread before they expire
    if (N <= (M * K)) {
        printf("YES
");
    } else {
        printf("NO
");
    }
    return 0;
}