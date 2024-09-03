#include <stdio.h>
void main() {
int a[100],i,j,count,n,k;
printf("enter the value of n\n");
scanf("%d", &n);
if(n<=100) {
for(i=0;i<n;i++) {
printf("enter elements: %d",i);

scanf("%d", &a[i]); // TAKING INPUT FORM USER
printf("original array\n");
for(i=0;i<n;i++){
count=1;
for(j=0;j<n;j++){
if (a[i]==a[j]) { 
count++;
a[j]=999999+k;
k++;

}
if(count>1) {
printf("%d",a[i],count);
}
}
printf("Unique array\n");
for(i=0;i<n;i++) {
if(a[i]>-1) {
printf("%d",a[i]);
}

else if(a[i]<-1)
{ printf("Error\n");
}
}
}
}
}
}
