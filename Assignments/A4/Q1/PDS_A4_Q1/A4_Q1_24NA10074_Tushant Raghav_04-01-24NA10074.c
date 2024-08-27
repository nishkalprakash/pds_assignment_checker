#include<stdio.h>
int main()
{
	int a=1,b=-1,i,sum,n;
	printf("Enter N : ");
	scanf("%d",&n);
	if (n<=0){
	printf("N is invalid");}
	else if(n==1){
	printf("%d",n);
	}
	else if(n==2){
	printf("1 -1");
	}
	else{
	printf("1 -1");
	for (i=3;i<=n;i++){
		sum = a-b;
		printf(" %d",sum);
		a=b;
		b=sum;}
	}
	return 0;
}
