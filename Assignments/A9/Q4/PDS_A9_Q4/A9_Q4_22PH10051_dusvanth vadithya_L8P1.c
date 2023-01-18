


#include<stdio.h>

  typedef struct employee{
  char name[100];
  int wagesPD;
  int days;
 } employee;

 int main()
 { 
 int n,BPA,TA;
 float HRA[n],TA[n];
 printf("enter the number of employee_\n");
 scanf("%d",&n);
 employee p[n];
 for(int i=0;i<n;i++)
 {
   printf("enter the name of employee: \n",i+1);
   scanf("%s",&p[i],name);
printf("enter the wages \n",i+);
 scanf("%d",p[i],wagesPD);
  printf("enter the number of days for employee: \n",i+1);
  scanf("%d",&p[i],days)"

BP = P[i].wagesPD*p[i],days;
if(BP<1000)
{
 HRA=0.12*BP;
}
 else{
 HRA=0.2BP;
}

if(P[i].days>19)
{
 TA=0.1*bpa
}
else{
ta=0
}
  printf("name: %s\n",p[i].name);
  printf("netpay: %f  ",HRA[i],TA[i],BPA[i]);
HRA=0;
TA=0;
BP=0;
}
return 0;
}


