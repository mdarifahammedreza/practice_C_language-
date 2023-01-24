#include<stdio.h>
int main()
{
	
	int sub_1,sub_2,sub_3,sub_4,sub_5,aggregate;
	float percentage;
	printf("Enter the number of subject 1: ");
	scanf("%d",&sub_1);
	printf("Enter the number of subject 2: ");
	scanf("%d",&sub_2);
	printf("Enter the number of subject 3: ");
	scanf("%d",&sub_3);
	printf("Enter the number of subject 4: ");
	scanf("%d",&sub_4);
	printf("Enter the number of subject 5: ");
	scanf("%d",&sub_5);
	
	aggregate=sub_1+sub_2+sub_3+sub_4+sub_5;
	percentage=aggregate*(100.00/500.00);
	
	printf("Aggregate mark obtained by student=%d\n",aggregate);
	printf("Percentage of student=%.2f",percentage);
	
	
	return 0;
	
}
