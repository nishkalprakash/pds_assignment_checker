/*Name:Arihant Garg
  Roll no:24NA10017
  Lab no:7
  Program to find sets of co prime numbers from an array*/
  
  #include <stdio.h>
  
int gcd(int x,int y){                                                   //function to check whether the two integers are co prime or not
int temp,coprime;

while(y!=0){


temp=y;                                                                 //doing the gcd division
y=x%y;
x=temp;

if(y==1){       
coprime=1 ;                                                             //if gcd=1 break and the two integers are co prime
break;

} 
coprime=0;                                                              //reassigning for further loops
      }
      
      return coprime;
      
      }
  
  
  
  
  
  
  

  int main(){
  
  int A[5],a,b;
  
  printf("Enter the five integers\n");
  
  for(int i=0;i<5;i++){                                                                //filling the array
  
  scanf("%d",&A[i]);
  }
   gcd(14,16);
   
  for(int i=0;i<=4;i++){                                                               
  
      for(int j=i+1;j<=4;j++){
      
      if(A[i]>A[j]) {                                                                  //checking which one is larger
       
      a=A[i];
      b=A[j];
      }
      
      else{ 
      a=A[j];
      b=A[i];
      }
      
       if (gcd(a,b)){                                                                  //gcd function call
       
       printf("%d and %d are co prime\n",A[i],A[j]);                                   //print this if true
  
  }
                                                                                       //print nothing if false
  }
  
  }
  
  
  return 0;
  }
