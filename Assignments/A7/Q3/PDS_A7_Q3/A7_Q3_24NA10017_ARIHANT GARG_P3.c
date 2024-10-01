/*Name:Arihant Garg
  Roll no:24NA10017
  Lab no:7
  Program to sort the elements of an array into bins*/
  
  #include <stdio.h>
  
  int greatest(int B[],int n){
  
  int largest;
  
  for(int i=1;i<=n;i++){
  
     for(int j=1;j<=n;j++){
     
        if(B[i]>=B[j]) largest=B[i];                                          //finding the largest number in the array
        
        return largest;
                                                           
        
        int least(int B[],int n){
  
  int smallest;
  
  for(int i=1;i<=n;i++){
  
     for(int j=1;j<=n;j++){
     
        if(B[i]<=B[j]) smallest=B[i];                                          //finding the smallest number in the array
        
        }
    }
    
        
        return smallest;
  }
  
 
  
     
  
  
  
  int main(){
  int N,bins;
  printf("Enter the value of N:");                                                                //scanning the values of N and number of bins
  scanf("%d",&N);
  printf("Enter the no of bins:");
  scanf("%d",&bins);
  
  int A[N];
  
  for(int i=1;i<=N;i++){
  
  printf("Enter the value of A[%d]:\n",i-1);
  scanf("%d",&A[i-1]);
  
  for(int i=0;i<N;i++){
  
     
     
  
  
  
  
  
  }
  
  
  
  
  
  
  return 0;
  }
