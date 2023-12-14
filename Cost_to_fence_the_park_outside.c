#include<stdio.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int area=2*l*w+2*b*w+4*w*w;
    int cost=c*area;
    printf("%d",cost);
}