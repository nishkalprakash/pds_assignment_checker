/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. :5
Description: Array element segregation into bins.
*/

#include <stdio.h>

int main(){
	int n;
	
	printf("Enter number of elements in the array = ");
	scanf("%d", &n);
	printf("Enter the n values now:\n");	
	int a[n];				//array to store n values
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
	
	int bins, max, min;
	printf("Enter number of bins you wish to have= ");
	scanf("%d", &bins);
	
	max=min=a[0];
	//for loop to find the max and the min value amongst the entered values.
	for(int i=1; i<n; i++){
		if(a[i]>max) max=a[i];
		if(a[i]<min) min=a[i];
	}
	
	int range=max-min+1;		//to calculate the range of the entered values
	int count;
	for(int i=0; i<bins; i++){	//This loop will runs as many times as the number of bins
		count=0;
		printf("bin%d --> ", i+1);
		/* The following for loop checks each element against the min and max values of individual bins.
		   If some element is found within the individual range, it will print that number and increase the count.
		*/
		for(int j=0; j<n; j++){
			if( (a[j]>=(min+i*range/bins)) && (a[j]< (min+ (i+1)*range/bins)) ){
				printf("%d, ", a[j]); 
				count++;
			}
		}
		printf("Elems = %d\n", count);
	}

	return 0;
}
