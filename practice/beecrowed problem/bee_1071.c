#include<stdio.h>
int main()
{
    int X,Y,sum=0,a;
    scanf("%d",&X);
    scanf("%d",&Y);
    a=X;
    while(Y!=X)
    {
        if(X%2!=0&&X!=a)
        {
            sum=sum+(X);
        }
        X--;
    }
    printf("%d\n",sum);
    return 0;
}
