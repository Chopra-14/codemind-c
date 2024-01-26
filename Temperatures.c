#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N); // Read the length of the array
    int temperatures[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &temperatures[i]); // Read the temperatures
    }
    int result[N];
    for (int i = 0; i < N; i++) {
        result[i] = 0; // Initialize the result array with 0
        for (int j = i + 1; j < N; j++) {
            if (temperatures[j] > temperatures[i]) {
                result[i] = j - i; // Calculate the number of days to wait
                break;
            }
        }
    }
    // Display the result
    for (int i = 0; i < N; i++) {
        printf("%d ", result[i]);
    }
}