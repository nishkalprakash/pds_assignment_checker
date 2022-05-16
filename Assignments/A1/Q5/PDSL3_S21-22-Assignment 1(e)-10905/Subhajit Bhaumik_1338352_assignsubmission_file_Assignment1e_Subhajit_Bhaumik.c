#include<stdio.h>
#include<math.h>
int main()
{
    char c,n,s;
    float b,g,t,k,j;
    printf("Enter the type of wood(n for natural wood,s for synthetic wood):");
    scanf("%c",&c);
    if(c="n"){
        printf("Enter the weight of wood(in kg)you want:");
        scanf("%f",&k);
        b=1100*k;
        g=0.2*b;
        t=b+g;
        printf("Base price=%.2f\n",b);
        printf("GST=%.2f\n",g);
        printf("Total price=%.2f\n",t);
    }
    else if(c="s"){
        printf("Enter the weight of wood(in kg)you want:");
        scanf("%f",&j);
        b=780*j;
        g=0.15*b;
        t=b+g;
        printf("Base price=%.2f\n",b);
        printf("GST=%.2f\n",g);
        printf("Total price=%.2f\n",t);

    }
    else printf("NO SUCH WOOD AVAILABLE HERE");
    return 0;

}
