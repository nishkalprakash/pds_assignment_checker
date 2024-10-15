#include <stdio.h>
#include <math.h>
int digits(int n){

if(n<10){
return 1;
}
else { 
return 1+digits(n/10);

}
int largest(int n ){

for(int i=0;i<n-2;i++){  // bubble sort
 for(int j=0;j<n-1-i;j++){
 if(a[j+1]/(int)(pow(10,digits(a[j+1]-1))) < a[j]/(int)(pow(10,digits(a[j]-1)))){
     int temp = a[j];
   a[j]=a[j+1]; // SWAPPING FUNCTION
   a[j+1]=temp ;



}
void main(){
int n;
printf("enter value of n\n");
scanf("%d",&n); // TAKING VALUE OF N FROM USER
int a[n];
for(int i=0;i<n;i++){  // TAKING VALUE OF ELEMNTS OF ARRAY
scanf("%d",&a[i]);
}
}
