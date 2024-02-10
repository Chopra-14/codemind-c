#include <stdio.h>
int main() {
    int n, i, j, count;
    int found = 0;
    // Read the size of the array
    scanf("%d", &n);
    int arr[n];
    // Read the array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Iterate through the array
    for (i = 0; i < n; i++) {
        count = 0;
        // Count the number of times the element appears in the array
        for (j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        // If count is 1, it means the element is not repeated
        if (count == 1) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }
    // If no elements found, print -1
    if (!found) {
        printf("-1");
    }
    return 0;
}
