#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	if (n<=0){
	printf("Invalid number of rows");
	}
	else {
		for(i=1;i<=n;i++){
		pritnf("%d",i);
		
		}
	}
	return 0;
}
