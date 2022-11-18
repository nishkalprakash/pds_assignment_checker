/*chityala raviteja
dept. -CSE Dual
roll no: 21CS30016
package : online compiler
os- windows 10 */

#include <stdio.h>
#include <math.h>
int main() {
    char wood;
    float weight,price,gst,base_price,gst_bill,total_price;
    printf("Enter the type of wood(n for natural wood,s for synthetic wood):");
    scanf("%c",&wood);
    printf("Enter the weight  of wood(in kg).you want:");
    scanf("%f",&weight);
    if (wood=='n'){
        price=1100;
        gst=20;
    }
    else if(wood=='s'){
        price=780;
        gst=15;
    }
    base_price=price*weight;
    gst_bill=(base_price*gst)/100;
    total_price=base_price+gst_bill;
    printf("---------------\n");
    printf("Base price= %7.2f\n",base_price);
    printf("GST=%10.2f\n",gst_bill);
    printf("Total price= %7.2f\n",total_price);
    printf("---------------");
    return 0;
    
}