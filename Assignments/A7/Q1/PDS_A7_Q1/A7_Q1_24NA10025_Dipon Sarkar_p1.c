//Code Creator :- Dipon Sarkar
// Roll No. :- 24NA10025 



#include<stdio.h>
int power(int x,int n); // initialising the power function
int fact(int n);// initialising the power function



int main()
{
 int i,n,x,sum=0;
 printf("Enter x and n:"); //taking the inputs as x and n
 scanf("%d %d", &x,&n); // taking input from the user
 for(i=1;i<=x;i+=2)
 {
  sum=sum+(power(x,n)/fact(n)); // calculating the sum
  printf("Result:%d\n",sum); // printing the sum
  }
  
  }
int fact(int n)
  {
   int i,temp=1;
   for(i=1;i<=n;i++)
   {
    temp*=i;
    
    }
    return(temp); //returning the value of factorial
    } 
 int power(int x,int n)
{
  int i;
  for (i=1;i<=n;i++){
  x=x*x;
 }
 return x; // returning the value of x
 }
 

    
     

