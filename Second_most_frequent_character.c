#include <stdio.h>
#include <string.h>
#define MAX_CHAR 256
char find_second_most_frequent_char(char* string) {
    int count[MAX_CHAR] = {0};
    int first_max = 0, second_max = 0;
    for (int i = 0; string[i] != NULL; i++) {
        count[string[i]]++;
    }
    for (int i = 0; i < MAX_CHAR; i++) {
        if (count[i] > count[first_max]) {
            second_max = first_max;
            first_max = i;
        }
        else if (count[i] > count[second_max] && count[i] != count[first_max]) {
            second_max = i;
        }
    }
    if (count[second_max] == 0) {
        return -1;
    }
    else {
        return second_max;
    }
}
int main() {
    char string[101];
    scanf("%s", string);
    char second_most_frequent_char = find_second_most_frequent_char(string);
    if (second_most_frequent_char == -1) {
        printf("-1
");
    }
    else {
        printf("%c
", second_most_frequent_char);
    }
    return 0;
}