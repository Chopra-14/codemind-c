#include <stdio.h>
#include <string.h>
int main() {
    char word[101];
    scanf("%s", word);
    int countZ = 0, countO = 0;
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == 'z') {
            countZ++;
        } else if (word[i] == 'o') {
            countO++;
        }
    }
    if (2 * countZ == countO) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}