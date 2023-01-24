#include<stdio.h>
#include<windows.h>
#include<ctype.h>
#include<string.h>
void password(void);
void mainMenu(void);
void main()
{
   // password(void);
    mainMenu();

}
void mainMenu(){
    char A;
system("cls");
system("COLOR F3");
printf("*************************************************************\n");
printf("*************************************************************\n");
printf("\n");
printf("*********************|    ");
printf("Main Menu");
printf("    |********************\n");
printf("\n");
printf("*************************************************************\n");
printf("*************************************************************\n");
printf("\n");
printf("\n");
printf("                    |||- 1.Add Book\n");
printf("                    |||- 2.Delete Book\n");
printf("                    |||- 3.Edit Book\n");
printf("                    |||- 4.Search Book\n");
printf("                    |||- 5.View Book\n");
printf("                    |||- 6.Exit\n");
printf("\n");
printf("\n");

printf("*************************************************************\n");
printf("*************************************************************\n");
printf("\n");
printf("******************|    ");
printf("Menu selection");
printf("    |*******************\n");
printf("\n");
printf("*************************************************************\n");
printf("*************************************************************\n");

printf("\n");
printf("\n");
A=getch();
switch(A){
case '1':{
    printf("we are in add book");
    break;
    }
case '2':{
    printf("we are in delete book");
    break;
    }
case '3':{
    printf("we are in Edit  book");
    break;
    }
case '4':{
    printf("we are in Search book");
    break;
    }
case '5':{
    printf("we are in view book");
    break;
    }
case '6':
    {
    printf("ExitProcess");
    break;


    }
default:
    {
    printf("you enter Wrong Keyword\n");
    printf("Please Enter again");
    mainMenu();
break;




}
}
}
