//Name:Shrey G Patel

//Roll No.:23CS10051

//Taking two numbers and performing sum, difference , multiplication......

#include <stdio.h>

int main()

{

int m,n;

   printf("Enter two integer variables:");

   scanf("%d %d",&m,&n);
    
   printf("The sum of the numbers is %d \n",m+n);

   printf("The difference is %d \n",(m-n));

   printf("The product is %d \n",(m*n));
 
   printf("The integer quotient is %d \n",(m/n));

   printf("The integer remainder is %d \n",(m%n));

   printf("The floating quotient is %f \n",((float)m/n));       //converted integer to float 

   printf("The sum of the squares is %d \n",(m*m+n*n));

   printf("The square of the sum is %d \n",(m+n)*(m+n));

   printf("The average of the numbers is %.2f \n",(m+n)/2.0);   //typecasting done here by dividing by 2.0
 
   printf("The average of the sum of the squares of the numbers is %.2f \n",(m*m+n*n)/2.0);    //0.2f is used to truncate values to two decimal places

return 0;

}







