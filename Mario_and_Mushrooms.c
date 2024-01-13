#include <stdio.h>
int main() {
    int X;
    scanf("%d", &X);
    int size = 1; // initially normal
    // Calculate Mario's size after eating X mushrooms
    if (X % 3 == 1) {
        size = 2; // huge
    } else if (X % 3 == 2) {
        size = 0; // small
    }
    if (size == 0) {
        printf("SMALL
");
    } else if (size == 1) {
        printf("NORMAL
");
    } else if (size == 2) {
        printf("HUGE
");
    }
}