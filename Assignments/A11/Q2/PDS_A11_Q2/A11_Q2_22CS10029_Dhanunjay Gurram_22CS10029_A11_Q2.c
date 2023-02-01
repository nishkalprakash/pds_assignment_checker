/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:11*/
#include <stdio.h>
int fibonacci(int n){                                                  //returns nth term in fib series 
	if (n<2) return n;
	else return fibonacci(n-1)+fibonacci(n-2);
}
void fib_seq(int n){
	int count=0;
	if (n==0 || n==1) {printf("Yes\n"); return;}
	while (n>fibonacci(count)){                                        //checks whether no is there in series or not
		if (n==fibonacci(count+1)) {printf("Yes\n"); return;}
		count++;
	}
	printf("No\n");
	return;
}
int main(){
	int n; 
	scanf("%d",&n);                                                     //takes the no to be searched
	fib_seq(n);
	return 0;
}