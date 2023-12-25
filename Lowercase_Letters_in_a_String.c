#include<stdio.h>
int main() 
{
	char str[101];
	int count=0;
	scanf("%[^
]", str);
	int i;
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		count++;
	}
	printf("%d",count);
}