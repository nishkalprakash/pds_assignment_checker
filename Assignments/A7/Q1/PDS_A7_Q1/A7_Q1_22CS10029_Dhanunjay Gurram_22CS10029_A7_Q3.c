/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:7*/
#include <stdio.h>
#include <stdlib.h>
int main(){
int *a,i=1,m,k;
char d;
printf("A[n]=");
a=(int *)malloc(i*sizeof(int));
scanf("%d",&a[i-1]);
while (1){
   i++;
   a=realloc(a,i*sizeof(int));
   scanf("%d",&a[i-1]);
   d=getchar();
   if (d=='\n') break;}
printf("m=");
scanf("%d",&m);
a=realloc(a,(i+1)*sizeof(int));
for (int j=0;j<i-1;j++){
   if (a[j]<m && a[j+1]>m) k=j+1;}
if (a[0]>m) {
for (int j=0;j<i+1;j++){
  a[i-j]=a[i-j-1];
  if (j==i) a[0]=m;}}
else if (a[i-1]<m) {a[i]=m;}
else {
for (int j=i;j>=k;j--){
  if (j==k) {a[k]=m; break;}
  a[j]=a[j-1];}}
printf("Output array: ");
for (int j=0;j<i+1;j++){
   printf("%d ",a[j]);}
printf("\n ");
return 0;
}
