#include<stdio.h>
int main()
{
	int number,sum,a,b,c,d,e,d1,d2,d3,d4,d5;
	
	printf("Enter the 5 digit number: ");
	scanf("%d",&number);
	
	a=number/10;
	d5=number%10;
	b=a/10;
	d4=a%10;
	c=b/10;
	d3=b%10;
	d=c/10;
	d2=c%10;
	e=d/10;
	d1=d%10;
	sum=d1+d2+d3+d4+d5;
	printf("5th digit=%d\n 4th digit= %d\n 3th digit= %d\n 2th digit= %d\n 1st digit= %d\n ",d5,d4,d3,d2,d1);
	printf("Reverse Order:%d%d%d%d%d \n",d5,d4,d3,d2,d1);
	
	
	
	return 0;
	
	
}
