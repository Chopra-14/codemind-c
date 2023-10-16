#include<stdio.h>
int main()
{
    float bs;
    scanf("%f",&bs);
    if(bs<=10000)
    printf("%.2f",bs+bs*0.8+bs*0.2);
    else if(bs<=20000)
    printf("%.2f",bs+bs*0.9+bs*0.25);
    else
    printf("%.2f",bs+bs*0.95+bs*0.3);
}