#include <stdio.h>

int main() {
    char a;
    int n=1100,s=780,temp;
    float b,c,d;
    printf("Enter the type of wood (n for natural wood, s for synthetic wood): ");
    scanf("%c",&a); getchar();
    printf("Enter the weight of wood (in Kg.) you want: ");
    scanf("%f",&b);
    if (a=='n'){
        c=n*b;
        d=0.2*c;
        printf("Base price = %.2f\n",c);
        printf("GST = %.2f\n",d);
        printf("Total price = %.2f\n",c+d);
    }
    else {
        c=n*b;
        d=0.15*c;
        printf("Base price = %.2f\n",c);
        printf("GST = %.2f\n",d);
        printf("Total price = %.2f\n",c+d);
    }

    return 0;
}