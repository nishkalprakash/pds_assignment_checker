/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 7
description: entering a new element to a shorted array 
*/ 




# include <stdio.h>
# include <stdlib.h>


int main()
{
	int n, arr[100];
	printf ("enter number of elements in the shorted array: ");
	scanf("%d",&n);
	printf("enter a shorted array");
	for(int i=0;i<n; scanf("%d",&arr[i++]));      // taking entries from user
	int a;
	printf("enter new value: ");
	scanf("%d",&a);

	int temp;
	for(int j=0;j<n;j++){
		if(a>arr[j]) continue ;               // finding the value of index to start 
		temp = arr[j];                        // shifting each element to the right    
		arr[j]=a;
		a = temp ;
	}
	arr[n++]=temp;                                // adjusting the last entry 
	
	for(int i=0;i<n;printf("%d ",arr[i++]));       // printing the array
	
	return 0;
}
