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
    int even[n],odd[n];
    int even_c=0,odd_c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
        even[even_c]=arr[i];
        even_c++;
        }
        else
        {
        odd[odd_c]=arr[i];
        odd_c++;
        }
    }
    for(i=0;i<even_c;i++)
    {
    printf("%d ",even[i]);
    }
    for(i=0;i<odd_c;i++)
    {
    printf("%d ",odd[i]);
    }
}