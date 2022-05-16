#include <stdio.h>

int main() {
    char type;
    float w,bp,gst,tp;
    printf("Enter the type of wood(n for natural wood, s for synthetic wood: ");
    scanf("%c",&type);
    printf("Enter the weight of wood(in Kg.) you want: ");
    scanf("%f",&w);
    if(type=='n'){
        bp = 1100*w;
        gst = 0.2*bp;
        tp = gst+bp;
    }
    else if(type=='s'){
        bp = 780*w;
        gst = 0.15*bp;
        tp = gst+bp;
    }
    printf("\n-------------");
    printf("\nBase price = %.2f",bp);
    printf("\nGST = %.2f",gst);
    printf("\nTotal price= %.2f",tp);
    printf("\n-------------");
    return 0;
}
