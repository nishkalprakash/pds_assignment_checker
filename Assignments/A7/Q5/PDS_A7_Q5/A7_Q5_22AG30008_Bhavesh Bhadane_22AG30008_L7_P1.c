#include<stdio.h>
#include<math.h>
int main(){
	int i,n,a[10];
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the numbers to be stored in array");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
   {
   	printf("%d",a[i]);
   }
	int count=0;
	
	for(i=0;i<n;i++){
		if(a[i]<=a[i+1]){
			count=0;
		}
		if(a[i]>a[i+1]) {
			count=count+(n-i);
			break;
		}
	}
printf("\nOut of order elements are %d",count);
return 0;
}
