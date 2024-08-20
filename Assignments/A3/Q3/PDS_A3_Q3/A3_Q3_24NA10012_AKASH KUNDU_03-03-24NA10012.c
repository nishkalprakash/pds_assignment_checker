//program that takes four integers and prints yes if exactly 2 of them are equal and no otherwise
//Akash Kundu
//24NA10012
#include<stdio.h>
int main() 
{	int a,b,c,d; //n is a counter
	printf("Enter a integer : ");
	scanf("%d",&a);
	printf("Enter a integer : ");
	scanf("%d",&b);
	printf("Enter a integer : ");
	scanf("%d",&c);
	printf("Enter a integer : ");
	scanf("%d",&d);
	
	int n=1;
	if (a==b) n++;
	if (a==c) n++;
	if (a==d) n++;
	if (b==c) n++;
	if (b==d) n++;
	if (c==d) n++;
	
	if (n==2) printf("YES");
	else printf("NO");
	return 0;
}
	
