#include<stdio.h>   
int print_term(int n);
int main()
{
int k;
printf("enter the number of terms");
scanf("%d",&k);
if(n<0){
		printf("Invald input");
}
 for(int i=0;i<n;i++)
{

		printf("%d \t",print_term(k));
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
return 0;
}


int print_term(int n)
{
	
	if(n==0 || n==1 || n==2)
	{
		if(n==0)
			return 0;
		if(n==1)
			return 1;
		if(n==2) 
			return 2;
	}
	else
		return (3*print_term(n-1)*print_term(n-2))-(2*print_term(n-2)*print_term(n-3))+1;
} 
