#include <stdio.h>
int main(){
	//initialising the values...
	int max1=0,max2=0,a,b;
	//loop for checking the largest value.
	while(1){
		scanf("%d,",&b);
		if(max1<b){
			max2=max1;}
		if(max2<b && b<max1 ){
			max2=b;
			}
		if(b>max1){
			max1=b;
			}
		printf("Largest Number:%d \n",max1);
		if (max2 ==0){
			printf("Second largest number : Value not yet entered\n");
		}
		if (max2!=0){
			printf("Second Largest number :%d \n",max2);}
	
	
	}
	








}
