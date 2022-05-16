/*
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: Codeblocks
Assignment class: 1
*/
#include<stdio.h>
int main(){
    char a,n,s;
    float weight, Bp, Gst, Tp;
    printf("Enter the type of wood(n for natural wood, s for synthetic wood):\n");
    scanf("%c", &a);
    if (a =='n'){
        printf("Enter the weight of wood(in kg) you want:\n");
        scanf("%f",&weight);
        printf("--------------\n");
        Bp = 1100*weight;
        printf("Base price = %0.2f\n",Bp);
        Gst = Bp*0.2;
        printf("GST= %0.2f\n", Gst);
        Tp = Bp+Gst;
        printf("Total  price = %0.2f\n",Tp);
        printf("--------------\n");
    }
    if (a=='s'){
        printf("Enter the weight of wood(in kg) you want:\n");
        scanf("%f",&weight);
        printf("--------------\n");
        Bp = 780*weight;
        printf("Base price = %0.2f\n",Bp);
        Gst = Bp*0.15;
        printf("GST= %0.2f\n", Gst);
        Tp = Bp+Gst;
        printf("Total  price = %0.2f\n",Tp);
        printf("--------------\n");
    }
    else{
            printf("Invalid input\n");
    }
return 0;
}
