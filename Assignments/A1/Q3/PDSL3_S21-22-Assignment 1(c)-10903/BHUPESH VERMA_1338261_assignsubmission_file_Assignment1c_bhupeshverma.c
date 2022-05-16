#include <stdio.h>
#include<math.h>
int main() {
    int d,result,k;
    float m;
    float f;
    printf("Enter the number of machines: ");
    scanf("%f",&m);
    printf("Enter the day number(1-7): ");
    scanf("%d",&d);
     switch(d)
    {
        case 1:
            printf("Number of manufactured cars = %f",m);
            break;

        case 2:
            m  = m + (m/2) + (m/4);
            printf("Number of manufactured cars = %f",round(m));
            break;

        case 3:
            printf("Enter the no. of machines under inspection: ");
            scanf("%d",&k);
            m = (m-k)+(m-k)/2+(m-k)/4;
            printf("Number of manufactured cars = %f",round(m));
            break;

        case 4:
            printf("Enter boosting fraction: ");
            scanf("%f",&f);
            m = m+f*m;
            printf("Number of manufactured cars = %f",round(m));
            break;

        case 5:
            printf("Enter boosting fraction: ");
            scanf("%f",&f);
            m = m+f*m;
            printf("Number of manufactured cars = %f",round(m));
            break;

        case 6:
            printf("Enter the no. of machines under inspection: ");
            scanf("%d",&k);
            m = (m-k)+(m-k)/2+(m-k)/4;
            printf("Number of manufactured cars = %f",round(m));
            break;

        case 7:
            printf("Enter boosting fraction: ");
            scanf("%f",&f);
            m = m+f*m;
            printf("Number of manufactured cars = %f",round(m));
            break;
    }
    return 0;
}
