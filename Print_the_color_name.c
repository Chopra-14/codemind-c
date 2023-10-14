#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='v'||ch=='V')
    {
        printf("Violet");
    }
    else if(ch=='i'||ch=='I')
    {
        printf("Indigo");
    }
    else if(ch=='b'||ch=='B')
    {
        printf("Blue");
    }
    else if(ch=='g'||ch=='G')
    {
        printf("Green");
    }
    else if(ch=='y'||ch=='Y')
    {
        printf("Yellow");
    }
    else if(ch=='o'||ch=='O')
    {
        printf("Orange");
    }
    else if(ch=='r'||ch=='R')
    {
        printf("Red");
    }
    else
    {
        printf("-1");
    }
}