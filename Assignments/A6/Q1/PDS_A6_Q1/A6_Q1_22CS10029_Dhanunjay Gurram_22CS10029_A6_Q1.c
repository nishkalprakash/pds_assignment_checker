/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:5
  Description:Finding terms according to given condition*/
#include <stdio.h>
#include <stdlib.h>
int print_term(int);
int main(){
   int n,val,i;
   printf("Enter the no. of terms to be printed:");
   scanf("%d",&n);                                           //Takes number of terms to be printed
   if (n<0) {printf("Invalid input\n");
             return 0;}
   for (i=0;i<n;i++){
       val=print_term(i);
      if (i!=n-1) printf("%d ,",val);
      else printf("%d\n",val);}
   return 0;
}
int print_term(int x){
   int m;
   if (x<=2 && x>=0){                                       // Base condition
       return x;}
   else {
       m=3*print_term(x-1)*print_term(x-2)-2*print_term(x-2)*print_term(x-3)+1;
       return m;}
}
