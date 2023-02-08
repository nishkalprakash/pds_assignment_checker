#include<stdio.h>
#include<math.h>

{
void printstraight(int arr[int m][int n], int x, int y)
	for(int i=0; i<x, i++){
		for(int j =0; j<y; j++){
			printf("%d", arr[i][j]);
		}
		printf("/n");

	}
}
int main(){
	int m,n, arr;
	printf("enter m:");
	scanf("%d", &m);
	printf("enter n:");
	scanf("%d", &n);
int matrix[m][n];
for (int i=0; i<m; i++){
	for(int j=0; j<n; j++){
		scanf("%d", &arr[i][j]);
	}
}	
printstraight(arr[m][n], m, n);
return 0;
}