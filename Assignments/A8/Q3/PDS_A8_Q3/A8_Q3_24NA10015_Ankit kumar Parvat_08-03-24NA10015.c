#include<stdio.h>
int digits(int n){ // calculating the digits of n
   if ((n/10)==0) return 1;
   else return (1+digits(n/10));
}
void sortarr(int x[],int size){
   int t;
   for (int i = 0; i < size; i++){
     for (int j = 0; j < size-i-1; j++){
        if (x[j] < x[j+1]) {
          // swap a[j] and a[j+1]
           t = x[j];
           x[j] = x[j+1];
           x[j+1] = t;}}}

}

int firstdig(int n){
   if(digits(n)==2) return n/10;
   else return n;

}


int main(){
  int n;//  size of array
  scanf("%d",&n);
  int A[n];
  for(int i=0;i<n;i++){
     scanf("%d",&A[i]);}
 
  sortarr(A,n);
  
  
  
  int t;
  for(int i=0;i<n;i++){
     int a= firstdig(A[0]);
     int b=1+i;
     for(int j=0;j<n;j++){
       if (a==firstdig(A[j]){
          t=A[b];
          A[b]=A[j];
          A[j]=t;
       
       
       }
             
     }
  }  
  
     
  return 0;
}
