#include <stdio.h>
int divide(int a, int b)
{
    while (a % b == 0)
    {
        a = a / b;
        return a;
    }
}
int Ugly(int n)
{
    n = divide(n, 2);
    n = divide(n, 3);
    n = divide(n, 5);
    if (n == 1)
    {
        return 1;
    }
    else
        return 0;
}
int ChUgly(int x)
{
    int i = 1;
    int count = 1;
    while (x > count)
    {
        i++;
        if (Ugly(i))
        {
            count++;
        }
    }
    return i;
}
int main()
{
    int num, i,ans;
    scanf("%d", &num);
    ans = ChUgly(num);
    printf("%d",ans);
}