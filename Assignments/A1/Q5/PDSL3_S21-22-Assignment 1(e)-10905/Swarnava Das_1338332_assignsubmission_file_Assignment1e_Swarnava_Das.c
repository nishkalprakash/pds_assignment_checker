// NAME: SWARNAVA DAS 
// ROLL: 21NA10037 
// DEPARTMENT: OCEAN ENGINEERING AND NAVAL ARCHITECTURE 
// PACKAGE: VISUAL STUDIO CODE 
// ASSIGNMENT CLASS:5
#include<stdio.h>
int main()
{char x;
float a,b;
    printf("ENTER THE TYPE OF WOOD(n FOR NATURAL WOOD, s FOR SYNTHETIC WOOD)\n");
    scanf("%c",&x);
    printf("ENTER THE WEIGHT OF WOOD IN KG\n");
    scanf("%f",&a);

    if (x ='n')
    {
        printf("BASE PRICE=%10.2f\n",(1100*a));
        printf("GST=%10.2f\n",(1100*a*0.2));
        printf("TOTAL PRICE=%10.2f\n",((1100*a)+(1100*a*0.2)));
    }
    else if (x ='s')
    {printf("BASE PRICE=%10.2f\n",(780*a));
        printf("GST=%10.2f\n",(780*a*0.15));
        printf("TOTAL PRICE=%10.2f\n",((780*a)+(780*a*0.15)));
        
    }
    

    return 0;
}
