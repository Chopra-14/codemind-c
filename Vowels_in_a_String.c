#include<stdio.h>
int main()
{
    char str[101];
    int i,index=0;
    char vowel;
    int found=0;
    fgets(str, 101 , stdin);
    scanf("%c",&vowel);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==vowel)
        {
            found=1;
            index=i;
            break;
        }
    }
    if(found==1) 
    {
        printf("True
%d
",index);
    }
    else {
        printf("False
");
    }
}