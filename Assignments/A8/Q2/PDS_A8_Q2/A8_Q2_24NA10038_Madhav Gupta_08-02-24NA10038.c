//creator:Madhav Gupta
//roll no:24NA10038

#include<stdio.h>
#define N 101
void sort(int x[], int size){//to sort the array
  int t, i, j, k;
  for (i=0; i<size; i++){
   for (j=0; j< size-i-1; j++){
     if(x[j]>x[j+1]){
     t=x[j];
     x[j]=x[j+1];
     x[j+1]=t;
     }
     
}
}

} 
int main(){
   int size, k, A[N], m;
  scanf("%d", &size);
  for(k=0; k<size; k++){
    scanf("%d", &A[k]);
    }
    
    sort(A, size);// for sorting the first time
   scanf("%d", &m);
   A[size]=m;//for inserting m
   sort(A, size+1);//for placing m properly
printf("Output Array:");
    for(k=0; k < size+1; k++){
    printf("%d ", A[k]);}
    

   return 0;
   }
