#include<stdio.h>
#include<strings.h>
int main(){
    char wood;
    float weight, bp, gst, gstp, total;
    printf("what is the desired wood?\n");
    scanf("%s", &wood);
    if(wood=='n') printf("natural wood\n");
    if (wood=='s') printf("synthetic wood\n");
    printf("what is the required weight?\n");
    scanf("%f", &weight);
    printf("weight is %0.2f\n", weight);
    if(wood=='n'){
        bp=1100*weight;
        gstp=(0.2)*bp;
        total=bp+gstp;
        printf("Base Price= %0.2f\n", bp);
        printf("GST= %0.2f\n", gstp);
        printf("Total Price= %0.2f\n", total);
    }
    if(wood=='s'){
        bp=780*weight;
        gstp=(0.15)*bp;
        total=bp+gstp;
        printf("Base Price= %0.2f\n", bp);
        printf("GST= %0.2f\n", gstp);
        printf("Total Price= %0.2f\n", total);
    }

    return 0;
}
