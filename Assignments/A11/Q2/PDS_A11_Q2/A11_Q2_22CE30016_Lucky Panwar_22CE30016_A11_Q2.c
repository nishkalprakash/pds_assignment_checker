/*  NAME - LUCKY PANWAR
    ROLL NO. - 22CE30016
    ASSIGNMENT NO. - 11
    QUESTION NO. - 2     */



#include<stdio.h>

 int fibonacci(int n){                // return nth term in fib series
 	if(n<2){
                 return n;
               }

        else {
               return fibonacci(n-1) + fibonacci(n-2) ;
             }
}

 void fib_seq(int n){
	int count = 0;
	if(n==0 || n==1){ printf("YES\n"); }
	while(n>fibonacci(count)){
 		if(n==fibonacci(count-1)){ printf("YES\n"); return;}
		count++;
              }
	printf("NO\n");
	return;
     }

 int main()
{ 
  int n;
  printf("Enter the number n to be checked whether it belongs to fibonacci sequence or not.\n"); 
  scanf("%d",&n);        
  fib_seq(n);
  return 0;

}
