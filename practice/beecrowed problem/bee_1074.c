
#include <stdio.h>

int main()
{
    long int N, i=1,A;
    scanf("%d",&A);
    while(i<A+1){
    scanf("%ld",&N);
    if(N==0)
        printf("NULL\n");
    else if(N%2!=0)
    {
        printf("ODD ");
        if(N<0)
            printf("NEGATIVE\n");

        else
            printf("POSITIVE\n");
    }
    else
        {
        printf("EVEN ");
        if(N<0)
            printf("NEGATIVE\n");

        else
            printf("POSITIVE\n");
    }

i++;}

return 0;
}

