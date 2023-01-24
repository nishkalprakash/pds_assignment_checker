/*
Dhavale Surabhi
22ME10026
LAB10
Section 14
Question 3
*/
#include<stdio.h>
struct rectangle     //Defining structures
{
int blx;
int bly;
int trx;
int try;
};
void Area(struct rectangle r1)    //meyhod to find print area
{
int area=(r1.trx-r1.blx)*(r1.try-r1.bly);   //calculate area
printf("Area:%d\n",area);  // print area
}
int main()
{
struct rectangle r;
printf("Rect: ");
scanf("%d %d %d %d",&r.blx,&r.bly,&r.trx,&r.try);
Area(r);
return 0;
}
