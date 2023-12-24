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
    int binary=1;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0&&arr[i]!=1)
        {
            binary=0;
            break;
        }
    }
    if(binary) printf("True");
    else printf("False");
    
}