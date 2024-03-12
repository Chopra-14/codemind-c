#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float profit;
    profit=(y-x)*100.0/x;
    printf("%.2f",profit);
}