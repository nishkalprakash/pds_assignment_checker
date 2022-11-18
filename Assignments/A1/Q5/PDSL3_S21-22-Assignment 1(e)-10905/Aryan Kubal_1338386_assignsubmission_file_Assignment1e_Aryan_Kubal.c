//Aryan Kubal
//21MT30012
//ASSIGNMENT1e
#include <stdio.h>

int main() {
    // insert code here..
    // taking variable
    char t; float w; float b;
    printf("Enter the type of wood(n for natural s for synthetict: ");
    scanf("%s",&t);
    printf("Enter the weight of wood in kgs you want: ");
    scanf("%f",&w);
    
    // taking switch cases for variable t
    switch(t){
        case 'n': b=1100*w; break;
        case 's': b=780*w; break;
        default: printf("invalid entry");
    }
    // taking conditions for different number of days
    if(t=='n'){
        printf("base price=%.2f \n",b); // printing base price upto two decimal places
    printf("gst= %.2f \n",.20*b); // printing GST upto two decimal places at the rate of 20%
    printf("total price= %.2f \n",b+.2*b); // calculating total price by adding GST and base price
    }
    else if (t=='s') // taking condition for t=s
    {
        printf("base price=%.2f \n",b); // printing base price upto two decimal places
        printf("gst= %.2f \n",.15*b); // printing GST upto two decimal places at the rate of 15%
        printf("total price= %.2f \n",b+.15*b); // calculating total price by adding GST and base price
        
    }
   
    return 0;
}