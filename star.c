#include<stdio.h>
int main()
{
    int num,i,j,k,l;
    scanf("%d",&num);
    int s = num/2;
    if(num%2!=0)
    {
        num++;
        s = (num-1)/2;
    }
    for(i=1;i<=(num/2);i++)
    {
        for(j=1;j<=(num/2)-i;j++)
        {
            printf("_");
        }
        printf("*");
        for(k=1;k<=(i-1)*2-1;k++)
        {
            printf("_");
        }
        if(i!=1)
            printf("*");
        for(l=1;l<=(num/2)-i;l++)
        {
            printf("_");
        }
        printf("\n");
    }
    for(i=s;i>=1;i--)
    {
        for(j=1;j<=(num/2)-i;j++)
        {
            printf("_");
        }
        printf("*");
        for(k=1;k<=(i-1)*2-1;k++)
        {
            printf("_");
        }
        if(i!=1)
            printf("*");
        for(l=1;l<=(num/2)-i;l++)
        {
            printf("_");
        }
        printf("\n");
    }
    return 0;
}