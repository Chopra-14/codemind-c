#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=1;i<n;i+=2)
    {
        sum+=arr[i];
    }
    int even_sum=0;
    for(i=0;i<n;i+=2)
    {
        even_sum+=arr[i];
    }
    printf("%d",abs(even_sum-sum));
    
}