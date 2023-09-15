#include<stdio.h>
int main(){
int n;
printf("Enter the number of students ");
scanf("%d",&n);
int arr[n];
float brr[n];
printf("Enter the roll number and CGPA");
	for(int i=0; i<n; i++) {
	scanf("%d%f", &arr[i] , &brr[i]);
	printf("Roll number = %d   CGPA = %.2f ", arr[i], brr[i]);
	}
	float sum =0;
	for(int i=0; i<n; i++) sum = sum + brr[i];
	sum = sum/n;
	printf("\nThe average is %f",sum);
	for(int i=0; i<n; i++){
	for(int j=i+1; j<n;j++){
		if(brr[i] == brr[j]) printf("\nRoll number (%d,%d) have same CGPA of %f ",i,j,brr[i]); 
	}
}
}
