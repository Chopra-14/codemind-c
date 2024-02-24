#include <stdio.h>
void reverse_string(char *str) {
    int length = 0;
    int i;
    char temp;
    // Find the length of the string
    while (str[length] != NULL) {
        length++;
    }
    // Reverse the string
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}
int main() {
    char str[100];
    scanf("%[^
]", str);
    reverse_string(str);
    printf("%s
", str);
    return 0;
}