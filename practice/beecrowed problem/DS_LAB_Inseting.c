#include<stdio.h>
int main()
{
    int student[40],pos,i,size,value;
    printf("Enter lenghth array of students:");
    scanf("%d",&size);
    printf("Enter %d elements are:\n",size);
    for(i=0; i<size; i++)
        scanf("%d",&student[i]);
    printf("Enter the position where you want to insert the element:");
    scanf("%d",&pos);
    printf("Enter the value into that position:");
    scanf("%d",&value);
    for(i=size-1; i>=pos-1; i--)
        student[i+1]=student[i];
    student[pos-1]= value;
    printf("Final array after inserting the value is\n");
    for(i=0; i<=size; i++)
        printf("%d  ",student[i]);
    return 0;
}
