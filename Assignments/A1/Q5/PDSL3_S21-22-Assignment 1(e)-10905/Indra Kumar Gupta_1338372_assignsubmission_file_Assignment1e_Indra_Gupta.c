/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Assignment 1(e)

#include<stdio.h>
int main(){

char a;
float w, base_price, gst;
printf("Enter the type of wood (n for natural wood, s for synthetic wood): ");
scanf("%c",&a);
getchar();
printf("Enter the weight of wood (in Kg.) you want: ");
scanf("%f",&w);
if(a=='n'){
    base_price=w*1100.00;
    gst= 0.2*base_price;
}else if(a=='s'){
 base_price=w*780.00;
 gst= 0.15*base_price;
}else{
    printf("Invalid input");
    return 0;
}
printf("-------------------------\nBase price =    %.2f\nGST = %.2f\nTotal price =  %.2f\n-------------------------", base_price, gst, base_price+gst);
return 0;
}
