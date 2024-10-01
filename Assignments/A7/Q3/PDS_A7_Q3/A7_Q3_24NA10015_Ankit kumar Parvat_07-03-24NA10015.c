#include<stdio.h>
void binarr(int arr[],int N,int bins){
     int max=arr[0],min=arr[0];
     for (int i=0;i<N;i++){
        if(max<arr[i]) max=arr[i];
        else if (min>arr[i]) min=arr[i];}
 // array  contain elements in range [min,max] 
 // each  bin elemennts  in range [(min+(i-1)*size),(i*size)] where i is the bin number
     int size=(max-min+1)/bins; 
     
     for(int i=1;i<=bins;i++){
         int b=0;        
         printf("\n bin %d ->",i);
         for(int j=0;j<N;j++){
            if((min+(i-1)*size)<=arr[j]<=(i*size)) {
               b+=1;
               printf("%d",arr[j]);}
            }
          printf(" Elems=%d",b);  
     
     }       
     
     



}
int main(){
   int N;
   printf("\n N=");
   scanf("%d",&N);
   int a[N];
   int bin;
   printf("\n A[N]=");
   for(int i=0;i<N;i++){
      scanf("%d",&a[i]);}
   printf("\n Bins=");   
   scanf("%d",&bin); 
   binarr(a,N,bin);
   return 0; 

}

