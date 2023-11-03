#include<stdio.h>
int main()
{
    int n,t,r=0;
    scanf("%d",&n);
    t=n;
    while(t>0)
    {
        int res=t%10;
        r=(r*10)+res;
        t=t/10;
    }
    if(n==r)
    printf("Palindrome");
    else
    printf("Not Palindrome");
}