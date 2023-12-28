#include<stdio.h>
int main()
{
    char str[101];
    int sum=0;
    scanf("%s",str);
    int i;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            sum+=str[i]-'0';
        }
    }
    printf("%d
",sum);
}