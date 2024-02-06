#include <stdio.h>
// Function to find the GCD of two numbers
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
// Function to find the LCM of an array of numbers
int find_lcm(int arr[], int n) {
    int lcm = arr[0];
    for (int i = 1; i < n; i++) {
        lcm = (lcm * arr[i]) / gcd(lcm, arr[i]);
    }
    return lcm;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int lcm = find_lcm(arr, n);
    printf("%d
", lcm);
    return 0;
}
