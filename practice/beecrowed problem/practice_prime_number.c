#include<stdio.h>
void main()
{
    int i=2,a,carry=1;

    scanf("%d",&a);
    for(i=2; i<a; i++)
    {

        if(a%i==0)
        {


            carry==1;
            break;
        }
        else
            carry=0;
    }
    if(carry==1)
        printf(" not prime number\n");
    else if(carry==0)
        printf("  prime number\n");
  //  else
      //  printf("wrong Input");
//
}

