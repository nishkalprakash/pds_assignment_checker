/*NAME:GAURAV MEENA
ROLL NO:22CE10025
ASSSIGNMENT NO:7
DESCRIPTION:shifting
*/

#include<stdio.h>


int main(){

int i;
int n;

int m;

printf("Enter no of elements:");
scanf("%d",&n);

int a[n];

for(i=0;i<n;i++){

scanf("%d",&a[i]);

} printf("enter m:");
scanf("%d",&m);

i=n-1;
while(m<a[i] && i>=0){
   a[i+1]=a[i];
    i--;
  }
a[i+1]=m;
  for(int j=0;j<n;j++){
    printf("%d",a[j]);
}
  return 0;