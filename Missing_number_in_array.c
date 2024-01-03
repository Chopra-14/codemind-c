#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int sum=0;
        for(int i=1;i<=n-1;i++)
        {
            int x;
            scanf("%d",&x);
            sum+=x;
        }
        int exp_sum=n*(n+1)/2;
        printf("%d
",exp_sum-sum);
    }
}