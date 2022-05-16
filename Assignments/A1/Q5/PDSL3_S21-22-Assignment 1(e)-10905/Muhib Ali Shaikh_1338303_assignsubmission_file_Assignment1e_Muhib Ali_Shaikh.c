/* Shaikh Muhib Ali(21EE10064), Electrical department, platform used:Code blocks*/
#include<stdio.h>
int main(){

     char type;
     printf("Enter the type of wood(n/s)\n");
     scanf("%c",&type);

     double w;
     printf("Enter the weight of wood\n");
     scanf("%if",w);

     double bp,GST,tp;

    if(type=='n'){

            bp=1100*w;
            printf("Base price=%if\n",bp);

            GST=(bp*20)/100;
            printf("GST=%if\n",GST);

            tp=bp+GST;
            printf("Total price=%if\n",tp);
            }
    if(type=='s'){

            bp=780*w;
            printf("Base price=%if\n",bp);

            GST=(bp*15)/100;
            printf("GST=%if\n",GST);

            tp=bp+GST;
            printf("Total price=%if\n",tp);
            }

            return 0;
            }

