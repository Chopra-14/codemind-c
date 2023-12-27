#include<stdio.h>
#include<ctype.h>
#include<string.h>
int is_palindrome(char str[])
{
    int left=0;
    int right=strlen(str)-1;
    while(left<right)
    {
        if(tolower(str[left]!=tolower(str[right]))) 
        {
        return 0;
        }
        left++;
        right--;
    }
    return 1;
}
int main()
{
char str[101];
scanf("%s",str);
if(is_palindrome(str))
{
    printf("Palindrome
");
}
else 
{
    printf("Not Palindrome
");
}
return 0;
}