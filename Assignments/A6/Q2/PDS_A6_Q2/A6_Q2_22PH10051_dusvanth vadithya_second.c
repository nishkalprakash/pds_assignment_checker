/*
  NAME:VADITHYA DUSVANTH
  SECTION:14
  LAB:6
*/

#include<stdio.h>
#include<stdlib.h>

 int gcd(int a,int b);
 int temp;
  if ( a%b == 0)
    { 
    temp = gcd(b,a%b);
   
 else return b;
  }
   int main()
    { 
      int n;
    printf("enter no. of elements in the array: ");
    float arr[n];
    int check=2;
    for( int i=0;i<n;i++)
    {  
    scanf("%d",&arr[i]);}
    if(arr[i]<0)check=0;
    if((arr[i]*10)%10 !=0) check =1;
  
     if (check==1)
    {
      printf("invalid entries: all should be integer numbers");}

      else if(check==0){
    printf("invalid entries: all should be positive numbers");}
 
        else
  
           for(int i=0;i<n;i++)
            for(int j =i+1;i<n;j++)
           {
          printf("coprime(arr[i],arr[j]");
           }
             return 0
  }
 

  




