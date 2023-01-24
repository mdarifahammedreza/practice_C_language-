#include<stdio.h>
//#include<math.h>
//#include<string.h>
int maxnum(int a);
int maxnum(int a)
{
    int max;
    int arry[a],x,y;

  for(int i=0;i<a;i++){
    scanf("%d",&arry[i]);
}

   for(int i=0; i<a; i++)
    {
        for(int j=i+1; j<a; j++)
        {
            if(arry[j] <arry[i])
            {
                x = arry[i];
                arry[i] = arry[j];
                arry[j] = x;
            }
        }

}
max=arry[a-1];
return max;
}

int main()
{

int a,c;
printf("Enter the lenght of array:");
scanf("%d",&a);
c=maxnum(a);
//printf("\n");
printf("%d is greater element");
return 0;
}