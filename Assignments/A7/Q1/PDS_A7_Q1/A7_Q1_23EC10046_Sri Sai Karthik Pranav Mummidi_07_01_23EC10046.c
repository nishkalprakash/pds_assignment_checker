//roll no: 23EC10046
//name: mummidi sri sai karthik pranav
#include<stdio.h>
#include<stdlib.h>
//int findmax(int a[20][20],int m,int n){
//  int b[3][3];
//  int sum=0,max=0,i=0,j=0;
  
// int k=(i+3),l=(j+3);
//     while(i<(m-2)&&j<(n-2)){
	
//	for(i<k;i++;){
	  //	  for(j<l;j++;){
	  //  sum+=a[i][j];
//  b[i][j]=a[i][j];}}
//	if(sum>max) max=sum;
//  }
// printf("max submatrix:\n");
// for(int p=0;p<3;p++){
//   for(int q=0;q<3;q++){
//	printf("%d",b[p][q]);}
//  }
// printf("sum=%d",sum);
//}
//int findmin(int a[20][20], int m,int n){
// int b[3][3];
// int sum=0,min=100000,i=0,j=0;
  
// int k=(i+3),l=(j+3);
//  while(i<(m-2)&&j<(n-2)){
	//	
//	for(i<k;i++;){
//	  for(j<l;j++;){
//    sum+=a[i][j];
//    b[i][j]=a[i][j];}}
//	if(sum<min) min=sum;
// }
// printf("min submatrix:\n");
// for(int p=0;p<3;p++){
//   for(int q=0;q<3;q++){
//	printf("%d",b[p][q]);}
//   }
// printf("sum=%d",sum);
//}
int findminmax(int a[20][20],int m,int n){
  int b[m],r,s;
  for(int i=0;i<m;i++){
    int max=0;
    for(int j=0;j<n;j++){
      if(a[i][j]>max){ max=a[i][j];s=j;}}
    b[i]=max;}
  int minmax=100000;
  for(int i=0;i<m;i++){
    if(b[i]<minmax){ minmax=b[i];r=i;}}
  printf("minmax=%d",minmax);
  printf("present in %d row %d column",r,s);}
int findmaxmin(int a[20][20],int m,int n){
  int b[m],r,s;
  for(int i=0;i<m;i++){
    int min=100000;
    for(int j=0;j<n;j++){
      if(a[i][j]<min){
	min=a[i][j];s=j;}}
    b[i]=min;}
  int maxmin=0;
  for(int i=0;i<m;i++){
    if(b[i]>maxmin){
      maxmin=b[i];r=i;}}
  printf("maxmin=%d",maxmin);
  printf("present in %d row %d column",r,s);}

  
  

int main(){
  int arr[20][20],m,n;
  printf("enter no of rows:");
  scanf("%d",&m);
  printf("enter no of columns:");
  scanf("%d",&n);
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      arr[i][j]=rand() % 11+0;}
  }
 for(int i=0;i<m;i++){
   printf("%d row",i+1);
   for(int j=0;j<n;j++){
      printf("%d ",arr[i][j]);}
    printf("\n");}
 findmax(arr,m,n);
 printf("\n");
 findmin(arr,m,n);
 printf("\n");
 findminmax(arr,m,n);
 printf("\n");
 findmaxmin(arr,m,n);
 return 0;
}
