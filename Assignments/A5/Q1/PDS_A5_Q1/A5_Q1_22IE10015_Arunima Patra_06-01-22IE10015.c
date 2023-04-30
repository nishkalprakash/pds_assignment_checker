//sec 2
//Assignment no-6
//Roll no-22IE10015
//Name-Arunima Patra
//Question no-1
#include<stdio.h>
# define N 100
int main(){
    int n, arr1[N], x;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("Enter the %d element:", i+1);
        scanf("%d", &arr1[i]);
    }
    printf("original array=");
    for(int i=0; i<n; i++){
        printf("%d ", arr1[i]);
    }
    int j=0;
    for(int i=0; i<n; i++){
         if(arr1[i]<0){
		int temp=arr1[i];
	     for(int k=i; k>j; k--){

		    arr1[k]=arr1[k-1];


		}
        arr1[j]=temp;
	     }
         }



    printf("rearranged array=");
    for(int i=0; i<n; i++){
        printf("%d ", arr1[i]);
    }
return 0;
}

