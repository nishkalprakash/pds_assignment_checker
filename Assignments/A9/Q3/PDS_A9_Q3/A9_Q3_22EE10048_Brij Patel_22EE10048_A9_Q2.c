/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 9

Description-AREA OF AXIS-PARALLEL RECTANGLE
*/
#include<stdio.h>//INCLUDING PACKAGES
struct rectangle//DEFINING STRUCTURE
{
int blx;
int bly;
int trx;
int try;
};
void Area(struct rectangle r1)//METHOD TO FIND AND PRINT AREA
{
int area=(r1.trx-r1.blx)*(r1.try-r1.bly);//CALCULATING AREA
printf("Area: %d\n",area);//PRINTING AREA
}
int main()//MAIN METHOD
{
struct rectangle r;
printf("Rect: ");
scanf("%d %d %d %d",&r.blx,&r.bly,&r.trx,&r.try);//GETTING COORDINATES FROM USER
Area(r);
return 0; 
}



