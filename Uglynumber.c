#include <stdio.h>
int Ugly(int x)
{
    if (x == 1)
    {
        return 1;
    }
    if (x % 2 == 0)
    {
        return Ugly(x / 2);
    }
    if (x % 3 == 0)
    {
        return Ugly(x / 3);
    }
    if (x % 5 == 0)
    {
        return Ugly(x / 5);
    }
    return 0;
}
int main()
{
    int num, i, j, k=0;
    scanf("%d", &num);
    int ans[num * num];
    for (i = 1; i < num * num + 3; i++, k++)
    {
        j = Ugly(i);
        if (j == 1)
        {
            ans[k] = i;
        }
        else
            k--;
    }
    printf("%d",ans[num-1]);
    return 0;
}