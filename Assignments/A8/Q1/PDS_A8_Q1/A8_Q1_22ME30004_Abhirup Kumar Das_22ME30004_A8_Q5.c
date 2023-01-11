#include<stdio.h>

int main(){
int s;
printf("No of elements in one row: ");
scanf("%d",&s);

int arr[s][s];
printf("Input the numbers in the array: ");
for(int i=0;i<s;i++){
for(int j=0;j<s;j++)
scanf("%d",&arr[i][j]);
}

for(int i=0;i<s;i++){
for(int j=0;j<s;j++)
printf("%d ",arr[j][i]);
}
return 0;
}
