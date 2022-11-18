// NAME: SWARNAVA DAS 
// ROLL: 21NA10037 
// DEPARTMENT: OCEAN ENGINEERING AND NAVAL ARCHITECTURE 
// PACKAGE: VISUAL STUDIO CODE 
// ASSIGNMENT CLASS:5
#include<stdio.h>
#include<math.h>
int main()
{int a,b;
    printf("ENTER THE NUMBER OF MACHINES\n");
    scanf("%d",&a);
    printf("ENTER THE NUMBER OF day\n");
    scanf("%d",&b);

    switch (b)
    {
    case 1 :
        printf("number of manufactured cars=%d",a);
        break;
    case 2:
        printf("number of manufactured cars=%d",(round(a+a/2.0+a/4.0)));
        break;
    case 3:printf("ENTER THE NO OF MACHINES UNDER INSPECTION\n");

        


    default:
        break;
    }
    return 0;
}
