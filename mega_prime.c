#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}

bool isMegaPrime(int num) {
    if (!isPrime(num)) {
        return false;
    }
    
    while (num > 0) {
        int digit = num % 10;
        if (!isPrime(digit)) {
            return false;
        }
        num /= 10;
    }
    
    return true;
}

int main() {
    int num;
    scanf("%d", &num);
    if (isMegaPrime(num)) {
        printf("Mega Prime
");
    } else {
        printf("Not Mega Prime
");
    }
    
    return 0;
}
