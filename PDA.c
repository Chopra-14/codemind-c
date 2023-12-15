#include<stdio.h>
void checknumbertype(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        sum +=i;
    }
    if(sum==n) printf("PERFECT");
    else if(sum<n) printf("DEFICIENT");
    else printf("ABUNDANT");
}
int main()
{
    int n;
    scanf("%d",&n);
    checknumbertype(n);
    return 0;
}
