#include<stdio.h>
#include<math.h>
//#include<string.h>
int main()
{
int i,a,c;
scanf("%d",&a);
c=a*2;
int temp[c];
for(i=c;i>0;i--){
    scanf("%d %d",&temp[i],&temp[i-1]);
    i--;
}
for(i=c;i>0;i--){
    if (temp[i]>temp[i-1])
    {
       printf("REPAIR\n");
       i--;
    }
    else if(temp[i]<temp[i-1])
    {
    printf("NEW PHONE\n");
    i--;}
    else if(temp[i]==temp[i-1]){
    printf("ANY\n");
    i--;
    }

}

return 0;
}