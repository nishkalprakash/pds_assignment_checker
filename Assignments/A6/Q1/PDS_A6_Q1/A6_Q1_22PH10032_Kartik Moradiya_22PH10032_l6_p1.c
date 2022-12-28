#include<stdio.h>
#include<math.h>
  
  
  int print_term(int n);
  int main()
  {
   int k;
   printf("enter the value of k:");
   scanf("%d",&k);
   
   for(int i=0; i<k;i++){
   printf("%d\n",print_term(i));
   }
   return 0;
  }
  
  int print_term(int n){
     if(n==0){
     return n;
     }
     else if(n==1){
     return n;
     } else if(n==2){
      return n;
     }else{
    int term=3*print_term(n-1)*print_term(n-2) - 2*print_term(n-2)*print_term(n-3) +1;
    return term;
     }
  }
