/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. :5
Description: Merge and sort 2 inputted arrays
*/

#include <stdio.h>
#include <stdlib.h>
int *p;

int Merge(int s1, int s2, int *p1, int *p2){
	int c[s1+s2];
	p=(int *)malloc((s1+s2)*sizeof(int));
	for(int i=0; i<s1; i++)
		c[i]=*(p1+i);
	for(int i=s1; i<s1+s2; i++)
		c[i]=*(p2+i);
	for(int i=0; i<s1+s2; i++)
		*(p+i)=c[i];
	int temp;
	for(int i=0; i<s1+s2; i++){
		for(int j=0; j<(s1+s2-i); j++){
			if(c[j]>c[j+1]){
				temp=c[j+1];
				c[j+1]=c[j];
				c[j]=temp;
			}
		}	
	}
	for(int i=0; i<s1+s2; i++){
		printf("%d ", c[i]);
	}
	return(*p);

}

int main(){
	int s1, s2;
	printf("Enter size of array 1 = ");
	scanf("%d", &s1);
	int a[s1];
	printf("Enter the values : ");
	for(int i=0; i<s1; i++)
		scanf("%d", &a[i]);
	
	printf("Enter size of array 2 = ");
	scanf("%d", &s2);
	int b[s2];
	printf("Enter the values : ");
	for(int i=0; i<s2; i++)
		scanf("%d", &b[i]);

	printf("A= ");
	for(int i=0; i<s1; i++){
		printf("%d ", a[i]);
	}
	printf("\nB= ");
	for(int i=0; i<s2; i++){
	;	printf("%d ", b[i]);
	}
	printf("\n");
	
	int *p1, *p2;
	
	p1=&a[0]; p2=&b[0];	
	
	int t;
 	t=Merge(s1, s2, p1, p2);
		
	return(0);
}	
