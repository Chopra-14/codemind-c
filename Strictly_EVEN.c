#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int flag=0;
    for(i=0;i<n;i++)
    {
        if(i%2==1&&arr[i]%2==0)
        {
         flag=1;
         break;
     }
    }
    if(flag==0) printf("True");
    else printf("False");
}