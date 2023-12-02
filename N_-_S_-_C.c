#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int n=a+1;n<b;n++)
    {
        int square=n*n;
int cube=n*n*n;
        printf("%d %d %d
",n,square,cube);
    }
}