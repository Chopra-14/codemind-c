#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%[^
]", str);
    int count = strlen(str);
    printf("%d
",count);
}