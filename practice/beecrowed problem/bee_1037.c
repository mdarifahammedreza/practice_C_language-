#include <stdio.h>
#include <math.h>
int main()
{
    int X, Y;
    double total, a1=4.00, a2=4.50, a3=5.00, a4=2.00, a5=1.50;
    scanf("%d%d", &X, &Y);
    switch (X)
    {
    case 1:
        printf("Total: R$ %.2f\n",(Y*a1));
        break;
    case 2:
        printf("Total: R$ %.2f\n",(Y*a2));
        break;
    case 3:
        printf("Total: R$ %.2f\n",(Y*a3));
        break;
    case 4:
        printf("Total: R$ %.2f\n",(Y*a4));
        break;

    case 5:
        printf("Total: R$ %.2f\n",(Y*a5));
        break;
    }
    return 0;
}