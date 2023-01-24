#include<stdio.h>
int main()
{
	double bassalary,dalwnc,bari_vara,main_salary;
	
	printf("Enter person's basic salary: ");
	scanf("%lf",&bassalary);
	dalwnc=0.4*bassalary;
	bari_vara=0.2*bassalary;
	main_salary=bassalary-dalwnc-bari_vara;
	printf("Total salary of person:%.2lf",	main_salary);
	
	return 0;
	//Md arif ahammed reza Id-221-35-951
}
