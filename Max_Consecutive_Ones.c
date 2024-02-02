#include <stdio.h>

int find_max_consecutive_ones(int nums[], int n) {
    int max_ones = 0;
    int current_ones = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == 1) {
            current_ones++;
            max_ones = (current_ones > max_ones) ? current_ones : max_ones;
        } else {
            current_ones = 0;
        }
    }
    return max_ones;
}
int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int max_consecutive_ones = find_max_consecutive_ones(nums, n);
    printf("%d
", max_consecutive_ones);
    return 0;
}