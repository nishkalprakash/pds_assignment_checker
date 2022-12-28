#include<stdio.h>
#include<stdlib.h>			// printf("");  // // scanf("%d",&k); 

int main()


{
void print_term(int n){	
int x;	
	if (n<0) printf("Invalid Input");
	if (n == 1) printf("0 \n");
	if (n == 2) printf("0, 1 \n");
	if (n == 3) printf("0, 1, 2 \n");
	if (n>=4){
		int a;
		printf("0, 1, ");
		y= (3*(print_term(n-1))*(print_term(n-2)))-2*((print_term(n-2))*(print_term(n-3))) + 1 ;
		 printf("%d",y);
	//return (3*print_term(n-1)*print_term(n-2)-2*print_term(n-2)*print_term(n-3) + 1);
}
}
int k,y;
printf("Enter the number of terms : ");
scanf("%d",&k); 
print_term(k);
return 0;
}
