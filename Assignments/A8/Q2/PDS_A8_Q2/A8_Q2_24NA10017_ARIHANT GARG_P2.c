/*Name-Arihant Garg
  Roll no-24NA10017
  Section-6
  Title-Program to insert an integer in a sorted array*/
  
  #define N 101
  
  #include <stdio.h>
  
  int main(){
  
  int n;                                                     
  printf("Enter the value of n:");                                        //inputing the value of n
  scanf("%d",&n);
  
  int A[N];
  
  for(int i=0;i<=n-1;i++){
  
      printf("Enter the value of a%d:",i+1);                               //filling up the array
      scanf("%d",&A[i]);
      
      }
      
  for(int i=0;i<n-1;i++){                                                  //sorting the array using bubble sort
  
     for(int j=0;j<n-i-1;j++){
     
        if (A[j]>A[j+1]){
        
            int temp;
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
           
           }
      }   
}

  
 // for(int i=0;i<=n-1;i++){                                               //used for testing
  
 // printf("%d ",A[i]);
  
  //}
  
 int m;
  printf("Enter the value of m:");                                       //inputting the value of m
  scanf("%d",&m);
  
                                                                  
  A[n]=m;                                                              //assigning a position to m in array 
 
  
   
   for(int i=0;i<n;i++){                                               //sorting the new array
  
     for(int j=0;j<n-i;j++){
     
        if (A[j]>A[j+1]){
        
            int temp;
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
           
           }
      }   
}
  
printf("Output Array:\n");                                               //printing the new array
for(int i=0;i<=n;i++){
  
  printf("%d ",A[i]);
  
  }
  
 

  return 0;
  }
