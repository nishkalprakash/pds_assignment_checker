/*kethavath shivakumar
21MI31013*/
#include <stdio.h>

int main()
{
    float X1, E, N, f, fd, X2;
    printf("X = ");
    scanf("%f",&X1);
    printf("E = ");
    scanf("%f",&E);
    printf("N = ");
    scanf("%f",&N);



    for (int i = 1; i <=N; i++)
    {
        f=(X1*X1*X1)-25;
        fd=3*X1*X1;
        X2=X1-(f/fd);
        if (X1-X2!=0)
        {
            printf("%f %f %f\n",X1,X2,X1-X2);
        }
        X1=X2;
    }
printf("the square root is %f",X2);

    return 0;
}
