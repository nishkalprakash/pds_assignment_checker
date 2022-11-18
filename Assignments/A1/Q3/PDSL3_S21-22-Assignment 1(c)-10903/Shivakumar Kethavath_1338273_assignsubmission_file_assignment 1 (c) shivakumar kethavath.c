/*kethavath shivakumar
 21MI31013*/

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    double num, k, f;
    double n1, m;

    printf("Enter the number of machines:\t");
    scanf("%lf", &num);

    printf("Enter the day number(1-7) : \t");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Number of manufactured cars = %d", num);
        break;
    case 2:
        m = round(num + num / 2 + num / 4);
        printf("Number of manufactured cars = %lf", m);
        break;
    case 3:
        printf("Enter number of machines under inspection:\t");
        scanf("%lf", &k);
        n1 = (num - k) + ((num - k) / 2) + ((num - k) / 4);
        printf("Number of manufactured cars = %lf", round(n1));
        break;
    case 6:
        printf("Enter number of machines under inspection:\t");
        scanf("%lf", &k);
        n1 = (num - k) + ((num - k) / 2) + ((num - k) / 4);
        printf("Number of manufactured cars = %lf", round(n1));
        break;
    default:
        printf("enter the fraction(0-1): \t");
        scanf("%lf", &f);
        printf("Number of manufactured cars = %lf", round(num + f));
        break;
    }
    return 0;
}
