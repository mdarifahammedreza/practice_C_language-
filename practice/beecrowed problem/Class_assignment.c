//Md Arif Ahammed Reza
//Id:221-35-951


#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char a[100],c[100],d[100],b[20],e[30],f[4];
    gets(a);
    gets(c);
    gets(d);

    strcpy(b,a);
    strcpy(e,d);
    strcpy(f,d);
    strcat(a,c);
    strcat(b,d);
    puts(a);
    puts(b);
    strcat(a," and");
    strcat(a,f);
    puts(a);
}
