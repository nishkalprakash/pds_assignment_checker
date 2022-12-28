//Assignment 6
//Section 14
//Name:Sanika Kadam
//Question 1

#include<stdio.h>

//function that compute nth term of the series

int print_term(int n)
{
  if(n==0)
     return 0;
  if(n==1)
     return 1;
  if(n==2)
     return 2;
  else
     return ((3*print_term(n-1)*print_term(n-2))-(2*print_term(n-2)*print_term(n-3))+1);
}


int main()
{
 //reading the input number

 int n;
 printf("Enter the number of terms to be displayed: ");
 scanf("%d",&n);
 printf("Series is: ");

 //printing required terms of the series

 if(n<0)
  {
   printf("Invalid input");
  }
 if(n>=0)
   { 
    for(int k=0;k<=(n-1);k++)
     {
        printf("%d ",print_term(k));  //funtion call
     }
    printf("\n");
   }
 return 0;
}
 
 
