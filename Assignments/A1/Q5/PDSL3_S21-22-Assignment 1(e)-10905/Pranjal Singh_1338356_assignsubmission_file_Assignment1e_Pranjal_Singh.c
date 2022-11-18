/*
PRANJAL SINGH
Roll:21EC10051
Electronics and Electrical Communication engineering
codeblocks
Assignment class:6
*/
#include<stdio.h>
int main()
{
    printf("Enter type of wood;'s' for synthetic and 'n' for natural :-");
    char a;
    scanf(" %c",&a);
    printf("\n");
    float b;
    printf("Enter weight of wood :- ");
    scanf("%f",&b);
    printf("\n");
    if(a=='s')
    {
        float c = b*780;
        float d = 0.15*c;
        float e = c+d;
        printf("For synthetic wood :- \n Base price = %0.2f\n GST = %0.2f\n Total price = %0.2f\n",c,d,e);

    }
    if(a=='n')
    {
        float c = b*1100;
        float d = 0.2*c;
        float e = c+d;
        printf("For natural wood :- \n Base price = %0.2f\n GST = %0.2f\n Total price = %0.2f\n",c,d,e);

    }


}
