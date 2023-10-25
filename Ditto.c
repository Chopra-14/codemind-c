#include<stdio.h>
int main()
{
    int X,Y,P;
    scanf("%d%d%d",&X,&Y,&P);
    if((X-Y)%(P+P)==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}