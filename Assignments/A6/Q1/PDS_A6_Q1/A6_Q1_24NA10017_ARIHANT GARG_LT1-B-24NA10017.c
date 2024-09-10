/***********************************
Name:Arihant Garg                 
Roll No:24NA10017                 
Lab Test:1                        
program to filter out values      
***********************************/

#include <stdio.h>
#include <stdlib.h>                                //accessing all the libraries
#include <time.h>
#include <math.h>
#define N 10                                     //defining constant
#define A 5
#define B 5


int main(){

float Filter[N];
int Bin_A[A];                                     //initialzing all the arrays
int Bin_B[B];

float y,smallest,largest;                                          //initializing varibles
int x,r=0,s=0;

srand(13); 

for(int i=1;i<=N;i++){

                                       

x=rand()%100+1;

   for(int k=1;k<=x;k++){                            //loop to get the value of y

    

      y = (pow(k,2))/(2*k+1);   
      y = y-(pow(-1,k))*k;
      y = y+sin(x/3);                   
 
     }
     Filter[i-1]=y;                                  //storing each value in Filter array
}




   for( int j=1;j<=N;j++){                           //loop to get the smallest number in the filter array
   
   if(Filter[j-1]<smallest) smallest=Filter[j-1];

}


 
                              

   for( int j=1;j<=N;j++){                           //loop to get the largest number in the filter array
   
   if(Filter[j-1]>largest) largest=Filter[j-1];

}



//printf("smallest=%f\n",smallest);                  //used for testing
//printf("largest=%f",largest);






                                        

  x=rand()%100+1;
   
   for(int k=1;k<=x;k++){                            //loop to get the values of y for sorting

if(r==25 || s==25) break;

     

      y = (pow(k,2))/(2*k+1);   
      y = y-(pow(-1,k))*k;
      y = y+sin(x/3);                   
 

      if(y<largest){      
   
        Bin_A[r]=x;                                  //storing x in respective bins
        r+=1;
        }
   
     if(y>smallest){
     
        Bin_B[s]=x;
        s+=1;
     }
     
   
   
   
     
   
}     

 //int G =sizeof(Bin_A)/sizeof(Bin_A[0]);                                 //used for testing
 //int H =sizeof(Bin_B)/sizeof(Bin_B[0]);


//printf("size=%d\n",G);                                                //used for testing
//printf("%d",H);    
     
 //printf("%d and %d",r,s);                                             //used for testing
     
     
     
     
     
     
     
     
     
     
  printf("Filter={ ");                                               //printing the values of Filter array
for(int i=1; i<N-1; i++){

printf("%f, ", Filter[i-1]);

}
 printf("%f, }", Filter[N-1]); 
 
 
 
 
 
 printf("\n\nBin_A={");                                              //printing the values of Bin_A array
for(int i=1; i<r-1; i++){

printf("%d, ", Bin_A[i-1]);

}
 printf("%d}", r-1); 
 
 
 
 
 
 printf("\n\nBin_B={");                                               //printing the values of Bin_B array
for(int i=1; i<s-1;i++){

printf("%d, ", Bin_B[i-1]);

}
 printf("%d}\n", s-1); 
 
 
return 0;
}
