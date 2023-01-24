#include<stdio.h>
int main()
{
    char ch;
    int a,i=0,j=0;
    scanf("%c",&ch);
    a=(int)(ch)+1;
    for(i=65; i<a; i++)
        j++;
    printf("%d\n",j);
    return 0;
}

