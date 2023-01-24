/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 9
* Description : Program to calculate the wage of employees
*/
#include <stdio.h>

#include <string.h>


struct Employee {

    char name[20];

    float wages;

    int days;

};

 struct Employee e;


float netPay(struct Employee e) {

    float bp = e.wages * e.days;

    float hra = (bp < 1000) ? 0.12 * bp : 0.2 * bp;

    float ta = (e.days > 19) ? 0.1 * bp : 0;

    return bp + hra + ta;

}


int main() {

    int n;

    scanf("%d", &n);


    for (int i = 0; i < n; i++) {

        struct Employee e;

        scanf("%s %f %d", e.name, &e.wages, &e.days);

        printf("Name: %s Netpay: %.2f\n", e.name, netPay(e));

    }


    return 0;

}



