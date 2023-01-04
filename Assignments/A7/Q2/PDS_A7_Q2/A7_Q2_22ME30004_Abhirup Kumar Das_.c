#include<stdio.h>

/*void bubblesort(int *A,int n){
int temp;
int issorted;
for(int i=0;i<n-1;i++){
for(int j=0;j<n-1-i;j++){
if(A[j]>A[j+1]){
temp=A[j];
A[j]=A[j+1];
A[j+1]=temp;
//issorted=0;
}
/*if(issorted){
return;
}*/
//}
//}*/
/*printf("Sorted inputs in the ascending order is:");
for(int i=0;i<=n;i++)
printf("%d\n",A[i]);
}*/


int main(){
int n;
//printf("Enter the number of elements you want in Array:  ");/
//scanf("%d",&n);
int A[100];
int i=0;printf("Enter number of Inputs: ");
scanf("%d",&n);
printf("Enter inputs: ");
while(i<n){
scanf("%d",&A[i]);
i++;
}
printf("Enter new element: ");
scanf("%d",&A[n-1]);
/*int temp;
for(int i=0;i<6;i++){
for(int j=i;j<5;j++){
if(A[i]>A[j+1]){
temp=A[i];
A[i]=A[j+1];
A[j+1]=temp;
}
}
}
printf("Sorted inputs in the ascending order is:\n");
for(int i=0;i<6;i++)
printf("%d ",A[i]);*/

return 0;
}