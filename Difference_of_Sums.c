#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int sumOfSquares = 0;
    int squareOfSum = 0;
    int sum = 0;

    for (int i = 1; i <= N; i++) {
        sumOfSquares += i * i;
        sum += i;
    }

    squareOfSum = sum * sum;

    int difference = sumOfSquares - squareOfSum;

    if (difference < 0) {
        difference = -difference;
    }

    printf("%d
", difference);
}