#include<stdio.h>
struct Details
{
 char name[100];
 int wage;
 int days;
};
int main()
{
 int n;
 float BP,HRA,TA;
 printf("Enter the no. of employees:\n");
 scanf("%d",&n);
 struct Details S[n];
 int sum[n];
 for(int i=0;i<n;i++)
 {
  printf("Enter the details of employee%d:\n",i+1);
  printf("Format:(name) (wages per day) (number of days present)\n");  
  scanf("%s %d %d",S[i].name,&S[i].wage,&S[i].days);
 } 
 for(int i=0;i<n;i++)
 {
  printf("Name:%s\n",S[i].name);
  BP=(S[i].wage)*(S[i].days);
  if(BP<1000) HRA=(0.12)*BP;
  else HRA=(0.2)*BP;
  if(S[i].days>19) TA=(0.1)*BP;
  else TA=0;
  sum[i]=BP+HRA+TA;

  printf("Netpay:%d\n",sum[i]);
 }
 return 0;
}
