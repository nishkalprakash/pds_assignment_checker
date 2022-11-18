/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Assignment 1(e)
*/

#include <stdio.h>
int main()
{
    char five;
    float six;
    printf("Enter the type of wood (n for natural wood, s for synthetic wood): ");
    scanf("%c", &five);
    printf("Enter the weight of wood (in Kg.) you want: ");
    scanf("%f", &six);
    if (five == 'n')
    {
        float ten, eleven, twelve;
        ten = six*1100;
        eleven = 0.2*ten;
        twelve = ten + eleven ;
        printf("Base Price = %0.2f\n", ten);
        printf("GST = %0.2f\n", eleven);
        printf("Total Price = %0.2f", twelve);
    }
    else if (five == 's')
    {
        float nine, eight, seven;
        nine = six * 1100;
        eight = 0.15 * nine;
        seven = nine + eight ;
        printf("Base Price = %0.2f\n", nine);
        printf("GST = %0.2f\n", eight);
        printf("Total Price = %0.2f", seven);
    }
    else
    {
        printf("Enter either n or s");
    }
    return 0;
}