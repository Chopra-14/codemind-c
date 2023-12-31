#include <stdio.h>

int min_moves(int a, int b)
{
    int diff = (b > a) ? (b - a) : (a - b);
    int moves = diff / 10;
    moves += (diff % 10 != 0) ? 1 : 0;
    return moves;
}
int main() {
    int a, b;
    scanf("%d%d", &a,&b);
    int result = min_moves(a, b);
    printf("%d
", result);
}

