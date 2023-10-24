#include<stdio.h>
int main()
{
    int units;
    float cpu,bill,sur=0,tot;
    scanf("%d",&units);
    if(units<=199)
    {
        cpu=1.20;
    }
    else if(units >= 200 && units < 400)
    {
        cpu=1.40;
    }
    else if(units >= 400 && units < 600)
   {
       cpu=1.60;
   }
   else if(units>=600 && units < 800)
   {
       cpu=1.80;
   }
   else
   {
       cpu=2.00;
   }
   bill=cpu*units;
   if(bill>400)
   {
       sur=0.15*bill;
   }
     tot=bill+sur;
     printf("Units Consumed: %d
",units);
     printf("Cost per Unit: %.2f
",cpu);
     printf("Bill: %.2f
",bill);
     printf("Surcharge: %.2f
", sur);
     printf("Total Amount: %.2f", tot);
}