// code to scan array in a range and distribute it into more ranges
// Code creator: Bhumi Garg
// Roll No: 24NA10021

#include <stdio.h>


void BIN (int a[], int N, int x, int y){
  
    int bin_len,j,k, bin[50], elements = 0,bin_number=1;
    
    bin_len = y/x;
    
    for (k=0; k<=x; k++)
   {
       for(j=0; j<=N; j++)
      { 
           if( (k*bin_len) +1 <= a[j] <= (k+1)*bin_len)
           {
              bin [j] = a[j];
              elements++;
           }
           
       }
       
      printf("\n bin%d : ", bin_number);
       for(j=0; j<N; j++)
        printf ("%d, ", bin[j]);
        
      printf("\n elements = %d", elements);
      	
      bin_number++;
      
   }
   printf ("\n");
 }
    
int main(){

   int N, i, Bins, max = 0;
   
   scanf("%d", &N);
 
   int a[N];
   
    for(i=0; i<N; i++)
     scanf("%d", &a[i]);
     
   scanf ("%d",  &Bins);
   
   for ( i=0; i<N; i++)
   {
       if (a[i] > max)
       max = a[i];
    }
    
    BIN(a,N, Bins, max);

}
    
