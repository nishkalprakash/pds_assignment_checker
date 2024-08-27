// LAB3
// Deepak Jangir
// 24NA10023
#include<stdio.h>

int main()
{
	int D, M, Y, n;
	printf("enter date : ");
	scanf("%d", &D);
	
	printf("enter month : ");
	scanf("%d", &M);
	
	printf("enter year : ");
	scanf("%d", &Y);
	
	if (D<=30 && D>0 || M<=12 && M>0 || (Y/4 == n)){
	printf("valid");}
	else{ printf("invalid");}
	
	return 0;
}	
	 


