#include<stdio.h>
int main() 
{
	char str[101];
	int count=0;
	scanf("%[^
]", str);
	int i;
	for(i=0;str[i]!=0;i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		count++;
	}
	printf("%d",count);
}