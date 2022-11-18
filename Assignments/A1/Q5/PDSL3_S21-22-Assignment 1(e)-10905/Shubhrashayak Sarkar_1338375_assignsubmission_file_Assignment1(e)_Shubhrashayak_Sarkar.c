/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code 
Assignment class:- 6
*/
#include<stdio.h>



int main()
{
    char type;
    float Total, BasePrice, GST, weight;
    printf("What type of wood you want?\nPress 'n' for natural wood and press 's' for synthetic wood\n");
    type=getchar();
    switch (type)
    {
    case 'n':
        printf("Enter the weight in kg of wood you want\n");
        scanf("%f", &weight);
        BasePrice=1100*weight;
        printf("Base price = %8.2f\n", BasePrice);
        GST=BasePrice/5;//To get 20% we have to divide by 5
        printf("GST = %8.2f\n", GST);
        Total=BasePrice+GST;
        printf("Total price = %f\n", Total);
        break;
    case 's':
        printf("Enter the weight in kg of wood you want\n");
        scanf("%f", &weight);
        BasePrice=780*weight;
        printf("Base price = %8.2f\n", BasePrice);
        GST=(3*BasePrice)/20;//To get 15% we have to divide by 20 and multiply by 3
        printf("GST = %8.2f\n", GST);
        Total=BasePrice+GST;
        printf("Total price = %f\n", Total);
        break;
    default:
        printf("Please choose either 'n' or 's'\n");
        break;
    }
return 0;
}