#include<stdio.h>
int main()
{
    long long int A,B,C,i;
    scanf("%lld%lld",&A,&B);
   C=(B-A)+1;
   i=((float)C/2)*(2*A+(C-1));

    printf("%lld\n",i);
    return 0;


}
