/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/

#include <stdio.h>

int main(){
    char wood_type;
    float weight, price, gst;

    printf("Enter the type of wood: ");
    scanf("%c", &wood_type);

    printf("Enter the weight of the wood required: ");
    scanf("%f", &weight);

    if (wood_type=='n') {
        price = weight*1100;
        gst = 0.2*price;
    }
    else if (wood_type=='s') {
        price = weight*780;
        gst = 0.15*price;
    }
    else {
        printf("Type of wood, not found.");
        return 0;
    }

    printf("Base price= %.2f\nGST= %.2f\nTotal price= %.2f\n",price, gst, price+gst);


    return 0;
}
