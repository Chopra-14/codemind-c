#include <stdio.h>
#include <string.h>
void sort_string(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
int main() {
    char str1[101], str2[101], merged_str[201];
    scanf("%s", str1);
    scanf("%s", str2);
    strcpy(merged_str, str1);
    strcat(merged_str, str2);
    sort_string(merged_str);
    printf("%s
", merged_str);
    return 0;
}