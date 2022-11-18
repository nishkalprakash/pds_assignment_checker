/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
int main(){
char x;
float weight,base_price,GST,Total_price;
printf("Enter n for natural wood and s for synthetic wood");
scanf("%c",&x);
if (x=='n'){
    printf("enter weight of natural wood");
    scanf("%f",&weight);
    base_price=1100*weight;
    GST=0.2*base_price;
    Total_price=base_price+GST;
}
else if (x=='s'){
    printf("enter weight of synthetic wood");
    scanf("%f",&weight);
    base_price=780*weight;
    GST=0.15*base_price;
    Total_price=base_price+GST;
}
else{
     printf("Invalid input");
}
printf("The base price is %4.2f\nthe GST is %4.2f\nthe total price is %4.2f\n",base_price,GST,Total_price);
return 0;
}
