/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
OS: Windows 10
Package: CODEBLOCKS
Assignment Class: 3
Assignment: 1e
*/
#include<stdio.h>

int main(){
    float wt;
    char type;
     printf("Enter the type of wood(n for natural wood, s for synthetic wood):");
     scanf("%c", &type);
     printf("\nEnter the weight of wood(in Kg.) you want:");
     scanf("%f", &wt);
     //printing base price
     if(type=='n'){
         printf("Base price= %10.2f\n", (1100*wt));}
     else if(type=='s'){
          printf("Base price= %10.2f\n", (780*wt));}
    //printing GST
     if(type=='n'){
         printf("GST= %10.2f\n", (1100*wt*0.2));}
     else if(type=='s'){
          printf("GST= %10.2f\n", (780*wt*0.15));}
    //printing total price
     if(type=='n'){
         printf("Total price= %10.2f\n", ((1100*wt*0.2)+(1100*wt)));}
     else if(type=='s'){
          printf("Total price= %10.2f\n", ((780*wt*0.15)+(780*wt)));}
 return 0;
}

