/*
Name- Rishi Dhoble
Roll No- 21ME30053
Department- Mechanical Engineering
Section- 3
*/


#include<stdio.h>

int main() {

    char wood;
    float bprice, tprice, weight;

    printf("enter type of wood, n- natural and s- synthetic:");
    scanf("%c", &wood);

    printf("\n");

    printf("weight of wood");
    scanf("%f", &weight);



    if (wood == 'n'){

            bprice = 1100 * weight;
            tprice = bprice + (bprice * 0.2);

            printf("the base price is: %f", bprice);
            printf("\n");
            printf("the total price is: %f", tprice);
        }

    else if (wood == 's') {

        bprice = 780 * weight;
        tprice = bprice + (bprice * 0.15);

        printf("the base price is: %f", bprice);
        printf("\n");
        printf("the total price is: %f", tprice);
    }

    else {
        printf("restart the program");
    }

return 0;
}
