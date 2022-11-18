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
   int x1,x2,x3,y1,y2,y3;
   printf("Enter three coordinates : ");
   scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);

   int side1, side2, side3;
   side1=pow(pow(y2-y1,2)-pow(x2-x1,2),1/2);
   side2=pow(pow(y3-y2,2)-pow(x3-x2,2),1/2);
   side3=pow(pow(y3-y1,2)-pow(x3-x1,2),1/2);

    if((side1 + side2 > side3)&&(side2 + side3 > side1) &&(side3 + side1 > side2))
    {
        printf("It is a Valid Triangle\n");
    }

    else
    {
        printf("It is an invalid Triangle\n");
    }

    int sqa = pow(side1, 2);
    int sqb = pow(side2, 2);
    int sqc = pow(side3, 2);

    if (sqa == sqb + sqc || sqb == sqc + sqa || sqc == sqa + sqb)
    {
        printf("Right-angled Triangle");
    }
    else if(sqa > sqc + sqb || sqb > sqa + sqc || sqc > sqa + sqb)
    {
        printf("Obtuse-angled Triangle");
    }

    else
    {
        printf("Acute-angled Triangle");
    }

    return 0;



}
