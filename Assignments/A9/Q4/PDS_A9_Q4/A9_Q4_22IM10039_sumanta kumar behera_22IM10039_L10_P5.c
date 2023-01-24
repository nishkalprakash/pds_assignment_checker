# include<stdio.h>
// calculating the salary of all employees in a company
struct employee 
{
   char name[20];
   int wages, days, BP;
   float HRA, TA;
   float net_salary;
};

int main ()
{
   int n;
   printf("Enter the number of employee : ");
   scanf("%d", &n);
   struct employee e[n];
   for(int i=0; i<n; i++)
   {
   printf("Enter the name of employee, wages and days : ");
   scanf("%s %d %d", e[i].name,&e[i].wages, &e[i].days );
   e[i].BP = e[i].wages * e[i].days;
   if(e[i].BP < 1000)
   {
    e[i].HRA = 0.12 * e[i].BP;
   } else 
   {
    e[i].HRA = 0.20 * e[i].BP;
   }
    
   if(e[i].days > 19)
   {
    e[i].TA = 0.10 * e[i].BP;
   }    
    else
   {
    e[i].TA = 0;
   }
    e[i].net_salary = e[i].BP + e[i].HRA + e[i].TA;
   } 

   for(int j=0; j<n; j++)
   {
   printf("Name : %s\n", e[j].name);
   printf("Net pay : %f\n", e[j].net_salary);
   printf("\n");
   }
   return 0;
}
