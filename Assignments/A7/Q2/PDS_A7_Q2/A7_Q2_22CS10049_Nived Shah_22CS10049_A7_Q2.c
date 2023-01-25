
/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. : 7
Description: Print value of number that appears  m times (m is user choice)
*/

#include <stdio.h>
#define Length 100

int counter(int a[], int s, int num){
	int c=0;	
	for(int i=0; i<s; i++){
		if(a[i]==num)
			c++;
	}
	return(c);
}
int main(){
	int lim, m;
	printf("Enter total number of integers to input in array (<100)= ");
	scanf("%d", &lim);
	if(lim<Length){
		int arr[lim];

		printf("Enter the elements\n");
		for(int i=0; i<lim; i++)
			scanf("%d",&arr[i]);
		printf("Enter 'm' such that if any number appears m times, it will be displayed = ");
		scanf("%d", &m);
		int temp;
		//bubble sorting of the array
		for(int i=0; i<lim-1; i++){
			for(int j=0; j<lim-i-1; j++){
				if( arr[j]>arr[j+1]){
					temp=arr[j+1];
					arr[j+1]=arr[j];
					arr[j]=temp;
				}
			}
		}
		int flag=0;
		for(int i=0; i<lim; i++){
			int count;
			count=counter(arr, lim, arr[i]);	//to count number of appearances.
			if(count==m){
				printf("%d ", arr[i]);
				flag++;
				i=i+m-1;	//since that number is repeated m times, we dont need to print it again, so i goes to next different number.
			}
		}
		if(flag!=0)
			printf("appears %d times\n", m);
		else if(flag==0)
			printf("NO number appears %d times", m);
		
		return (0);
	}	
		
}



