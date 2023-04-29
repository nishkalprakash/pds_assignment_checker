
//name-yash agarwal
//section - 2
// roll.no - 22na10049
//program to print number as a sum of primes

#include <stdio.h>

int primecheck(int i)    //  function to check primes
 {

     for(int j=2;j<i/2;j++)    //  loop checks for prime by dividing by each number
     {

         if(i%j==0)
         {
             return 0;   // if not prime

         }
     }
     return 1;  //  if prime
 }

int main()
{
  int n,t;
printf("Enter the number \n ");  // taking the numger as input
scanf("%d",&n);

if(n%2!=0 || n==2 || n==0)   //  checking condition to print -1
{
    printf("-1");
    return 0;
}
else if(n==4 )     //  printing for 4 exceptionally
{
    printf("2 , 2 ");
    return 0;

}

 for(int i=2;i<n/2;i++)
 {
     if(primecheck(i) && primecheck(n-i))    // sending i and n-i to function
     {
         printf("The primes are \n ");   //  printing the prime pairs
         printf("%d , %d",i,n-i);
         break;
     }

 }




  return 0;

}
