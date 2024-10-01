/*Name:Arihant Garg
  Roll no:24NA10017
  Lab no:7
  Program to find the sum of n terms of the given series*/
  
  #include <stdio.h>
  
  int power(int x , int n){                                               //power function
  int prod=1;
  
  for(int i=1;i<=n;i++){
  
  prod=x*prod;
  }
  return prod;
  }
  
  
  int fact(int n){                                                       //factorial function
  int factorial=1;
  
  if(n==0) factorial=1;                                                  //check for n=0
  
  else{
  
  
  for(int i=1;i<=n;i++){

     factorial=factorial*i;
  }
  
  
  }
  return factorial;
  }
  
  int main(){
  
  int x,n;
  float sum=0;
  
  printf("Enter the value of x\n");                                             //inputting the value of x and n
  scanf("%d",&x);
  
  printf("Enter the value of n(n<=10)\n");
  scanf("%d",&n);
  
  
  
  for(int i=1;i<=n;i++){                                                        //loop to get the sum
  
  sum=(float)sum+(float)(power(x,i-1))/fact(i-1);
  
  }
  
  printf("the value of sum is %0.4f\n",sum);                                       //printing the sum
  
  
  
  
  
  return 0;
  
  }
