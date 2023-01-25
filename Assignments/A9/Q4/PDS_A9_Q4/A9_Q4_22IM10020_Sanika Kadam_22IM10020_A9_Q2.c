
//Assignment 9
//Section 14
//Name:Sanika Kadam
//Question 2

#include<stdio.h>
#define MAX_SIZE 50

typedef struct{
              char name[MAX_SIZE];
              int wage;
              int days;
              }employee;

int main()
{
   int n;
   printf("Enter the total number of employee(s): ");
   scanf("%d",&n);
   employee Arr[n];
   

  for(int i=0;i<n;i++)
  {
   printf("Name: ");
   scanf("%s",&Arr[i].name[MAX_SIZE]);
   printf("Wage per day:");
   scanf("%d",&Arr[i].wage);
   printf("Days present: ");
   scanf("%d",&Arr[i].days); 

   int BP,HRA,TA;
   float salary;
  
   BP=(Arr[i].wage)*(Arr[i].days);
   
   if(BP<1000)           
   {
     HRA=0.12*BP;
   }
   else
   {
     HRA=0.2*BP;
   }

   if((Arr[i].days)>19)
   {
      TA=0.1*BP;
   }
   else
   {
      TA=0;
   }


  salary=BP+HRA+TA;
  
  printf("Netpay:%f\n",salary);
}
return 0;
}
