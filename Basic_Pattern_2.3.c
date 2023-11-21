#include<stdio.h>
int main()
{
    char i,j;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",64+j);
        }
        printf("
");
    }
}