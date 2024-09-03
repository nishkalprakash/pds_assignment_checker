#include<stdio.h>
int main(){

int arr[100];
//read n numbers
int n;
scanf("%d",&n);
//store and print the numbers

for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}

printf("Original Array:");
for(int k=0;k<n;k++){
printf("%d",arr[k]);
}
//duplicates
printf("Duplicates:");

int a=0;
while (a<n){
if(arr[a]==arr[a-1]){
printf("%d",arr[a]);}

}
return 0;
}
