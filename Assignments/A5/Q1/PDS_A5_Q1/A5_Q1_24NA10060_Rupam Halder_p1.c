//name-Rupam Haldar
//Roll no-24NA10060

#include <stdio.h>
int main(){

int arr[100];
int arrsize=100;
int n;

//taking input

scanf("%d",&n);
int a =0;
while(a<=n){
scanf("%d",&arr[a]);
a++;
}
for(int  a=0;a<=n;a++){
printf("Original Array:%d",arr[a]);}
//rearranging

if(arr[n]<0){
int i=0;
while(i<=n-1){
arr[i]=arr[n];
i++;
}
}
else if (arr[n]>0)
{ int k =n-1;
while(k>=0){
arr[k]=arr[n];
k++;}
}

else if (arrsize>100){
printf("Error:n >100");
}
return 0;
}
