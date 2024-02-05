#include <stdio.h>
void replace_elements(int arr[], int n) {
    int max_element = arr[n-1];
    arr[n-1] = -1;

    for (int i = n-2; i >= 0; i--) {
        int temp = arr[i];
        arr[i] = max_element;
        max_element = (max_element > temp) ? max_element : temp;
    }
}
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     replace_elements(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n-1) {
            printf(" ");
        }
    }
    return 0;
}
