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

int n,a[102],i,t,j;

scanf("%d",&n);

for(i=0;i<n;i++){
scanf("%d",&a[i]);
}

sort(a,n);

printf("A[%d]:",n);
for(i=0;i<n;i++){
printf("%d ",a[n]);
}


printf("LARGEST:");
for(i=0;i<n;i++){
printf("%d",a[n]);
}





}
