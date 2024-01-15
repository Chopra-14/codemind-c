#include <stdio.h>
int main() {
    int n, total_handshakes;
    scanf("%d", &n);
    total_handshakes = (n * (n - 1)) / 2;
    printf("%d", total_handshakes);
}