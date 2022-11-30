/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:3
Discription :To draw pattern 

*/
#include<stdio.h>

int main()
{
	int i,j,n;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=0;j<i;j++){
			if(j%2==0){
				printf("1");
					if((i-j)==1){
						printf("\n");
					}
			}
			else
			{
				printf("0");
					if((i-j)==1)
						printf("\n");
			}	
		}
	}
	return 0;
}
