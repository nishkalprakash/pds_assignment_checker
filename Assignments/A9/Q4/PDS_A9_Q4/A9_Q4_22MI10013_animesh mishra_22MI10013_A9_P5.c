/*
section:14
roll no:22MI10013
name:animesh mishra
assignment no:9
description:wages of workers
*/
#include<stdio.h>
typedef struct employee{
        char name[20];
        int wage;
        int days;
}employee;
float netpay(employee a)
{
       int BP;
       float HRA,TA;
       float netpay = 0;
       BP = a.wage*a.days;
       if(BP<1000)
               HRA=BP*0.12;
       else
               HRA=BP*0.20;
       if(19<a.days)
               TA=BP*0.10;
       else
               TA=0;
       netpay=BP+HRA+TA;
     
       return netpay;
}
int main()
{
      int n;
      printf("enter the total number of employee");
      scanf("%d",&n);
      employee E[n];
      for(int i=0;i<n;i++)
      {
           printf("Enter name of employee[%d] :" ,i+1);
           scanf("%s" ,E[i].name);
           printf("Enter wages per day :");
            scanf("%d" ,&E[i].wage);
           printf("number of days present for employee[%d] :" , i+1);
           scanf("%d",&E[i].days);
      }
      for(int j=0;j<n;j++)
      {
             printf("Name :%s\n",E[j].name);
             printf("Netpay :%f\n",netpay(E[j]));
      }
      return 0;
}
