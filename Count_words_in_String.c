#include <stdio.h>
int countWords(char str[]) 
{
    int count = 1; 
    for (int i = 0; str[i] != NULL; i++) 
    {
        if (str[i] == ' ')
            count++;
    }
    return count;
}
int main() 
{
    char str[101];
    scanf("%[^
]", str);
    int wordCount = countWords(str);
     printf("%d", wordCount);
}
