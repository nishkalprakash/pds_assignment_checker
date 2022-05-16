/*
Name : Ankit Yadav
Roll No : 21EE30005
Department : Electrical Engineering
Package : codeblocks
Operating System : Windows 11
Assignment class : 1
*/


#include<stdio.h>
#include<math.h>

int main(){

float wt,bp,gst,tp;
char t;

printf("Enter the type of wood(n for natural and s for synthetic)");
t=getchar();
printf("\nEnter the Weight of the wood(in kgs) you want");
scanf("%f",&wt);

switch(t){
         case 'n': bp=1100*wt;
                   gst=bp*0.2;
                   tp=bp+gst;

                   printf("\nThe Base Price is = %f",bp);
                   printf("\nThe GST is = %f",gst);
                   printf("\nThe Total Price is = %f",tp);
                     break;
         case 's': bp=780*wt;
                   gst=bp*0.15;
                   tp=bp+gst;

                   printf("\nThe Base Price is = %f",bp);
                   printf("\nThe GST is = %f",gst);
                   printf("\nThe Total Price is = %f",tp);
                     break;
         default : printf("Wrong Input");

}




return 0;
}
