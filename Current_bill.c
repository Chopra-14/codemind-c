#include<stdio.h>
int main()
{
	int u;
	float x,b,t;
	scanf("%d",&u);
	if(u<200)
	{
		x=1.20;
	}
	else if(u>=200 && u<400) 
	{
	x=1.50;
	}
	else if(u>=400 && u<600)
	{
	x=1.80;
	}
	else
	{
	x=2.00;
	}
	b=u*x;
	if(b>400)
	{
	t=b+(b*0.15);
	printf("%.2f",t);
    }
	else
    {
	t=b+100;
	printf("%.2f",t);
	 }
}