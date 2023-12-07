#include<stdio.h>
#include<math.h>
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    int num_digits=floor(log10(n)+1);
    int first_x=n/pow(10,num_digits-x);
    int last_x=n%(int)pow(10,x);
    int diff=abs(first_x-last_x);
    printf("%d
",diff);
}