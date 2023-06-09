//sec 2
//Assignment no-2
//Roll no-22IE10015
//Name-Arunima Patra
//Question no-1
#include<stdio.h>
float mean(int *a, int n){
    if(n==0){

        return 0;
    }
    if(n==1){

        return *a;
    }
    if(n==2){

        return ((*a+*(a+1)))/2.0;
    }

   if(n%2==0){

   return (n/2*mean((a), n/2)+(n/2)*mean((a+n/2),n/2))/n;
   }
   else{
     return (n/2*mean((a), n/2)+(n-n/2)*mean((a+n/2),n-n/2))/n;
   }
}
int main(){
   int *arr;
   int n;
   float m;
   printf("Enter the size:\n");
   scanf("%d", &n);
   arr=(int*)malloc(n*sizeof(int));
   for(int i=0; i<n; i++){
    scanf("%d", (arr+i));
   }
   printf("List:\n");
   for(int i=0; i<n; i++){
    printf("%d ", *(arr+i));
   }
   m=mean(arr, n);
   printf("Mean:%f", m);







return 0;
}
