#include <stdio.h>
#include <stdlib.h>
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int n;
    scanf("%d", &n);

    int lengths[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &lengths[i]);
    }
    int max_length = lengths[0];
    for (int i = 1; i < n; i++) {
        max_length = gcd(max_length, lengths[i]);
    }
    printf("%d
", max_length);
    return 0;
}