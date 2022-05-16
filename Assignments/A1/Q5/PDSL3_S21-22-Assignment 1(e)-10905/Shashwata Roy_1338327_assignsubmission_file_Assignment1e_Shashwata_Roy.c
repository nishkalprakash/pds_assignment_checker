/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
*/
#include<stdio.h>
int main(){
    char ch;
    double w,bp,gst;
    printf("Enter the type of wood (n for natural wood, s for synthetic wood): ");
    scanf("%c",&ch);
    getchar();
    printf("Enter the weight of wood (in Kg.) you want: ");
    scanf("%lf",&w);
    if(ch=='n'){
        bp=1100*w;
        gst= 0.2*bp;
    }
    if(ch=='s'){
        bp=780*w;
        gst=0.15*bp;
    }
    printf("Base price = %0.2f\n",bp);
    printf("GST = %0.2f\n",gst);
    printf("Total price = %0.2f\n",bp+gst);
return 0;
}
