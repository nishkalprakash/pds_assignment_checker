/*section:14
name: Abhisekh Mukherjee
roll no:22MA10002
Assingment no:6
q:1
description:
*/
#include<stdio.h>
int print_term(int a); // declaring the function
int main()
{
int k,j;
printf("enter the number of term you want\n");
scanf("%d",&k); // reading the number of terms
if(k>=1){
printf("the terms are\n"); 


for(j=0;j<k;j++){
printf("%d\t",print_term(j)); //calling the function in a loop and printing the values


}
}
else
{
printf("invalid\n");
}
return 0;
}
int print_term(int n) // using the recursive the function
{
if(n==0)
return 0;
if(n==1)
return 1;
if(n==2)
return 2;

int tn=3*print_term(n-1)*print_term(n-2) - 2*print_term(n-2)*print_term(n-3)+1;
return tn;
}
