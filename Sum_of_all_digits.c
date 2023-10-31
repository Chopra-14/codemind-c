#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int sum=0;
    while(a>0) {
    int b=a%10;
    a=a/10;
    sum=sum+b;
    }
        printf("%d ",sum);
}