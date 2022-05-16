/*
Rishabh Bhardwaj
21CE10052
Civil Department
sec-3
CodeBlock
windows
*/
#include <stdio.h>

int main(void)
{
    float nu, m, k;
    int days;
    float f;

    printf("Enter the number of machines: ");
    scanf("%f", &m);

    printf("Enter the day number (1-7): ");
    scanf("%d", &days);
    printf("\n");

    switch( days )
    {
    case'1':
         nu = m;
         break;
    case'2':
         nu = m + (m / 2) + (m / 4);
         break;
    case'3':
    case'6':
         printf("Enter no. of machines under inspection: ");
        scanf("%f", &k);

        nu = (m - k) + ((m - k) / 2) + ((m - k) / 4);
         break;
    case'4':
    case'5':
    case'7':
         printf("Enter boosting fraction: ");
        scanf("%f", &f);
        nu += m * f;
        break;
    }
     printf("Number of manufactured cars = %f", nu);
     return 0;
}
