#include <stdio.h>
int find_missing_positive(int nums[], int n) {
    // Step 1: Mark elements as visited
    for (int i = 0; i < n; i++) {
        // Ignore non-positive and out-of-range elements
        while (1 <= nums[i] && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
            int temp = nums[nums[i] - 1];
            nums[nums[i] - 1] = nums[i];
            nums[i] = temp;
        }
    }
    // Step 2: Find the first positive element
    for (int i = 0; i < n; i++) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }
    // If all elements are in order, return the next positive integer
    return n + 1;
}
int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    // Calling the function to find the smallest missing positive integer
    int result = find_missing_positive(nums, n);
    // Displaying the result
    printf("%d
", result);
    return 0;
}
