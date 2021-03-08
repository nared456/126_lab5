#include<stdio.h>
int main()
{
    int N,M,i,j,k,l,sum=0,MAX=0;
    scanf("%d",&N);
    scanf("%d",&M);
    int A[N][N];
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<N-M-1;i++)
    {
        for(j=0;i<N-M-1;i++)
        {
            for(k=i;k<M+i;k++)
            {
                for(l=j;l<M+j;l++)
                {
                    sum += A[k][l];
                }
            }
            if(sum > MAX)
            {
                MAX = sum;
            }
        sum = 0;
        }
    }
    printf("%d",MAX);
}