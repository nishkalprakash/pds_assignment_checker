/*
 Sec      :14
 Name     :A.Tejasree Sai
 Roll no  :22CS10009
 Assignment no : 6
 Description  : Printing series
*/

#include<stdio.h>

int print_term(int n);                // Here print_term func computes n-th term

int main ()
{
  int ans,k,i;
  printf("Enter The number :\n");
  scanf("%d",&k);
  if(k<0)
   printf("Invalid input");
  else
  {
    printf("The output is : ");
    for(i=0;i<k;i++)
    {
      ans = print_term(i);
      printf("%d ",ans);
    }
  }
  return 0;
}

int print_term(int n)
 {  
    int t;
    
    if(n>=0 && n<3)                                                                    //base condition
       return n;
    else
     {
        t = 3*print_term(n-1)*print_term(n-2)-2*print_term(n-2)*print_term(n-3)+1;//recursive call
        return t;
     }


 }
