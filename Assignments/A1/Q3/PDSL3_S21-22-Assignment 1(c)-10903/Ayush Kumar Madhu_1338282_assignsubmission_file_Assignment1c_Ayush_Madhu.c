#include <stdio.h>

int main() {
    float f,k,m,c;
    int day;
    printf("Enter the number of machines: ");
    scanf("%f",&m);
    printf("Enter the day number (1-7): ");
    scanf("%d",&day);
    switch (day)
    {
    case '1':
        c=m;
        break;
    case '2':
        c=m+m/2+m/4;
        break;
    case '3':
        printf("Enter no. of machines under inspection: ");
        scanf("%f",&k);
        c=m-k + (m-k)/2 + (m-k)/4;
        break;
    case '4':
        printf("Enter the number of fraction (0-1): ");
        scanf("%f",&f);
        c=m+f;
        break;
    case '5':
        printf("Enter the number of fraction (0-1): ");
        scanf("%f",&f);
        c=m+f;
        break;
    case '6':
        printf("Enter no. of machines under inspection: ");
        scanf("%f",&k);
        c=m-k + (m-k)/2 + (m-k)/4;
        break;
    case '7':
        printf("Enter the number of fraction (0-1): ");
        scanf("%f",&f);
        c=m+f;
        break;
    }
    printf("Number of manufactured cars = %.0f",c);
    return 0;
}
