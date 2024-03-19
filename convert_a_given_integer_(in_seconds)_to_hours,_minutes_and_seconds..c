#include<stdio.h>
int main()
{
    int h,s,m;
    scanf("%d",&s);
    h=s/3600;
    s=s%3600;
    m=s/60;
    s=s%60;
    printf("H:M:S-%d:%d:%d",h,m,s);
}