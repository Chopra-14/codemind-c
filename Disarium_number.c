#include<stdio.h>
#include<math.h>
int main()
{
    int n,p,sum=0,i,digit_count=0;
    scanf("%d",&n);
    i=n;
    while(i!=0)
    {
        i=i/10;
        digit_count++;
    }
    i=n;
    while(i!=0)
    {
        p=i%10;
        sum=sum+pow(p,digit_count);
        i=i/10;
        digit_count--;
    }
    if (sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}