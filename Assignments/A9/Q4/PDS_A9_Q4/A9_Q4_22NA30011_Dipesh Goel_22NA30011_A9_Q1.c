#include<stdio.h>

/*
    PDS LAB ASSIGNMENT - 9
    DIPESH GOEL
    22NA30011
    PROBLEM - 1
*/

typedef struct {
    char name[20];
    int wage;
    int days;
} emp;

float NetPay(emp E){
    float BP, HRA, TA;
    BP = (float)(E.wage * E.days);
    if (BP<1000.0) HRA = 0.12*BP;
    else HRA = 0.20*BP;
    if (E.days>19) TA = 0.10*BP;
    else TA = 0.0;

    return (BP + HRA + TA);
}




int main(){

    int n;
    printf("Enter the total number of employee(s): "); scanf("%d",&n);
    emp employee[n];

    for (int i=0;i<n;i++){
        printf("Employee[%d]\n",i+1);
        printf("\tEnter name = ",i+1); scanf("%s",employee[i].name);
        printf("\tEnter wages/day = "); scanf("%d",&employee[i].wage);
        printf("\tNumber of days present = ",i+1); scanf("%d",&employee[i].days);
        printf("\n");
    }

    for (int i=0;i<n;i++){
        printf("Employee[%d]\n",i+1);
        printf("\tName: ");printf("%s",employee[i].name);
        printf("\tNet Pay: %.2f",NetPay(employee[i]));
        printf("\n");printf("\n");
    }

    return 1;
}
