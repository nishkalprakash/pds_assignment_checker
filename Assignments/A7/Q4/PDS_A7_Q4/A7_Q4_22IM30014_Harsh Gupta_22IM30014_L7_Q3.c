/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 7 
Description - Question 3 
*/
#include <stdio.h>


int main() {
	int n;    
	scanf("%d",&n);
	int arr[n],temp;
	for (int i=0;i<n;i++){                  // taking array1 input 
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<n;i++){                                              
		for (int j=0;j<n-1;j++){
			if (arr[j]>9&&arr[j+1]>9){
				if (arr[j]/10<=arr[j+1]/10) continue;		// if both element are more than 9
				else {
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}

			}
			else if (arr[j]>9){
				if (arr[j]/10<=arr[j+1]) continue;		// if one of them is more than 9		
				else {
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
				}
			}
			else if (arr[j+1]>9){
				if (arr[j]<=arr[j+1]/10) continue;			// if one of them is more than 9	
				else {
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
				}
			}
			else {if (arr[j]<=arr[j+1]) continue;
			else {
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}}
		}

	} 
	for (int i=n-1;i>-1;i--){                                          // printing the array in opposite order 
		printf("%d",arr[i]);

	}




	return 0;
}
