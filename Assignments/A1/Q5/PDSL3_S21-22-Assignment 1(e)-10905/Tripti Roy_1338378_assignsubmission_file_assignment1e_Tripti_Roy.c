# include<stdio.h>
int main(){
    char c,n;
    float w, price, gst, total;
    printf("Enter the type of wood (n for natural wood, s for synthetic wood):\n");
    scanf("%c", &c);
    printf("Enter the weight of wood (in Kg.) you want:\n");
    scanf("%f", &w);
    if(c==n){
        price = 1100*w;
        gst = 20*price/100;
        total = price + gst;
        printf("Base price = %2.2f\n", price);
        printf("GST = %2.2f\n", gst);
        printf("Total price = %2.2f\n", total);
    }
    else{
        price = 780*w;
        gst = 15*price/100;
        total = price + gst;
        printf("Base price = %2.2f\n", price);
        printf("GST = %2.2f\n", gst);
        printf("Total price = %2.2f\n", total);
    }
    return 0;
}
