#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[101];
    fgets(str,sizeof(str),stdin);
    int sum=0;
    int i;
    for(i=0;str[i]!=NULL;i++)
    {
        if(isdigit(str[i]))
        {
            sum+=str[i]-'0';
        }
    }
    printf("%d
",sum);
}