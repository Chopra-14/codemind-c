#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        int count=0;
        for(int i=l;i<=r;i++)
        {
            int lastdigit=i%10;
            if(lastdigit == 2 || lastdigit == 3 || lastdigit == 9)
            {
                count++;
            }
        }
        printf("%d
",count);
    }
}