/*
 *Sec           : 14
 *Name          : Tejasree Sai
 *Roll no       : 22CS10009
 *Assignment no : 5
 *Description   : Finding sum of given terms
 */

#include<stdio.h>
int power(int x,int n);          /*function prototype*/
int fac(int n);

int main ()
{ 
  int x,n,j;
  float term;
  printf("Enter the values of x and n : \n");
  scanf("%d %d",&x,&n);
  term=1;
  for(j=1;j<n;j++)                                   // for given n,max degree can be n-1
  {
    term+=(((float)power(x,j))/fac(j));              //float is mentioned to get correct result
  }
 printf("The required output is %f\n",term);
 return 0;
}

int fac(int n)             //function for calculating factorial
 {
   int cou,i;
   cou=1;
   for(i=1;i<=n;i++)
   {
     cou*=i;
   }
   return(cou);
 }
int power(int x,int n)          //function for computind x^n
 {
   int cou,i;
   for(i=1,cou=1;i<=n;i++)
   {
     cou*=x;
   }
   return(cou);
 }
  

