/*
NAME:AJMEERA UDAY KIARN
ROLL NO:22CY10008
ASSIGNMENT:9
SECTION:14
DESCRIPTION:
*/
#include<stdio.h>

 typedef struct employee{
 char name[100];
 int wagesPd;
 int days;
} employee;
  
 int main()
{
 int n,BPA,TA;
 float HRA[n],TA[n],P[n];
 printf("enter the number of employee_\n");
 scanf("%d",&n);
 employee P[n];
 for( int i=0;i<n;i++)
 {
 printf("enter the name of employee: \n",i+1);
 scanf("%s",&P[i],name);
 printf("enter the wages \n",i+1);
 scanf("%d",P[i],wagesPD);
 printf("enter the number of the employee: \n",i+1);
 scanf("%d",&P[i],days)"
 
 BP = P[i].wagesPD*P[i],days;
 if(BP<1000)
  {
  HRA=0.12*BP
 }
 else{
  HRA = 0.2*BP;
 }
 if(P[i].days>19)
 { 
  TA=0.1*BPA
 }
  else{
 TA=0
 }
  printf("name: %s\n",P[i].name);
  printf("netpy; %f\n",HRA[i],T[i],BPA[i]);
  HRA=0;
  TA=0;
  BP=0;
 }
return 0;
}




