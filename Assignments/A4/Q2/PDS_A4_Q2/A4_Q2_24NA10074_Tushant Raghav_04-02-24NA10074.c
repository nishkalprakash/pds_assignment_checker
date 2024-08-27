#include<stdio.h>
int main()
{
	int n,max=0,smax=0;
	while(1){
		printf("Enter numbers : ");
		scanf("%d",&n);
			if(n<0){break;}	
		if(n>max){
		smax=max;
		max=n;
		printf("Largest number is %d\n",max);
		printf("second largest number is %d",smax);}
		else if(n<max&&n>smax){
		smax=n;
		}
		else {}
		
	}
	return 0;
}
