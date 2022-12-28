/*
* SEC: 14
* Roll no: 22EX10034
* Name: Priyanshu Verma 
* Assignment No 6
* Description : C program that would prompt the user to enter the number of the terms of the following series s/he wants to be displayed.
*/
#include <stdio.h> 
long int print_term (long int n) 
{
if (n = 0 || n == 1 ||  n == 2 ) return n;
else return 
   (3*print_term(n-1)*print_term(n-2)-2*print_term(n-2)*print_term(n-3)+1);

} // given , t (0) = 0 , t(1)=1 , t (2) = 2//

int main() {
 int n;
   printf("Take inupt from the user:\n");
   scanf("%d", &n);
   
return 0;
}

