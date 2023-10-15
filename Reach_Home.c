#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(b%a==0||a*5>b)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}