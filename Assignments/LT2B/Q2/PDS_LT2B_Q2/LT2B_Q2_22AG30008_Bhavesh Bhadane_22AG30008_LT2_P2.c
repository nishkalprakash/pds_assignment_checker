/*Name - Bhavesh Nitin Bhadane
  Roll no- 22AG30008
  SECTION - 14
  Topic - LAB TEST 2 */

#include<stdio.h>
#include<stdlib.h>
void printarray(int *ptr){

	int m,n;
	int i,j;

	ptr=(int*)malloc(m*n*sizeof(int));
	printf("Enter the value of m :");
	scanf("%d",&m);
	printf("Enter the value of n :");
	scanf("%d",&n);
	printf("Enter %d elements ",m*n);
	for(i=0;i<m*n;i++){
		scanf("%d",ptr+i);
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
           printf("%d",*(ptr+i*n+j));

		}
		printf("\n");
	}
}







int main(){
	int m,n;
	int*ptr;
	
  
   printarray(ptr);

   return 0;
}