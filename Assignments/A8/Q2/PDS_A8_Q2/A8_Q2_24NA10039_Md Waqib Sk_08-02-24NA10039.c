//inserting a element in its position
//creator:md waqib sk
//roll:24NA10039

#include<stdio.h>

//sorting function
void bubble_sort (int x[], int size) {
int t;
for (int i = 0; i < size; i++)
for (int j = 0; j < size-i-1; j++)
if (x[j] > x[j+1]) {
// swap a[j] and a[j+1]
t = x[j];
x[j] = x[j+1];
x[j+1] = t;
}
}





int main(){
int n,m;
	printf("Enter the size of the array : \n");
	scanf("%d",&n);

	int A[n+1];
	A[n]=1e6;
	printf("Enter the values of the array : \n");
	for(int i=0;i<n;i++){

	scanf("%d",&A[i]);

		}
	printf("Enter the value of m : \n");
	scanf("%d",&m);
	bubble_sort(A,n);  //sorted the given array
	
	
	int ind=-1; // variable to find suitable position to insert 





	for(int i=0;i<n;i++){
	if(A[i]>=m){
	ind=i-1;
	break;

	}
	if(i==n-1 && A[i]<m){
	ind =n-2;
	}
	}

	if(A[n-1]<m){ //if all the elments of array are smaller than m 
	ind =n-1;
	}

	//modifying the given array A
	for(int i=n;i>ind;i--){
	A[i+1]=A[i];

	}
	A[ind+1]=m; //inserting m
	printf(" Output array : \n");
	for(int i=0;i<=n;i++){
	printf(" %d ",A[i]);

	}



}
