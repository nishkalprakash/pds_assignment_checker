#include<stdio.h>
int fib(int n,int x){
	int i,flag=0,number;
	if(n==1){
		number = 0;
	}

	if(n==2){
   number = 1;
	}
if(n>2){
   number = fib(n-1,x) + fib(n-2,x);
}

for(i=2;i<n+2;i++)
{
	number = fib(i,x) + fib(i-1,x);
	if(x == number){
		flag=1;
	}

	else{
		flag=0;
	}
}

return (flag);
}

int main(){
	int n,result;
	printf("Enter the number you want to check\n");
	scanf("%d",&n);
   result = fib(100,n);
   if(result==1){
   	printf("Yes");
   }

   else{
   	printf("No");
   }

   return 0;
}