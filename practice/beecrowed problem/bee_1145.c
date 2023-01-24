#include<stdio.h>
int main()
{
int i,j,X,Y;
scanf("%d",&X);
scanf("%d",&Y);
for(i=1;i<=Y;i++)
{
    for(j=1;j<=X;j++){
        if(X==j)
        printf("%d\n",i);
        else
        printf("%d ",i);
        i++;
    }
   i--; 
}
return 0;
}