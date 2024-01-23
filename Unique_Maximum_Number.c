#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n); // Read the size of the array
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read the array elements
    }
    int freq[101] = {0};
    int highest_unique = -1;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++; // Count the occurrences of each element
    }
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1 && arr[i] > highest_unique) {
            highest_unique = arr[i]; // Find the maximum unique element
        }
    }
    printf("%d", highest_unique); // Print the highest unique element
}
