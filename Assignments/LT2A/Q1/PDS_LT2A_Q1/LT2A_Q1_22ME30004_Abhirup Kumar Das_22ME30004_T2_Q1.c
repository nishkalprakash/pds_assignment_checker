/*Code by Abhirup Kumar Das, Roll No.: 22ME30004*/


#include<stdio.h>

#include<stdlib.h>
int print_arr(int m,int n){ //using print array function
printf("Enter the size of column:");
scanf("%d",&m);
printf("Enter the size of row:");
scanf("%d",&n);
//int a[m][n]=(int *)malloc((m*n)*sizeof(int));
int a[m][n];
//a=(int*) malloc(m*n * sizeof(int));
printf("Enter the %d elements: \n", m*n);
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
scanf("%d",&a[i][j]);
}
}
for(int i=m-1;i>=0;i--){//for reversing rows and columns
for(int j=n-1;j>=0;j--){
printf("%d ",a[i][j]);
}
printf("\n");
}
}
int main(){
int m,n;
print_arr(m,n);//Function Call

return 0;
}
