/*
Name : Souvik Mandal
Roll No : 21MF10036
Section : 3
Group : 5
Department: Manufacturing Science
Package : Code Blocks
Operating System : Windows
*/

#include <stdio.h>
int main()
{
    int wt,basic,GST,total;
    char choice;
    printf("Enter the type of wood (n for natural wood, s for synthetic wood): ");
    printf("Enter your Choice  :");
    scanf("%c",&choice);

    printf("Enter the weight of wood(in kg) you want :");
    scanf("%f",wt);

    if choice == "1"
    {
        basic = 1100 *wt;
        printf("Basic price = %d",basic);

        GST = basic*0.15;
        printf("GST = %d",GST);

        total = basic + GST;
        print("Total price : %d",total);

    }

    else if choice == "2"
    {
        basic = 780 *wt;
        printf("Basic price = %d",basic);

        GST = basic*0.20;
        printf("GST = %d",GST);

        total = basic + GST;
        print("Total price : %d",total);
    }

    return 0;





}
