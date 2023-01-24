#include<stdio.h>
int main()
{
    int i,j;

    for(i=0; i<7; i++)
    {
        if(i==0)
        {
            for(j=0;j<39;j++)
            {
                printf("-");//line 1 excuted
            }
            printf("\n");
        }
        //line 2

        if(i==1)
        {
            for(j=0;j<39;j++)
            {
                if(j==0)
                    printf("|");
                switch(j)
                {
                case 9:
                    printf("R");
                    break;
                case 10:
                    printf("e");
                    break;
                case 11:
                    printf("b");
                    break;
                case 12:
                    printf("t");
                    break;
                case 13:
                    printf("r");
                    break;
                case 14:
                    printf("o");
                    break;
                case 15:
                    printf("s");
                    break;
                }

                if(j==9||j==10||j==11||j==12||j==13||j==14||j==15||j==16||j==17)
                    continue;
                printf(" ");
                if(j==38)
                    printf("|\n");
            }
        }

        //line 3
        if(i==2)
        {
            for(j=0;j<39;j++)
            {
                if(j==0)
                    printf("|");
                    if(j==9||j==10)
                    continue;

                printf(" ");
                if(j==38)
                    printf("|\n");
            }
        }

        //line 4
        if(i==3)
        {
            for(j=0; j<39; j++)
            {
                if(j==0)
                    printf("|");
                    switch(j)
                {
                case 9:
                    printf("5");
                    break;
                case 10:
                    printf("7");
                    break;
                case 11:
                    printf("8");
                    break;
                case 12:
                    printf("6");
                    break;
                }

                if(j==9||j==10||j==11||j==12||j==13||j==14)
                    continue;
                printf(" ");
                if(j==38)
                    printf("|\n");
            }
        }

        //  line 5
        if(i==4)
        {
            for(j=0; j<39; j++)
            {
                if(j==0)
                    printf("|");
                    if(j==9||j==10)
                    continue;

                printf(" ");
                if(j==38)
                    printf("|\n");
            }
        }

        //line 6
        if(i==5)
        {
            for(j=0; j<39; j++)
            {
                if(j==0)
                    printf("|");
                    switch(j)
                {
                case 9:
                    printf("U");
                    break;
                case 10:
                    printf("N");
                    break;
                case 11:
                    printf("I");
                    break;
                case 12:
                    printf("F");
                    break;
                case 13:
                    printf("E");
                    break;
                case 14:
                    printf("I");
                    break;

                }

                if(j==9||j==10||j==11||j==12||j==13||j==14||j==15||j==16)
                    continue;
                printf(" ");
                if(j==38)
                    printf("|\n");
            }
        }
        //line 7 excuted
        if(i==6)
        {
            for(j=0; j<39; j++)
            {
                printf("-");
            }
        }





    }
    return 0;
}
