#include<stdio.h>
void sortarr(int x[],int size){
   int t;
   for (int i = 0; i < size; i++){
     for (int j = 0; j < size-i-1; j++){
        if (x[j] > x[j+1]) {
          // swap a[j] and a[j+1]
           t = x[j];
           x[j] = x[j+1];
           x[j+1] = t;}}}

}
int search(int A[],int size,int m){
   int t=0;
   for(int i=0;i<size;i++){
       if (A[i]<m) t=i;
       }
   return t;


}
int main(){
    int A[101];
    int n;// size of array
    printf("\n n=");
    scanf("%d",&n);
    printf("\n A[n]=");
    for (int i = 0; i <=n; i++){
       if (i==n) A[i]=0;
       else scanf("%d",&A[i]);}
    sortarr(A,n);
    
    int m;
    printf("\n m=");
    scanf("%d",&m);
    int pos=search(A,n,m);
    for (int i=n;i>pos;i--){
       if (i==(pos+1)) A[i]=m;
       else A[i]=A[i-1];}
           
    printf("\n output array: \n");
    for (int i = 0; i <= n; i++){
       printf("%d,",A[i]);}
     
    return 0;}
    
       




