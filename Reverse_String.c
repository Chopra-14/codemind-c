#include <stdio.h>
#include <string.h>
void reverse_words(char *str) {
    int len = strlen(str);
    int i, j;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    for (i = 0, j = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == NULL) {
            int start = j;
            int end = i - 1;
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            j = i + 1;
        }
    }
    printf("%s
", str);
}
int main() {
    char str[101];
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '
') {
        str[strlen(str) - 1] = NULL;
    }
    reverse_words(str);
    return 0;
}