#include <stdio.h>
#define MAX_CHAR 26
int first_non_repeating_char(char* s) {
    int freq[MAX_CHAR] = {0};
    for (int i = 0; s[i] != NULL; i++) {
        freq[s[i] - 'a']++;
    }
    for (int i = 0; s[i] != NULL; i++) {
        if (freq[s[i] - 'a'] == 1) {
            return i;
        }
    }
    return -1;
}
int main() {
    char s[101];
    scanf("%s",&s);
    int index = first_non_repeating_char(s);
    printf("%d
", index);
    return 0;
}