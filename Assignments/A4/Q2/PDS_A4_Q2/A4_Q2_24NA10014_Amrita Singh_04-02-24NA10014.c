//name -amrita singh
//roll no -24NA10014
#include<stdio.h>
int main()
{int count=0;
int max1=0,max2=0;	
	while(1){
		int x;
		printf("\nenter number");
		scanf("%d",&x);
		count=count+1;
		if(x<0)
		break;
		if(count==1){
		max1=x;
			printf("\nmax value is %d",x);
			printf("\nsecond largest value not entered");}
		else{
		//to get the value of second largest and largest same we need to have=sign
		if(max1<=x){
				max2=max1;
			max1=x;
			}
			printf("\nthe largest number is %d",max1);
			printf("\nthe second largest number is %d",max2);}}
	return 0;
	}
			
