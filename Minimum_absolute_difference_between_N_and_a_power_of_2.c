#include <stdio.h>
#include <math.h>
int min_absolute_difference(int N) {
    int left = pow(2,floor(log2(N)));
    int right = left * 2;
    int diff1 = N - left;
    int diff2 = right - N;
    return (diff1 < diff2) ? diff1 : diff2;
}
int main() {
    int N;
    scanf("%d", &N);
    int min_diff = min_absolute_difference(N);
    printf("%d", min_diff);
}
