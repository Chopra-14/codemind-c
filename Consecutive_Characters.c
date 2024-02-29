#include <stdio.h>
#include <string.h>
int max_power(char* s) {
    int n = strlen(s);
    int power = 1;
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i-1]) {
            count++;
        } else {
            power = (count > power) ? count : power;
            count = 1;
        }
    }
    power = (count > power) ? count : power;
    return power;
}
int main() {
    char s[100];
    scanf("%s", s);
    int result = max_power(s);
    printf("%d
", result);
    return 0;
}
