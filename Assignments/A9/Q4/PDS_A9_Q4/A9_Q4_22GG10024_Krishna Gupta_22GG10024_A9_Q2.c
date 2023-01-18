/* 
  NAME - KRISHNA GUPTA
  SECTION -14
  ASSGNMENT -9
  DESCRIPTION - CALCULATING THE SALARIES OF EMPLOYEES*/
#include <stdio.h>

// DETAILS OF EMPLOYEES

typedef struct employee
   {
   char nam[100];
   int wage;
   int day;   
   }  employee;
 
int main()
  { 

    int i,n;
    float basicpay=0,hra=0,ta=0,netsalary=0;
    printf("Enter the number of employees :");
    scanf("%d",&n);
    struct employee em[n],a,b;

        // input for details of employees

    for (i=0;i<n;i++)
       {
         printf("Enter name :\n");
         scanf("%s",&em[i].nam);
         printf("Enter wage per day :\n");
         scanf("%d",&em[i].wage);
         printf("Enter number of days :\n");
         scanf("%d",&em[i].day);
        }
  
        // EVALUATING THE SALARY OF EMPLOYMENT

     for(i=0;i<n;i++)
      {
       
         basicpay =  (em[i].wage) * (em[i].day);

        if (basicpay<1000)
          hra = 0.12*basicpay;
        else 
          hra = 0.20*basicpay;
  
        if (em[i].day>19)
          ta = 0.10*basicpay;
        else 
          ta =0;

       netsalary = basicpay+hra+ta;

       printf("Name : %s \n",em[i].nam);
       printf("Netpay  : %f \n",netsalary); 

      }
   }







    
