#include <stdio.h>
int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
int is_strong(int num)
{
    int temp = num;
    int sum = 0;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    if (sum == num)
        return 1;
    else
        return 0;
}
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d", &N);
        if (is_strong(N))
            printf("Strong
");
        else
            printf("Not Strong
");
    }
    return 0;
}