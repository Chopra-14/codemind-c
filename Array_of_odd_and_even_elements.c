#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int even_count=0,odd_count=0;
    int even[n],odd[n];
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
        even[even_count]=arr[i];
        even_count++;
        }
        else
        {
            odd[odd_count]=arr[i];
            odd_count++;
        }
    }
    for(i=0;i<odd_count;i++)
    {
        printf("%d ",odd[i]);
    }
    for(i=0;i<even_count;i++)
    {
        printf("%d ",even[i]);
    }
}