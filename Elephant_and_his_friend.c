#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    scanf("%d",&x);
    int steps=ceil((double)x/5);
    printf("%d",steps);
}