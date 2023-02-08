/* NAME: PRIYAM TARAFDER
ROLL NO.: 22EC10059
SET: A
QUESTION: 1
DESCRIPTION: TAKES INPUTS AN DISPLAYS THEM RECURSIVELY
*/

#include<stdio.h>
#include<stdlib.h>

void display(int m,int n, int i, int *p){
	if(i==0){
		printf("Enter M: ");
		scanf("%d",&m);
		printf("Enter N: ");
		scanf("%d",&n);
		p=(int *)malloc(m*n*sizeof(int));
		printf("enter %d elements: ",(m*n));
	}// takes size of array as input and assigns pointer to it
	if(i>=m*n)
		return;
	scanf("%d",(p+i)); //takes input
	display(m,n,i+1,p);
	printf("%d ",*(p+i));//displays output
	if((i+1)%n==1)
		printf("\n");
	return;
}
int main(){
	int *p=(int *)malloc(sizeof(int));
	display(0,0,0,p);
}