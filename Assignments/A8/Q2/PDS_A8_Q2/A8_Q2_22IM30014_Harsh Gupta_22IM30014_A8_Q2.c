/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 8 
Description - 
*/


#include <stdio.h>
int minin(int i,int m,int arr[][m]){                           // finding min of row
	
			int min=10000;
   			for (int j=0;j<m;j++){
   					 
   				if (arr[i][j]<min){
   					
   					min=arr[i][j];
   					

   				}

   	}	
   	return min;
}
 int n,m;
int main() {
   	
   	scanf("%d",&n);
   	scanf("%d",&m);
   	int arr[n][m];
   	for (int i=0;i<n;i++){
   		for (int j=0;j<m;j++){
   			scanf("%d",&arr[i][j]);
   		}
   	}
   	int hsh=1;
   	for (int i=0;i<m;i++){
   		int max=0,store=0;
   			for (int j=0;j<n;j++){                  // finding max of col
   				if (arr[j][i]>max){
   					max=arr[j][i];
   					store=j;                  // storing it index row


   				}
			}
			if (max==minin(store,m,arr)){                 // calling min func to find that row min no . 

					printf("%d",max);                // checking whether they are same so print 
					hsh=0;
			}


	}
	if (hsh==1) printf("There is no saddle point in 2D array");           // if not then print these 
    return 0;
    
    
}
