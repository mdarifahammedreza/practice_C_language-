#include<stdio.h>
int main()
{
    int value[15];
    int i=0,j=0,carry=0,darry=0;
    for(i=0;i<5;i++)
        scanf("%d",&value[i]);

    for(i=1;i<4;i++){
        if(value[i]>value[i+1]&&value[i-1]>value[i])
           carry++;
        else if(value[i]<value[i+1]&&value[i-1]<value[i])
            darry++;
        else
            continue;

    }
    if(carry==3)
        printf("D\n");
    else if(darry==3)
        printf("C\n");
    else
        printf("N\n");

    return 0;


}
