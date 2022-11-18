/* Shruti Srivastava
   21EE30025
   Electrical Engg. Dual Degree
   Code Blocks
   Windows 10
   Section 03 */
#include<stdio.h>
int main()
{
    int X[10], Y[10]; // Have taken the array size as 10
    printf("Enter the X cordinates\n");
    int i,Sx=0,Sy=0,P1=0,P2=0;
    float Xm, Ym, M=0.0,b;
    for(i=0 ; i<10; i++)
    {
      scanf("%d",&X[i]);
    }

    printf("Enter Y coordinates\n");
    for(i=0 ; i<10; i++)
    {
     scanf("%d",&Y[i]);
    }
    for(i=0; i<10 ; i++)
    {
       Sx = (Sx + X[i]);
    }
    Xm = Sx/10;

    for(i=0; i<10 ; i++)
    {
       Sy = Sy + Y[i];
    }
    Ym = Sy/10;
    for(i=0; i<10 ; i++)
    {
      P1= P1 + (X[i]-Xm)*(Y[i]-Ym);

      P2 = P2 + (X[i]- Xm)*(X[i]-Xm);
    }

    M = ((float)P1)/P2;
    b = Ym - (M)*(Xm);

    printf("m = %0.1f , b = %0.1f , line equation y = %0.1fx + %0.1f",M,b,M,b);

    return 0;
    }





