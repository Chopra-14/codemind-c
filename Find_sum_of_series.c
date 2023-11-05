#include<stdio.h>
int main()
{
    int i,n;
    float sum=0.0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+((float)1/(float)i);
    }
    printf("%.2f",sum);
}