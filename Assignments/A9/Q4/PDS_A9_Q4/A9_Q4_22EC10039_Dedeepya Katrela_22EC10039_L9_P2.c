//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:9
//DESCRIPTION:PROGRAM TO CHECK POINTS
#include <stdio.h>
typedef struct emp_details{
          char name[30];
          float wage;
          int days;
        }emp_details;
void netpay(emp_details emp[],int n)
{float BP,HRA,TA,netpay;
 int i;
 for(i=0;i<n;i++)
 {BP=(emp[i].wage*emp[i].days);
  if(BP<1000)
   {HRA=(12*BP)/100;}
  else
   {HRA=(20*BP)/100;}
  if(emp[i].days>19)
   {TA=(10*BP)/100;}
  else
   {TA=0;}
  netpay=BP+HRA+TA;
  printf("name:%s\nnetpay:%f\n",emp[i].name,netpay);
 }
}
int main()
{int n,i;
 printf("enter the total number of employees:");
 scanf("%d",&n);
 emp_details emp[n];
 for(i=0;i<n;i++)
 {
  printf("name wage and days:");
  scanf("%s %f %d",emp[i].name,&emp[i].wage,&emp[i].days);
 }
 netpay(emp,n);
return 0;
}
    
