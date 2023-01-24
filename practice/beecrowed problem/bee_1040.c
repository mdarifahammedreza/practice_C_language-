#include <stdio.h>
#include <math.h>
int main()
{
    double N1, N2, N3, N4, N5, N6;
    scanf("%lf%lf%lf%lf", &N1, &N2, &N3, &N4);

    N5 = (((N1 * 2) + (N2 * 3) + (N3 * 4) + N4) / 10);
    printf("Media: %.1f\n",N5);
    if (N5 < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if (N5 < 7.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &N6);
        printf("Nota do exame: %.1f\n", N6);
        N6 = N6 + N5;

        if (N6 >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (N6 / 2));
    }
    else
    {
        printf("Aluno aprovado.\n");
    }

    return 0;
}