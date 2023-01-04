#include<stdio.h>



int main(){
int n;
printf("Enter the number of elements you want in Array: ");
scanf("%d",&n);
int A[n];
int i=0;
printf("Enter inputs: ");
while(i<n){
scanf("%d",&A[i]);
i++;
}
int temp;
for(int i=0;i<=n;i++){
for(int j=i;j<n-1;j++){
if(A[i]>A[j+1]){
temp=A[i];
A[i]=A[j+1];
A[j+1]=temp;
}
}
}
printf("Output:\n");
for(int i=0;i<n;i++)
printf("%d ",A[i]);

return 0;
}
