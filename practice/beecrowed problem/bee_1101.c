#include <stdio.h>

int main()
{
    int M,N,i,a;

    scanf("%d %d",&M,&N);
    if(N > M)
    {
        a = N;
        N = M;
        M = a;
    }
N++;
    for(i=N; i<M; i++)
    {
        if(i%5==2||i%5==3)
            printf("%d\n",i);
    }


    return 0;
}
