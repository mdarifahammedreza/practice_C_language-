#include<stdio.h>
#include<math.h>
//#include<math.h>
//#include<string.h>
int main()
{
int wh,a,b,lp,prnt=0,power,j;
scanf("%d",&wh);
for(int i=1;i<=wh;i++)
{
    scanf("%d %d %d",&a,&b,&lp);
    for(j=1;j<=lp;j++)
    {   power=j-1;

       prnt=prnt+(b*(pow(2,power)));
        printf("%d ",prnt);
    }
    prnt=0;
    printf("\n");
}


return 0;
}
