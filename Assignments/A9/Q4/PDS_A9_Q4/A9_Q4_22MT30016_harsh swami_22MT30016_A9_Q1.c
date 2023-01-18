#include<stdio.h>
#include<stdlib.h>

typedef struct{
   char name[100];
   float wpd;
   float days;
   float BP;
   float HRA;
   float TA;
   float salary;
}data;
int main()
{
   int n;
   int i;
   printf("enter number of employees:");
   scanf("%d",&n);
   data a[n];
   for(i=0;i<n;i++)
   {
     printf("enter name:");
     scanf("%s",a[i].name);
     printf("enter wage pe day:");
     scanf("%f",&a[i].wpd);
     printf("enter number of days present:");
     scanf("%f",&a[i].days);
     a[i].BP=a[i].wpd*a[i].days;
     if(a[i].BP<1000)
        a[i].HRA=0.12*a[i].BP;
     else
        a[i].HRA=0.20*a[i].BP;
     if(a[i].days>19)
        a[i].TA=0.10*a[i].BP;
     else
        a[i].TA=0;
 a[i].salary=a[i].BP+a[i].TA+a[i].HRA;
}
for(i=0;i<n;i++)
{
     printf("name:%s\n",a[i].name);
     printf("net salary:%f\n\n",a[i].salary);
}
return 0;
}

    
    
