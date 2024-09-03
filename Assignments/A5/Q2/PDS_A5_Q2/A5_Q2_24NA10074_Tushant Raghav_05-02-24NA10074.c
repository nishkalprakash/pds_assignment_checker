#include<stdio.h>
#define N 100
int main()
{
	int arr[N], n, i, j, count=1;
	printf("Enter the  number : ");
	scanf("%d",&n);
	
	if(n>N) {printf ("Error: n>100");}
	else{
		for(i=0;i<n;i++){
	 		scanf("%d",&arr[i]);
	 		}
	 	printf("Duplicates :\n");
	 	for (i=0;i<n;i++){
	 		for (j=i+1;j<n;j++){
	 			if(arr[i]==arr[j]){count++;}
	 			}
	 		printf("%d (%d)\n",arr[i],count);
	 		}
	}
	return 0;
}
