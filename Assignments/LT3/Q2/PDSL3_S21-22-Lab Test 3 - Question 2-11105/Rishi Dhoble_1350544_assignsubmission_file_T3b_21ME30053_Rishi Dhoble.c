/*
Name- Rishi Dhoble
Roll no- 21ME30053
Sec-3
Package- Code blocks
T3b*/


#include<stdio.h>
#include<string.h>

struct polynomial {

        int expo;          //exponent
        int coef;         //coefficient
    };

int main() {

    char pol1[100], pol2[100];

    printf("NOTE: please enter the polynomial as, 3x^2+-2x^1+7x^0\n\n");

    printf("enter polynomial 1:  ");
    fgets(pol1, 100, stdin);
    int noOfTerms1 = strlen(pol1);

    printf("\nenter polynomial 2:  ");
    fgets(pol2, 100, stdin);
    int noOfTerms2 = strlen(pol2);

    //polynomial 1

    int x[10] = {'\0'};
    int y[10] = {'\0'};
    int count=0;

    struct polynomial p1[100];

    for (int i = 0, j = 0; pol1[i] != '+'; i++){
        if (pol1[i] != 'x'){
            x[j] = (int) pol1[i];
            j++;
            count++;
        }

    }
    for (int i = 0, j = 0; pol1[i] != '+'; i++)
    {

        if ((pol1[i] == 'x') && (pol1[i + 1] == '^')) {
            y[j] = (int)pol1[i + 2];
            j++;
        }}


    for (int i=0; i<count; i++) {

        p1[i].coef = x[i];
        p1[i].expo = y[i];
    }



    //polynomial 2

    int p[10] = {'\0'};
    int q[10] = {'\0'};
    int count2=0;

    struct polynomial p2[100];

    for (int u = 0, v = 0; pol2[u] != '+'; u++){
        if (pol2[u] != 'x'){
            p[v] = (int) pol2[u];
            v++;
            count2++;
        }

    }
    for (int u = 0, v = 0; pol1[u] != '+'; u++)
    {

        if ((pol2[u] == 'x') && (pol2[u + 1] == '^')) {
            q[v] = (int)pol2[u + 2];
            v++;
        }}


    for (int u=0; u<count2; u++) {

        p2[u].coef = p[u];
        p2[u].expo = q[u];
    }


    struct polynomial product[100]; int no=-1;


    for(int i=0;i< noOfTerms1;i++){

        for (int j=0;j< noOfTerms2;j++){

            product[++no].expo=p1[i].expo+p2[j].expo;
            product[no].coef=p1[i].coef*p2[j].coef;
            }
        }


        printf("\nThe Product Of Two Polynomials Is: \n");

        for(int i=0;i<=no;i++){

            if(product[i].expo==0)
                printf("%d ",product[i].coef);

            else if(product[i].expo==1)
                printf("%dx ",product[i].coef);

            else{
                printf("%dx^%d ",product[i].coef,product[i].expo);
            }


        if(i!=no)
            printf("+ ");
        }

}












