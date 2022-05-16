/*
Name- Rishi Dhoble
Roll No- 21ME30053
Department- Mechanical Engineering
Section- 3
*/


#include<stdio.h>

int main() {

    int m, day, k;
    float f;

    printf("enter the number of machines: ");
    scanf("%d", &m);

    printf("enter day: ");
    scanf("%d", &day);

    printf("\n");

    switch (day) {
        case 1: printf("monday\n");
                printf("number of cars manufactured is %d", m);
                break;

        case 2: printf("tuesday\n");
                printf("number of cars manufactured is %d", (int)((m) + (m/2.0) + (m/4.0)));
                break;

        case 3: printf("wednesday\n");
                printf("number of machines under inspection: ");
                scanf("%d", &k);

                if (k>m) {printf("not possible");
                    printf("enter again:");
                    scanf("%d", &k);
                }

                else {
                    printf("number of cars manufactured is %d", (int)((m-k) + ((m-k)/2.0) + ((m-k)/4.0)));
                }

                break;

        case 4: printf("thursday\n");
                printf("enter boosting factor:");
                scanf("%f", &f);

                if (f>1) {
                    printf("invalid, enter again");
                    scanf("&f", &f);
                }

                else {
                    printf("number of cars manufactured is %d", (int)((m*1.0)*(1.0+f)));
                }

                break;

        case 5: printf("friday\n");
                printf("enter boosting factor:");
                scanf("%f", &f);

                if (f>1) {
                    printf("invalid, enter again");
                    scanf("&f", &f);
                }

                else {
                    printf("number of cars manufactured is %d", (int)((m*1.0)*(1.0+f)));
                }

                break;

        case 6: printf("saturday\n");
                printf("number of machines under inspection: ");
                scanf("%d", &k);

                if (k>m) {printf("not possible");
                    printf("enter again:");
                    scanf("%d", &k);
                }

                else {
                    printf("number of cars manufactured is %d", (int)((m-k) + ((m-k)/2.0) + ((m-k)/4.0)));
                }

                break;

        case 7: printf("friday\n");
                printf("enter boosting factor:");
                scanf("%f", &f);

                if (f>1) {
                    printf("invalid, enter again");
                    scanf("&f", &f);
                }

                else {
                    printf("number of cars manufactured is %d", (int)((m*1.0)*(1.0+f)));
                }

                break;

        default: printf("please enter a number in the range 1-7 after restarting the program");

    }

return 0;
}
