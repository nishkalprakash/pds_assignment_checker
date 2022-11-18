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
#include <math.h>
int main()
{
    int m , choice;
    float n;
    float k,ins;
    float y,x;


    printf("Enter the number of machines : ");
    scanf("%d",&m);

    printf(" 1 : Day 1 - Monday \n 2 : Day 2 - Tuesday \n 3 : Day 3 - Wednesday \n 4 : Day 4 - Thrusday \n 5 : Day 5 - Friday \n 6 : Day 6 - Saturday \n 7 : Day 7 - Sunday \n");
    printf("Enter your Choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Number of Manufactured cars : %d",m);
        break;


    case 2:
        n = m + (m/2) + (m/4);
        printf("Number of Manufactured Cars  : %f",round(n));
        break;

    case 3 :
        printf("Enter the number of machines under inspection : ");
        scanf("%f",&k);
        ins = (m-k) + (m-k)/2 + (m-k)/4;
        printf("Number of Manufactured cars : %f",round(ins));
        break;

    case 4:
        printf("Enter boosting fraction : ");
        scanf("%f",&y);

        x = m + (m*y);

        print("Number of Manufactured Cars  : %f" , round(x));
        break;

    case 6 :
        printf("Enter the number of machines under inspection : ");
        scanf("%f",&k);
        ins = (m-k) + (m-k)/2 + (m-k)/4;
        printf("Number of Manufactured cars : %f",round(ins));
        break;

    case 5:
        printf("Enter boosting fraction : ");
        scanf("%f",&y);

        x = m + (m*y);

        print("Number of Manufactured Cars  : %f" , round(x));
        break;

    case 7:
        printf("Enter boosting fraction : ");
        scanf("%f",&y);

        x = m + (m*y);

        print("Number of Manufactured Cars  : %f" , round(x));
        break;
    }

}
