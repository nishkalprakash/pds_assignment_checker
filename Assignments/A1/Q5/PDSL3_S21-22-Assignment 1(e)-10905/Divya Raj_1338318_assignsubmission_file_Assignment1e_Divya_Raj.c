/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : Visual Studio
*/
#include<stdio.h>
int main()
{
    char type;
    float weight;
    printf("Enter the type of wood (n for natural wood, s for synthetic wood): ");
    scanf("%c", &type);
    if( type == 'n'){
        printf("Enter the weight of wood (in Kg.) you want: ");
        scanf("%f", &weight);
        printf("-------------------------\n");
        printf("Base price =     %0.2f\n", 1100*weight);
        printf("GST =            %0.2f\n", 0.20*1100*weight);
        printf("Total price =    %0.2f\n", 1.2*1100*weight);
        printf("-------------------------\n");
    }
    else if( type == 's'){
        printf("Enter the weight of wood (in Kg.) you want: ");
        scanf("%f", &weight);
        printf("-------------------------\n");
        printf("Base price =     %0.2f\n", 780*weight);
        printf("GST =            %0.2f\n", 0.15*780*weight);
        printf("Total price =    %0.2f\n", 1.15*780*weight);
        printf("-------------------------\n");
    }
    else{
        printf("Please enter the correct type of wood.\n");
    }
    return 0;
}