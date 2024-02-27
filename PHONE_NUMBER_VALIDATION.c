#include <stdio.h>
#include <string.h>
int is_valid_phone_number(char *number) {
    int len = strlen(number);
    if (len != 10 || number[0] == '0') {
        return 0;
    }  
    for (int i = 0; i < len; i++) {
        if (number[i] < '0' || number[i] > '9') {
            return 0;
        }
    }
    return 1;
}
int main() {
    char number[101];
    scanf("%s", number);  
    if (is_valid_phone_number(number)) {
        printf("Valid
");
    } else {
        printf("Invalid
");
    }
    return 0;
}