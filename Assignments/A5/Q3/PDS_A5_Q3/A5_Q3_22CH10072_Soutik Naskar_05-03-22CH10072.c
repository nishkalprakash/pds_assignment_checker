#include<stdio.h>
#include<math.h>
void swap(int p,int q);
void reverse(int *a)
void cyclicshift(int *a,int direction);
int main(){
	int i,n;
		
	printf("Enter the size of the array and direction:");
	scanf("%d %d",&n,&i);
	printf("Enter %d intergers:",n);
	int arr[n];
	
	for(int j=0;j<n;j++){
		scanf("%d",&arr[j]);
	}
	printf("original array:");
	for(int j=0;j<n;j++){
		printf("%d ",arr[j]);

	}
return 0;
}
void swap(int p,int q){
	int sw;
	sw=p;
	p=q;
	q=sw;

}

void cyclicshift(int *a,int direction){

}
