/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 7 
Description - 
*/
#include <stdio.h>

	
int main(){
	int n;    
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n-1;i++){                  // taking sorted array of n-1 length 
		scanf("%d",&arr[i]);
	}
	int m,temp1,temp2;    
	scanf("%d",&m);
	for (int i=0;i<n-1;i++){                  // moving the element to right 
		if (m<=arr[i]) {
			temp2=arr[i];
			for (int j=i+1;j<n;j++){			
				temp1=arr[j];
				arr[j]=temp2;
				temp2=temp1;
			}
			arr[i]=m;                // inserting the element
			break;
		} 
	}
	printf("Output array : ");                 // printing the sorted array 
	for (int i=0;i<n;i++){              
		printf ("%d ",arr[i]);
	}


	return 0;
    
    
}
