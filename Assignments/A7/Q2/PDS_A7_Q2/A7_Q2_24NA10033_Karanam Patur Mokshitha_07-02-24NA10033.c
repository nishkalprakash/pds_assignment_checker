#include<stdio.h>
void CoPrime(int ,int );
int gcd(int,int);
void pair(int a[]);
int main ()
{
      int i,j,a[5],flag;
      printf("Please enter 5 numbers:\n");
      for(i=0;i<5;i++)
      {
      scanf("%d",&a[i]);
      }
      //The following step is to test whether pair of numbers are co prime or not from 5 numbers 
          pair(a);      
          if(flag==1){    
          printf("%d and %d are co-primes\n",a[i],a[j]);
                      }
          else{
          printf("No Co Primes found");
          }           
                        
	return 0;
}
int gcd(int a,int b)
{
          int flag;
          while(a!=0)
            {
		  int temp;
		  temp=a;
		  a=b%a;
		  b=temp;  
            }
            return a;
}
void pair(int a[])
{      
       for(int i=0;i<5;i++){
		  for(int j=i+1;j<5;j++){
		  CoPrime(a[i],a[j]);
		                     }
                            }
                     
    return;
}
void CoPrime(int a,int b)
{                   int flag;
                    if(gcd(a,b)==1){
                    flag==1;
                    }
		  		
      return;
}

                            
              
               
     
   
          
             
        
        
