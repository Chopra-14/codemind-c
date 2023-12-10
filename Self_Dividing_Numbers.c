#include<stdio.h>
int main()
{
    int i,a,b,d,t,s,c;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        s=0,c=0;
        t=i;
        while(t)
        {
            d=t%10;
            t=t/10;
            s++;
 if(d==0)
{
    break;
} 
else
{
    if(i%d==0)
    {
        c++;
    }
}
}
if(s==c)
{
    printf("%d ",i);
}
    }
}