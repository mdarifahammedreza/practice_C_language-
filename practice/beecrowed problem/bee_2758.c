#include<stdio.h>
int main()
{
    float V1,V2;
    double V3,V4;
    scanf("%f %f %lf %lf",&V1,&V2,&V3,&V4);

    printf("A = %f, B = %f\n",V1,V2);
    printf("C = %f, D = %f\n",V3,V4);

    printf("A = %.1f, B = %.1f\n",V1,V2);
    printf("C = %.1f, D = %.1f\n",V3,V4);

    printf("A = %.2f, B = %.2f\n",V1,V2);
    printf("C = %.2f, D = %.2f\n",V3,V4);

    printf("A = %.3f, B = %.3f\n",V1,V2);
    printf("C = %.3f, D = %.3f\n",V3,V4);

    printf("A = %.3E, B = %.3E\n",V1,V2);
    printf("C = %.3E, D = %.3E\n",V3,V4);

    printf("A = %.0f, B = %.0f\n",V1,V2);
    printf("C = %.0f, D = %.0f\n",V3,V4);

    return 0;


}
