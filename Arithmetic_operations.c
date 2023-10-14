#include<stdio.h>
int main()
{
    int a,b,Sum,Difference,Product,Quotient,Remainder;
    scanf("%d %d",&a,&b);
    Sum=a+b;
    printf("Sum:%d
",Sum);
    Difference=a-b;
    printf("Difference:%d
",Difference);
    Product=a*b;
    printf("Product:%d
",Product);
    Quotient=a/b;
    printf("Quotient:%d
",Quotient);
    Remainder=a%b;
    printf("Remainder:%d
",Remainder);
}