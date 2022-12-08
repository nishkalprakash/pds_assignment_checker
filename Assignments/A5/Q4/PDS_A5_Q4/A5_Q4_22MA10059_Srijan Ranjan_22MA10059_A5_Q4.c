/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:5
Description: This program takes an array from user. Divide it into binsa nd then display all the numbers in one particular bin.
*/
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];														//Formation of the array.
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int bins;											
	scanf("%d",&bins);
	int max=a[0];													//Maximum number obtained.
	for(int i=0;i<n;i++){
		if(a[i]>max){
			a[i]=max;
		}
	}
	int min=a[0];													//Minimum number obtained.
	for(int i=0;i<n;i++){
		if(a[i]<min){
			a[i]=min;
		}
	}
	int range=ceil((max-min+1)/bins);								//Range of the interval
	int r[bins*2];
	r[0]=min;
	for(int i=0;i<(bins*2);i++){
		if(i%2!=0){
			r[i]=r[i-1]+range -1;
		}
		else{
			r[i]=r[i-1]+1;
		}
	}
	int count=1;
	for(int i=0;i<(bins*2);i+=2){
		
		printf("bin %d\n",count);                                 //Printing the value of the bin array.
		for(int j=0;j<n;j++){
			if(a[j]>=a[i] && a[j]<=a[i+1]){
				printf("%d ",a[j]);
			}
		}
		count++;
	}
	return 0;
}