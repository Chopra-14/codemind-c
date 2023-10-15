#include<stdio.h>
int main()
{
    int T,S,B,C,z;
    scanf("%d%d%d%d",&T,&S,&B);
    C=2*T*S*B*512;
    z=C/1024;
    printf("%d KB",z);
}