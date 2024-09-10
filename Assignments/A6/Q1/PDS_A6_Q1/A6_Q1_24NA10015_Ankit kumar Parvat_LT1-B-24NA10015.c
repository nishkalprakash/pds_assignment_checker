#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
// #Ankit kumar parvat  #B #24NA10015
# define N 5
# define A 5 
# define B 5 
int main()
{  float Filter[N],Y;// define the array
   int BinA[A],BinB[B];// defining the arrays  
   float a;//  defining a variable  for computing the value of Y
   srand(42);
    
   for (int i=0;i<N;++i){
      Y=0;
      int randomNumber=(rand()%100)+1;
      int x=randomNumber;// random number
      for (int k=1;k<=x;++k){
          
          a=((pow(k,2)/((2*k)+1))-pow(-1,k))+Y;
          Y+=a;
      }
      
      Y=Y+sin((x)/3);
      Filter[i]=Y;
   } 
   printf("\n Filter elements");
   for(int i=0;i<N;++i){
     printf("%f,",Filter[i]);}
   int b=1;
   float Y2,a2; // Y2 for another step so that easily compared and a2 for each step of Y2
   int e=0,f=0;// define the index values of  BinA and BinB
   while (b=1){
     
     int randomNumber=(rand()%100)+1;
     int x2=randomNumber;// random number for another step
     Y2=0;
     for (int k=1;k<=x2;++k){
          
          a2=((pow(k,2)/((2*k)+1))-pow(-1,k))+Y2;
          Y2+=a2;
      }
      
      Y2=Y2+sin((x2)/3);
      
      
      for (int i=0;i<N;++i){  // checking the condition 
          if (Filter[i]<Y2){
              BinA[e]=x2;
              e=e+1;
              break;}       
          
          else continue;}
      for (int i=0;i<N;++i){  // checking the condition 
          if (Filter[i]>Y2){
              BinB[f]=x2;
              f=f+1;
              break;}       
          
          else continue;}    
     
      if((e==A)||(f==B)) b=0;
      else continue;
   }
   printf("\n Filter elements");
   for(int i=0;i<N;++i){
     printf("%f,",Filter[i]);}
     
   printf("\n BinA elements");
   for(int i=0;i<A;++i){
     printf("%d,",BinA[i]);}
     
   printf("\n BinB elements");
   for(int i=0;i<B;++i){
     printf("%d,",BinB[i]);} 
   return 0;
}
