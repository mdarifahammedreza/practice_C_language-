#include<stdio.h>
//#include<math.h>
#include<string.h>
int main()
{   int i,a,flag=0;;
    int array[a];
    int Find;
    printf("Enter the array length:");
scanf("%d",&a);
printf("\n");
printf("Enter %d element:",a);
for(i=0;i<a;i++)
{
    scanf("%d",&array[i]);
}
printf("\n");
printf("Enter the number that you want to find:");
scanf("%d",&Find);
printf("\n");
for(i=0;i<a;i++)
{
    if(Find==array[i])
    {
        flag++;
    }
}
if(flag>0)
printf("We found the '%d'  %d times",Find,flag);
else
printf("Data not found" );

return 0;
}
