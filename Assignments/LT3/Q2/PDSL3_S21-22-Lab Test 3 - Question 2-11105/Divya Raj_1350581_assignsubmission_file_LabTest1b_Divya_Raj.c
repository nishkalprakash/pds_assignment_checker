/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : CodeBlocks
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int no_terms;
    int coefficient[20];
    int exponent[20];
}polynomial;

int main(){
    char poly1[20], poly2[20];
    int j=1, k=0;
    polynomial poly[2];
    printf("Enter the first polynomial as string: ");
    scanf("%s", poly1);
    printf("Enter the second polynomial as string: ");
    scanf("%s", poly2);

    //finding the coefficients and exponents of first polynomial
    //poly[0].coefficient contains all coefficients of the polynomial
    //poly[0].exponent contains all cexponent of the polynomial
    //poly[0].no_terms contain total no of terms
    if(poly1[0] == 'x'){
        poly[0].coefficient[0] = 1;
    }
    else if(poly1[0] == '-' && poly1[1] == 'x'){
        poly[0].coefficient[0] = -1;
    }
    else{
    poly[0].coefficient[0] = poly1[0];
    }

    for(int i=1; i< strlen(poly1); i++){
        if(poly1[i]== '+' && poly1[i+1] == 'x'){
            poly[0].coefficient[j] = 1;
            j++;
        }
        else if(poly1[i]== '-' && poly1[i+1] == 'x'){
            poly[0].coefficient[j] = -1;
            j++;
        }
        else if(poly1[i]== '+'){
            poly[0].coefficient[j] = poly1[i+1];
            j++;
        }
        else if(poly1[i]== '-'){
            poly[0].coefficient[j] = (-1)*poly1[i+1];
            j++;
        }

        if(poly1[i] == '^'){
            poly[0].exponent[k] = poly1[i+1];
            k++;
        }
        else if((poly1[i]== 'x') && (poly1[i+1] != '^')){
            poly[0].exponent[k] = 1;
            k++;
        }   
    }
    //if constant term is not there, put 0
    if(j != k){
        poly[0].exponent[k] = 0;
    }
    //number of terms in first polynomial
    poly[0].no_terms = j;
    
    printf("no of terms in 1st polynomial= %d\n", poly[0].no_terms);
    
    j=1;
    k=0;
    //finding the coefficients and exponents of second polynomial
    //poly[1].coefficient contains all coefficients of the polynomial
    //poly[1].exponent contains all cexponent of the polynomial
    //poly[1].no_terms contain total no of terms
    poly[1].coefficient[0] = poly1[0];
    for(int i=0; i< strlen(poly2); i++){
        if(poly2[i]== '+' && poly2[i+1] == 'x'){
            poly[1].coefficient[j] = 1;
            j++;
        }
        else if(poly2[i]== '-' && poly2[i+1] == 'x'){
            poly[1].coefficient[j] = -1;
            j++;
        }
        else if(poly2[i]== '+'){
            poly[1].coefficient[j] = poly2[i+1];
            j++;
        }
        else if(poly2[i]== '-'){
            poly[1].coefficient[j] = (-1)*poly2[i+1];
            j++;
        }

        if(poly2[i] == '^'){
            poly[1].exponent[k] = poly2[i+1];
            k++;
        }
        else if((poly2[i]== 'x') && (poly2[i+1] != '^')){
            poly[1].exponent[k] = 1;
            k++;
        }   
    }
    //if constant term is not there, put 0
    if(j != k){
        poly[1].exponent[k] = 0;
    }
    //number of terms in first polynomial
    poly[1].no_terms = j;
    printf("no of terms in 2nd polynomial= %d\n", poly[1].no_terms);



    printf("The resultant polynomial after multiplication in the form of string is: ");
    return 0;
}


