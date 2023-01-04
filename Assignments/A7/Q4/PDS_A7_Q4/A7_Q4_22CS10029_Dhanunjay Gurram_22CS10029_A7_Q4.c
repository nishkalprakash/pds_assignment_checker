/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:7*/
#include <stdio.h>
#include <stdlib.h>
int size(int);
int size(int n){
int i=1;
while (n/10!=0){
  n=n/10; i++;}
return i;}
void bubble_sort(int *,int);
void bubble_sort(int a[],int n){
   int t;
   for (int i=0;i<n;i++){
     for (int j=0;j<n-i-1;j++){
        if (a[j]>a[j+1]) {
            t=a[j]; a[j]=a[j+1]; a[j+1]=t;}}}}
int main(){
int *a,*z1,*z2,i=1,t=0,m=1,n=1,*s,temp;
char d;
a=(int *)malloc(i*sizeof(int));
scanf("%d",&a[i-1]);
while (1){
  i++;
  a=realloc(a,i*sizeof(int));
  scanf("%d",&a[i-1]);
  d=getchar();
  if (d=='\n') break;}
for (int j=0;j<i;j++){
  t=a[j];
  if (size(t)==1) {z1=realloc(z1,m*sizeof(int));
             z1[m-1]=t
             m++;}
  else if (size(t)==2) {z2=realloc(z2,n*sizeof(int));
                  z2[m-1]=t;
                  n++;}}
bubble_sort(z1,m); bubble_sort(z2,n);
return 0;
}
    


