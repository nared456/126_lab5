#include <stdio.h>
int main()
{
    int n, i, c = 0;
    int num[100];
    scanf("%d", &n);
    char ps[n];
    scanf("%s", &ps);
    for (i = 0; i < n;)
    {
        if(ps[i]=='\0')
            break;
        if (ps[i] >= 48 && ps[i] <= 57)
        {
            if (ps[i + 4] >= 48 && ps[i + 4] <= 57 && ps[i + 3] >= 48 && ps[i + 3] <= 57 && ps[i + 2] >= 48 && ps[i + 2] <= 57 && ps[i + 1] >= 48 && ps[i + 1] <= 57)
            {
                num[c] = (10000 * (ps[i] - 48)) + (1000 * (ps[i + 1] - 48)) + (100 * (ps[i + 2] - 48)) + (10 * (ps[i + 3] - 48)) + (ps[i + 4] - 48);
                i += 5;
                c++;
            }
            else if (ps[i + 3] >= 48 && ps[i + 3] <= 57 && ps[i + 2] >= 48 && ps[i + 2] <= 57 && ps[i + 1] >= 48 && ps[i + 1] <= 57)
            {
                num[c] = (1000 * (ps[i] - 48)) + (100 * (ps[i + 1] - 48)) + (10 * (ps[i + 2] - 48)) + (ps[i + 3] - 48);
                i += 4;
                c++;
            }
            else if (ps[i + 2] >= 48 && ps[i + 2] <= 57 && ps[i + 1] >= 48 && ps[i + 1] <= 57)
            {
                num[c] = (100 * (ps[i] - 48)) + (10 * (ps[i + 1] - 48)) + (ps[i + 2] - 48);
                i += 3;
                c++;
            }
            else if (ps[i + 1] >= 48 && ps[i + 1] <= 57)
            {
                num[c] = (10 * (ps[i] - 48)) + (ps[i + 1] - 48);
                i += 2;
                c++;
            }
            else
            {
                num[c] = (ps[i] - 48);
                i++;
                c++;
            }
        }
    }
    for(i=0;i<c;i++)
    {
        printf("%d ",num[i]);
    }
}