
#include <stdio.h>

int main()
{
    int a, i;
    scanf("%d",&a);
    for(i=0; i<a; i++)

    {
        if(i<a-1)
            printf("Ho ");
        else
            printf("Ho!\n");
    }

    return 0;
}
