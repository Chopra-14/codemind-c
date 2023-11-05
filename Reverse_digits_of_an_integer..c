#include<stdio.h>
int main()
{
    int i,n=0,r;
    scanf("%d",&i);
    while(i>0)
    {
        r=i%10;
        n=n*10+r;
        i/=10;
    }
        printf("%d",n);
}