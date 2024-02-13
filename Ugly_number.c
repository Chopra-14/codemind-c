#include <stdio.h>
int is_ugly(int num) {
    if(num <= 0) {
        return 0;
    }
    while(num % 2 == 0) {
        num /= 2;
    }
    while(num % 3 == 0) {
        num /= 3;
    }
    while(num % 5 == 0) {
        num /= 5;
    }
    return num == 1;
}
int main() {
    int num;
    scanf("%d", &num);
    if(is_ugly(num)) {
        printf("Ugly Number
");
    } else {
        printf("Not Ugly Number
");
    }
    return 0;
}