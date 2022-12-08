/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 5
Description : Program to create appropriate bins based on the range of elements*/
#include <stdio.h>
int max(int a[]);
int min(int a[]);
int nls, nbin;  //Using as global variables 

int main(){
	int i, j, range, bincount=0, lower=0;
	float width;
	printf("N = ");
	scanf("%d", &nls);
	int ls[nls];
	for (i=0; i<=nls-1; i++){  //Inputting elements into the array
		scanf("%d", &ls[i]);
	}
	printf("Bins = ");
	scanf("%d", &nbin);
	range=max(ls)-min(ls);
	width=(float)range/nbin;
	for (i=1; i<=nbin; i++){  //i represents bin number.
		bincount=0;  //Resetting value of bin count to zero for every new iteration/bin.
		lower=min(ls)+((i-1)*width);  //Updating lower limit of the range of the bin for every iteration.
		printf("bin%d-> ", i);
		if (i!=1){
			lower++;  //So that the intervals do not overlap
			for (j=0; j<=nls; j++){
				if (ls[j]>=lower && ls[j]<(lower+width)){
					printf("%d, ", ls[j]);
					bincount+=1;
				}
			}
		}
		else{  //Separate code for handling first bin only 
			for (j=0; j<=nls; j++){
				if (ls[j]>=lower && ls[j]<=(lower+width)){
					printf("%d, ", ls[j]);
					bincount+=1;
				}
			}
		}
		printf("Elems = %d\n", bincount);		
	}
}

int max(int a[]){  //Function to return maximum value of array
	int i, max=a[0];
	for (i=1; i<=nls-1; i++){
		if (a[i]>max) max=a[i];
	}
	return max;
}

int min(int a[]){  //Function to return minimum value of array
	int i, min=a[0];
	for (i=1; i<=nls-1; i++){
		if (a[i]<min) min=a[i];
	}
	return min;
}
