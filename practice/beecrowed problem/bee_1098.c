#include <stdio.h>

int main()
{
    double i=0,j=1;
    for(j=1; j<4; j++)
        printf("I=%d J=%.0f\n",i,j);

    j=1;
    for(j=1; j<4; j++)
        printf("I=%.1f J=%.1f\n",i+.2,j+.2);
    j=1;
    for(j=1;j<6;j++)
        printf(".");
    printf("\n");
    j=1;
    i=2;
    for(j=1;j<4;j++)
        printf("I=%.0f J=?\n",i);



    return 0;
}
