#include<stdio.h>
int main()
{
	float f,C;
	
	printf("Enter temperature of city in fahrenheit:");
	scanf("%f",&f);
	C=(5.0/9.0)*(f-32);
	printf("Temperature:%f ",C);
	
	return 0;
}
