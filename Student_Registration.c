#include<stdio.h>
int main()
{
    int a,b,c;
    int times;
    scanf("%d",&times);
    scanf("%d%d%d",&a,&b,&c);
    int left=b-c;
    if(left>=a)
    printf("YES
");
    else
    printf("NO
");
    int d,e,f;
    scanf("%d%d%d",&d,&e,&f);
    int right=e-f;
    if(right>=d)
    printf("YES
");
    else
    printf("NO
");
}