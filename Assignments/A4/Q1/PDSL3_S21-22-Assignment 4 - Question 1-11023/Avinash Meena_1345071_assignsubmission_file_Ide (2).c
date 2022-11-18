/*
Name : Avinash Kumar Meena
Department : Mechanical Engineering  
Roll No : 21ME30015
Package : CodeBlocks
Operating system : Windows
*/

#include <stdio.h>

void f(int arr[],int l,int curl,int h[],int n){
if(curl==l){
    for(int j=0;j<l;j++){
        printf("%d ",h[j]);
    }
    printf("\n");
    return ;
}
for(int j=0;j<n;j++){
        h[curl]=arr[j];
    f(arr,l,curl+1,h,n);
}

}
int main()
{
    int i,n,I;
     printf("no. of elements \n");
     scanf("%d",&n);
     int arr[n];
    printf("Enter array elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter value of I : ");
	scanf("%d",&I);
	int h[I];
    f(arr,I,0,h,n);
}