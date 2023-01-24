#include <stdio.h>

int main() {
    int arry[20][20];
    int i,j,num;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            arry[i][j]=i*j;
            printf("%d \t",arry[i][j]);
        }
        printf("\n");
        printf("\n");
        printf("\n");
    }


    return 0;
}
