#include <stdio.h>

typedef struct
{
    int n;
    int coeff[20];
    int exp[20];

} polynomial;

int main()
{
    char p1[50], p2[50];
    polynomial pp1, pp2;
    printf("Polynomial 1: ");
    scanf("%s", &p1);
    printf("Polynomial 2: ");
    scanf("%s", &p2);

    // extract coeff and exponenets
    // poly 1
    int countc = 0, counte = 0;
    pp1.coeff[0] = p1[0];
    for (int i = 0; p1[i] != '\0'; i++)
    {
        if (p1[i] == 'x' || p1[i] == 'X')
        {
            pp1.coeff[countc] = p1[i - 1];
            countc++;
        }
        else if (p1[i] == '^')

        {
            pp1.exp[counte] = p1[i + 1];
            counte++;
        }
    }
    pp1.n = counte - 1;

    // extract coeff and exponent from poly 2
    //  extract coeff and exponenets
    //  poly 1
    countc = 0, counte = 0;
    pp2.coeff[0] = p2[0];
    for (int i = 0; p2[i] != '\0'; i++)
    {
        if (p2[i] == 'x' || p2[i] == 'X')
        {
            pp2.coeff[countc] = p2[i - 1];
            countc++;
        }
        else if (p2[i] == '^')

        {
            pp2.exp[counte] = p2[i + 1];
            counte++;
        }
    }
    pp2.n = counte - 1;

    // multiplying the poly
    // polynomial result;

    // for(int i=0;i<pp1.coeff[0]+pp2.coeff[0];i++)
    // {
    //     result.coeff =
    // }
    return 0;
}
