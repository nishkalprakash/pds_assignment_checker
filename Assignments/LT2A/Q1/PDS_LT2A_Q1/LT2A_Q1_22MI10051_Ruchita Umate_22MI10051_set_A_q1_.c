#include<stdio.h>
#include<stdlib.h>

int fun1(int m,int n){

printf("Enter M:");
scanf("%d",&m);
printf("Enter N:");
scanf("%d",&n);

int *arr1[m][n];
arr1[m][n]=(int*)malloc((m*n)*(sizeof(int)));

printf("Enter the %d elements",m*n);
for(int i=0;i<m;i++){
printf("\n");
for(int j=0;j<i;j++){
scanf("%ls",arr1[i][j]);
}

}
for(int i=0;i<m;i++){
printf("\n");
for(int j=0;j<i;j++){
printf("%ls",arr1[i][j]);
 }
}
}

/*int fun2(int n,m){
int *arr2;
arr2=(int*)malloc((m*n)*(sizeof(int)));

for(int i=m;i>=0;i--){
printf("\n");
for(int j=n;;j--){

printf("%d",

}
}
}
*/

int main(){
int m,n;
fun1(m,n);
return 0;
}
