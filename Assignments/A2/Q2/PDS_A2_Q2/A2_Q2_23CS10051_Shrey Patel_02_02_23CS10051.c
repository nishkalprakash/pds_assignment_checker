//Name:Shrey G Patel

//Roll no:23CS10051

//Convert the age in months to years

#include <stdio.h>

int main()

{

int month,year;

       printf("Enter the age of the person in months:");
       scanf("%d",&month);
       year=month/12;
       if((month-year*12)==0)       //To check whether the months are not integral part of 12
       printf("The age of person in years is %d\n",year);
       else
       printf("The age of person in years is %d\n",(year+1));

return 0;
}
