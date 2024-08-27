#include<stdio.h>
//this is program to get numero-pyramid
int main(){
	printf("Enter the no of rows: ");
	int n; //no of rows n is used
	scanf("%d",&n);
	
	for(int row=1;row<=n;row++){
		for(int spaces=1;spaces<=(n-row);spaces++){
			printf(" ");
		}
		int i=row,re=0;
		for(int num=row;num>0;num--){
		
			if(i>=10){
				printf("%d",re);
				re++;
			}
			else{
			printf("%d",i);
			i++;
			}
		}
		if(row==2)
		printf("2");
		if(row==3)
		printf("43");
		if(row==4)
		printf("654");
		if(row==5)
		printf("8765");
		if(row==6)
		printf("09876");
		if(row==7)
		printf("210987");
		if(row==8)
		printf("4321098");
		if(row==9)
		printf("65432109");
		if(row==10)
		printf("876543210");
	printf("\n");
	}
return 0;
}
