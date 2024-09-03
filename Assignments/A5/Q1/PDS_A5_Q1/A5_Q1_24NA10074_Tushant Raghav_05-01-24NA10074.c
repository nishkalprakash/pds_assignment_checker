#include<stdio.h>
#define N 100
int main()
{
	int n,arr[N],i,j,temp;
	printf("Enter the number : ");
	scanf("%d",&n);
	if(n>N){
		printf("Error : n>100");
		}
	else{
		for( i=0;i<n;i++){
			scanf("%d",&arr[i]);
			}
		for(i=0;i<n;i++){
			if(arr[i]<0){
				temp=arr[i];
				arr[i-1]=arr[i];
				arr[i]=temp;
				}
			}	
			printf("arr[i]");
		}
		
	}
	
	return 0;
}
