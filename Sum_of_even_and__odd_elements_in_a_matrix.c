#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n],i,j,e=0,o=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0) 
            e=e+a[i];
            else 
            o=o+a[i];
        }
    }
    printf("%d %d",e,o);
}