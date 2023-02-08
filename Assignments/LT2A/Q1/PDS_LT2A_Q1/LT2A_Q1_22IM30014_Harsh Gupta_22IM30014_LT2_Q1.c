/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
Lab test 2
Description - 
*/


#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long int
int m,n;
void callme(int **arr,int i,int j){               // function for recursion
	if(i==0 && j==0){
		printf(" %d",arr[i][j]);
		return ;

	}else if (j>(-1)){
		printf(" %d",arr[i][j]);
		j--;
		callme(arr,i,j);
	}else{
		i--;j=n-1;
		printf("\n");
		callme(arr,i,j);
		
	}
}
int input(int **arr,int m,int n){                 // function for taking input
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
}
int **arr;
int set(){                                        // making an array with the help of malloc
	printf("Enter M: " );
	scanf("%d",&m);
	printf("Enter N: " );
	scanf("%d",&n);
	printf("\n");                     						
	arr=(int**)malloc (m*sizeof(int*));
	for(int i=0;i<m;i++){
		arr[i]=(int*)malloc(n*sizeof(int));
	}
}

int main() {
	
	set();
	input(arr,m,n);
	
	callme(arr,m-1,n-1);

    return 0;
    
    
}