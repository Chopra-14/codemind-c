#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int nums[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }
    int result[N];
    for (int i = 0; i < N; i++) {
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (j != i && nums[j] < nums[i]) {
                count++;
            }
        }
        result[i] = count;
    }
    for (int i = 0; i < N; i++) {
        printf("%d ",result[i]);
    }
    return 0;
}