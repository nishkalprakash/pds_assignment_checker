#include<stdio.h>

int main(){
int count=0;
int n;
printf("Enter how many numbers you want to add in an array: ");
scanf("%d",&n);
int a[n],i;
printf("Enter the elements of the array: ");
for(int i=0;i<=n;i++){
scanf("%d",&a[i]);
}
for(int i=0;i<=n;i++){
for(int j=i-1;j==0;j--){
if(a[i]<a[j]){
count=count+2;
}
for(int k=i+1;k<=n-1;k++){
if(a[k]<a[i]){
count=count+2;
}
}
}
}
printf("Out of order: %d",count);
return 0;
}
