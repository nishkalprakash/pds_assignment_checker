/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 5
* Description : Program to input array and separate it into bins
*/
#include<stdio.h>
int main()
{
 int arr[n];
 int i,bin,n;
printf("N= 10");
scanf("%d", &bin);
scanf("%d", &n);
for(i=0; i<n; i++){
   scanf("%d", &arr[i]);
}
 int min, max;
 min= arr[0];
 for(i=0; i<n; i++){
if(arr[i]<min){
   min= arr[i];
}
}
 max= arr[0];
for(i=0; i<n;i++){
 if(arr[i]>max){
  max= arr[i];
}
} 
elems= n/bin;

for(j=1; j<=bins ;j++){
printf("bin[%d],j");
printf("elems[%d],elems");
for(k=min; k<=elems; k++){
printf("%d", arr[k]);
 }
return 0;
}

 
   
