#include<stdio.h>
#include<ctype.h>
#include<string.h>
void tolowercase(char str[])
{
    int length=strlen(str);
    int i;
    for(i=0;i<length;i++)
    {
        str[i]=tolower(str[i]);
    }
}
int main()
{
    char str[101];
    scanf("%s",str);
    tolowercase(str);
    printf("%s
",str);
}