#include<stdio.h>
int main()
{
double x,y;
int N,i=1;
scanf("%d",&N);
for(i=1;i<=N;i++)
{
    scanf("%lf %lf",&x,&y);
    if(y==0)
    printf("divisao impossivel\n");
    else
    printf("%.1f\n",x/y);
}

return 0;
}