#include <stdio.h>

void sort(int a[],int n){

int i,k,t,j;

for(i=0;i<n;i++){
for(j=0;j<n-i-1;j++){
if(a[j]>a[j+1]){
 
 t = a[j];
 a[j]=a[j+1];
 a[j+1] = t;

}


}
}
}


int main(){
int n,m,a[102],i,t,max;
max = a[0];

printf("n:");
scanf("%d",&n);

printf("A[n]:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}

printf("m:");
scanf("%d",&m);

for(i=0;i<=n;i++){
 if(a[i]>max){
  max = a[i];
 }
 }
 
sort(a,n);

a[n+1] = m;

for(i=0;i<n;i++){
 if(m<a[i]){
  t = a[i];
 a[i]=m;
 m = t;

 }
 }



printf("Output array:");
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
printf("%d ",max);

return 0;

}
