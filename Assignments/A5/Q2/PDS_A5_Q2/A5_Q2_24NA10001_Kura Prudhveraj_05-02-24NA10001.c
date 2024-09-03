//NAME:PRUDHVERAJ
//ROLL NO : 24NA10001
//SECTION :06
//LAB : 5(1D ARRRAYS)


#include <stdio.h>
int main(){
 #define N 100
 int n;
 scanf("%d",&n);
 int Originalarray [N];
 int count=1;
 int alpha;
 int j ;

 
  for(int i=0;i<n;i++)
     scanf("%d",&Originalarray[i]);
     printf("original array:");
     for (int i=0;i<n;i++)
    printf("%d\n",Originalarray[i]);
    
     
  
   for (int i=0;i<n-1;i++){
       
       for(int j=i+1;j<n-i-1;j++){
       
     
      if( Originalarray[i]== Originalarray [j]){
        
       count++;
       
       if (count>1){
       printf("Duplicates :\n");
       printf("%d(%d)",Originalarray[i],count);
       }
         }
   }
   
    }
 
   return 0;
   }
   
 
 
