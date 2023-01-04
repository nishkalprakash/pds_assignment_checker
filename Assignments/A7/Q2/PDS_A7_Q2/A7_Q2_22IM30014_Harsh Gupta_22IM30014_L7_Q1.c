/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 7
Description - 
*/


#include <stdio.h>
#include<string.h>
#define ll long long int

int main() {
	int n;    
	scanf("%d",&n);
	int arr[n],temp=0; 			
	for (int i=0;i<n;i++){                  // taking array1 input 
		scanf("%d",&arr[i]);
	}
	int ar[n];
	for (int i=0;i<n;i++){                                               // bubble sort 
		for (int j=0;j<n-1;j++){
			if (arr[j]<=arr[j+1]) continue;
			else {
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}

	} 
	for (int i=0;i<n;i++){                 // making new array and putting value zero 
		ar[i]=0;
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){  
			if (arr[i]==arr[j]){
				ar[i]++;             // counting the  element repeated
			}
		}
	}
	int m,i=0;scanf("%d",&m);                      // taking no of times as input 
	while (i<n){
		if (m==ar[i]){                     
			printf("%d ",arr[i]);                 // printing the number which m times 
			i=i+m;
			temp=1;
		}
		else i++;
}
	if (temp==0){printf("NO number ");}                    
	printf("appears %d times ",m);







    return 0;
    
    
}
