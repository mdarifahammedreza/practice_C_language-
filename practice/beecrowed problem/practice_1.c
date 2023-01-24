#include<stdio.h>
int main ()
{
int a, b;
a = b = 4;
printf("%d\n",a);
b = a++;
printf("%d\n",b);
printf ("%d %d %d %d", a++, --b, ++a, b--);
return 0;
}