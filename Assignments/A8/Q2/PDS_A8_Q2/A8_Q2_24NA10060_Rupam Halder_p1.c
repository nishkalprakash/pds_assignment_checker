#include<stdio.h>
int main{
int n,m;
int arr[n];
scanf("%d",&n);
scanf("%d",&arr[n]);
scanf("%d",&m);
for(int i=0;i<n;i++){
 if(arr[i]>=arr[n-(i+1)]){
 arr[i]=arr[n-(i+1)];
 }


}



return 0;}
