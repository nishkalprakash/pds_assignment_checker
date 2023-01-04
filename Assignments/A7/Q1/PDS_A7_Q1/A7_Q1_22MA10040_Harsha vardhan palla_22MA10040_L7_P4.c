/*section 14
 Roll no:22MA10040
 name : Palla Sri Harsha Vardhan
 Assignment no:7 
desc :Appending an element in the array
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
int *a,i=1,p,k;
char num;
printf("A[n]=");
a=(int *)malloc(i*sizeof(int));
scanf("%d",&a[i-1]);
while(1){
  i++;
  a=realloc(a,i*sizeof(int));
  scanf("%d",&a[i-1]);
  num=getchar();
  if(num=='\n') break;}
printf("m=");
scanf("%d",&p);
a=realloc(a,(i+1)*sizeof(int));
for(int j=0;j<i;j++){
  if(a[j]<p && a[j+1]>p) 
k=j+1;}
if(a[0]>p) {
for(int j=0;j<i+1;j++){
  a[i-j]=a[i-j+1];
  if(j==i) a[0]=p;}}
else if(a[i-1]<p){a[i]=p;}
else {
for(int j=i;j>=k;j--){
  if(j==k) {a[k]==p; break;}
  a[j]=a[j-1];}}
printf("output array: ");
for(int j=0;j<i+1;j++){
printf("%d",a[j]);}
printf("\n");
return 0;
}

