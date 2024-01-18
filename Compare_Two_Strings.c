#include <stdio.h>
#include <string.h>
int compareStrings(char str1[], char str2[]) {
    if (strcmp(str1, str2) == 0) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    char str1[100], str2[100];
    scanf("%[^
]%*c", str1);
    scanf("%[^
]%*c", str2);
    int result = compareStrings(str1, str2);
    if (result == 1) {
        printf("Strings are Equal
");
    } else {
        printf("Strings are not Equal
");
    }
    return 0;
}