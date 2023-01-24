#include<stdio.h>
int main(){
int arry[3],j, x, y, z;

scanf("%d %d %d", &x, &y, &z);
arry[0]=x;
arry[1]=y;
arry[2]=z;
for(int i=0;i<3;++i){
    for(int a=0;a<3;++a){
        if(arry[i]<arry[a])
        {
            j=arry[i];
            arry[i]=arry[a];
            arry[a]=j;

}
    }
    }
printf("%d\n%d\n%d\n", arry[0],arry[1],arry[2]);

 printf("\n\n");
  printf("%d\n%d\n%d\n", x, y, z);
return 0;
}
