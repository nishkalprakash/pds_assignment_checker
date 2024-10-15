/*Name-Arihant Garg
  Roll no-24NA10017
  Section-6
  Title-*/
  #define N 100
  
  #include <stdio.h>
  
  int main(){
  
  int n;
  
  printf("Enter the value of n:");                                    //inputting the value of n
  scanf("%d",&n);
  
  int A[N];
  
  for(int i=0;i<=n-1;i++){
     
     printf("Enter the value of a%d:",i+1);                           //filling up the array
     scanf("%d",&A[i]);
     
}

for(int i=0;i<=n-1;i++){                                              //making single digit numbers a double digit for sorting

   if(A[i]/10==0){
   
   A[i]=A[i]*10;
   
   if(A[i]>=100){
   
   A[i]=A[i]/10;
   }
 }
}

//for(int i=0;i<=n-1;i++){                                               //used for testing

  //printf("%d\n ",A[i]);
  
   //}          

  for(int i=0;i<n-1;i++){                                                //sorting
  
      for(int j=0;j<n-i-1;j++){
      
          if((float)(A[j])/10<(float)(A[j+1])/10){
          
             int temp;
             temp=A[j];
             A[j]=A[j+1];
             A[j+1]=temp;
             
             }
      }
}  

for(int i=1;i<=n-1;i++){                                                  //reducing the one digit numbers back to original

    if(A[i]%10==0 && A[i]!=10){
    A[i]=A[i]/10;
    }

 }
 
 for(int i=0;i<=n-1;i++){                                                 //main swapping for making the largest number
 
    if(A[i]>10 && A[i+1]<10 ){
    
      if(A[i]*10+A[i+1]<A[i+1]*100+A[i]){
      
      int temp;
      temp=A[i];
      A[i]=A[i+1];
      A[i+1]=temp;
    
      }
 }
 
 }
 
  printf("A[%d]=[",n);
  
  for(int i=0;i<n-1;i++){                                                //prinitng the modified array

  printf("%d, ",A[i]);
  
   }
   
   printf("%d]\n Largest=",A[n-1]);       
  

for(int i=0;i<=n-1;i++){                                                //prinitng the largest number

  printf("%d",A[i]);
  
   }          
     

  return 0;
  }
