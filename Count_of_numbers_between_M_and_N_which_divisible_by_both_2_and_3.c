#include<stdio.h>
int main()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    int count=0;
    for(i=m;i<=n;i++)
    {
        if(i%2==0&&i%3==0)
        count++;
    }
    printf("%d
",count);
}
