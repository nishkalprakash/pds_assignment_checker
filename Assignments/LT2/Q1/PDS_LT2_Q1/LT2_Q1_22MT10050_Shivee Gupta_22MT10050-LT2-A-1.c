// Shivee Gupta
//22Mt10050 Sec2 Set A

#include<stdio.h>
#include<stdlib.h>

float mean(int*arr,int n){
    int i;
if(n==1) return arr[n-1];
float sum = arr[n-1] + mean(&arr,int n-1);
return sum;
}

int main(){
int n,i;
printf("Enter the number of integers : ");
scanf("%d",&n);
int *arr = (int*)malloc(n*sizeof(int));
printf("Enter the list of integers : ");
for(i=0;i<n;i++){
scanf("%d ",&arr[i]);}

printf("List = ");
for(i=0;i<n;i++){
printf("%d ",arr[i]);}
float avg = (mean(&arr,n))/n;
printf("\n Mean = %f",avg);
free(arr);
return 0;
}
