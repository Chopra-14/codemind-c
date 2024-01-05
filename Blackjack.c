#include <stdio.h>
int findThirdNumber(int A, int B) {
    int thirdNumber = 21 - A - B; // Calculate the possible third number
    if (thirdNumber >= 1 && thirdNumber <= 10) {
        return thirdNumber; // Return the third number if it is within the valid range
    } else {
        return -1; // Return -1 if no valid third number exists
    }
}
int main() {
    int A, B;
    scanf("%d %d", &A, &B); // Read the input values
    int thirdNumber = findThirdNumber(A, B); // Find the third number
    printf("%d
", thirdNumber); // Print the result
    return 0;
}
