#include<stdio.h>
int gcd( int a, int b)
{
   int temp,i;
   for(i=0;;i++)
    {
       temp=b%a;
       b=a;
       a=temp;
      if(temp==0)
       break;
     }
    return b;   // computing the gcd
 }
 void pair(int a[]) 
 {
    int i,j;
    for(i=0;i<5;i++)
    {  
       for(j=i+1;j<5;j++)
         {  
             if(gcd(a[i],a[j])==1)
             printf(" %d and %d are co-prime \n",a[i],a[j]);  //pairing the elements of array using loops and printing if they are co prime
             
          }
    }
 }    
 int main()
 {
    int i,a[5];
    for(i=0;i<5;i++)
    {   
       printf(" enter number %d element \n:", (i+1));   // taking arrays elements from the user
       scanf("%d",&a[i]);
    }
    pair(a);  // calling the pair function
 }
        
 
         
