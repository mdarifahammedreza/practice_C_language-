#include<stdio.h>
int main()
{
    long int a,b;

    scanf("%ld %ld",&a,&b);
    if(a%2!=0)
    {
        if(b%2!=0)
            printf("1\n");
        else
            printf("0\n");
    }

    else
    {
        if(b%2==0)
            printf("1\n");
        else
            printf("0\n");
    }

    return 0;

}
