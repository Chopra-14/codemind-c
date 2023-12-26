#include<stdio.h>
#include<string.h>
int main()
{
    char str1[101];
    char str2[101];
    scanf("%[^
]",str1);
    strcpy(str2,str1);
    printf("%s",str2);
    
}