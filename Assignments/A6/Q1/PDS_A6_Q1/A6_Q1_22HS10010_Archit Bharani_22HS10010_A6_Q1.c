#include<stdio.h>
int print_term(int n){  //Defining function
int a;
if(n==0)
return 0;             //Base Case
if(n==1)
return 1;
if(n==2)              //Base Case
return 2;
a=3*print_term(n-1)*print_term(n-2) -2*print_term(n-2)*print_term(n-3) +1;                      
return a;
}
int main()
{
int k,i;
printf("Enter the number of terms of series you want to print : ");
scanf("%d",&k);
if(k<=0)
printf("Invalid Input");

for(i=0;i<k;i++)
{
print_term(i);                           //Calling Function
printf("%d ",print_term(i));             //Printing desired output       
}

return 0;
}
