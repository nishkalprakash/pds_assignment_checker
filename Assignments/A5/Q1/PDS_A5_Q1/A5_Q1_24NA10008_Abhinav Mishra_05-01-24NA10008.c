#include <stdio.h>
void main() {
int a[100],n,i,j,temp;
 printf("Enter value of n: \n");
 scanf("%d", &n);
 if (n>100) {
 printf("Error:n>100");}
 else if(n<=100){
 for(i=0;i<n;i++) {
 scanf("%d", &a[i]);
 }
 printf("original Array: %d", a[i]); 
 
for(i=0;i<n;i++) {
for(j=0;j<n;j++) {
if (a[j]>0 && a[i]<0) { 
 temp = a[i];
 a[i] = a[j];
 a[j] = temp;
 break;
 }
 }
 }
 printf("Rearranged array\n");
 for(i=0;i<n;i++) {
 printf("%d", a[i]);
 printf("\n");
 }
 }
 }

