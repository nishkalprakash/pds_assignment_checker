/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 8
Description - 
*/


#include <stdio.h>
 
int main() {
   	int n;
   	scanf("%d",&n);
   	int arr[n][n];
   	for (int i=0;i<n;i++){                 // taking row major order 
   		for (int j=0;j<n;j++){
   			scanf("%d",&arr[i][j]);
   		}
   	}
   	for (int i=0;i<n;i++){                 // printing column major order
   		for (int j=0;j<n;j++){
   			printf("%d ",arr[j][i]);
   		}
   	}
	
    return 0;
    
    
}