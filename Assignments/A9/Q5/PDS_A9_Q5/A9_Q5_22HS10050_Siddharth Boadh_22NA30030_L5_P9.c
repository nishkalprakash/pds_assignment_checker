/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 9
Description :A program to find number of days between two dates inserted by the user. 
*/


#include<stdio.h>

    typedef struct date
  {
    int DD,MM,YYYY; // date,month and year
   
  } date;


   void printDate(date X,date Y)
 {
        printf("X = %d/%d/%d\n",X.DD,X.MM,X.YYYY);
        printf("Y = %d/%d/%d\n",Y.DD,Y.MM,Y.YYYY);
 }

   void findDays(date X,date Y)
 {
             
       
 }

 
int main()
{
   date X,Y;
   printf("Enter the dates : ");
   printf("\n");
   printf("X = ");
   scanf("%d %d %d",&X.DD,&X.MM,&X.YYYY);
   printf("Y = ");
   scanf("%d %d %d",&Y.DD,&Y.MM,&Y.YYYY);

   printDate(X,Y);
   findDays(X,Y);

}













    



    



