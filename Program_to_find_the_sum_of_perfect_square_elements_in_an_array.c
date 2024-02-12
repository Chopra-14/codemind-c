#include <stdio.h>
#include <math.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        int sqrtNum = sqrt(arr[i]);
        if (sqrtNum * sqrtNum == arr[i]) {
            sum += arr[i];
        }
    }
    printf("%d
", sum);
    return 0;
}