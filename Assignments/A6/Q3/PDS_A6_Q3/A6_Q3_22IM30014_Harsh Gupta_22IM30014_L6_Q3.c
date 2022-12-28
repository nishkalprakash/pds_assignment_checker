/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 6 
Description - Question 3 
*/
#include <stdio.h>
// Creating a function 
int merge(int s1,int s2,int *arr1,int *arr2){             // taking the array[0] address 
	int arr3[s1+s2];
	for (int i=0;i<s1;i++){   
		arr3[i]=arr1[i];
}
	for (int i=s1;i<s1+s2;i++){    // adding the array 
		arr3[i]=arr2[i-s1];
}	int temp;
	for (int i=0;i<s1+s2;i++){           // sorting the array 
		for (int j=i+1;j<s1+s2;j++){
			if (arr3[i]<=arr3[j]) continue;
			else{
				temp=arr3[i];
				arr3[i]=arr3[j];
				arr3[j]=temp;
}
}}

	for (int i=0;i<s1+s2;i++){
		printf("%d ",arr3[i]);
} 

} 
int main() {
	int s1,s2;
	scanf("%d",&s1);
	
	int arr1[s1];
	for (int i=0;i<s1;i++){                  // taking array1 input 
		scanf("%d",&arr1[i]);
}
	scanf("%d",&s2);
	int arr2[s2];
	for (int i=0;i<s2;i++){                  // taking the array2 input 
		scanf("%d",&arr2[i]);
}	printf("A = ");
	for (int i=0;i<s1;i++){                 // printing the arr1
		printf("%d ",arr1[i]);
}	printf("\nB = ");
	for (int i=0;i<s2;i++){                  //  printing the arr2 
		printf("%d ",arr2[i]);
}
	printf("\nC = ");
   	merge(s1,s2,arr1,arr2);                  // calling the function 
	
  return 0;
}
