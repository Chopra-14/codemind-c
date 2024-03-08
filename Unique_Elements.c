#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    int unique_elements[N];
    int unique_count = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        int is_unique = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                is_unique = 0;
                break;
            }
        }
        if (is_unique) {
            unique_elements[unique_count] = arr[i];
            unique_count++;
        }
    }
    for (int i = 0; i < unique_count; i++) {
        printf("%d ", unique_elements[i]);
    }
    return 0;
}