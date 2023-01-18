#include<stdio.h>

 typedef struct employee{
 char name[100];
 int wagesPD;
 int days;
} employee;

int main()
{
  int n;
 printf("Enter the no of employee:_\n");
 scanf("%d",&n);
 employee P[n];
 int BPA[n];
 float HRA[n],TA[n];
 for(int i=0;i<n;i++)
{
  printf("Enter the name of employee %d \n",i+1);
  scanf("%s",&P[i].name);
  printf("Enter the wages per day  of employee %d\n",i+1);
  scanf("%d",&P[i].wagesPD);
   printf("Enter the no of day's for employee %d\n",i+1); 
   scanf("%d",&P[i].days);
}
for(int i=0;i<n;i++)
{
 BPA[i]= P[i].wagesPD*P[i].days;
 if(BPA[i]<1000)
{
  HRA[i]=0.12*BPA[i];
}
else {
HRA[i]=0.2*BPA[i];
}

if(P[i].days>19)
{
  TA[i]=0.1*BPA[i];
}
 else
{
  TA[i]=0;
}

printf("Name: %s\n",P[i].name);
printf("Netpay: %.2f\n",HRA[i]+TA[i]+BPA[i]);

}
return 0;
}





 

