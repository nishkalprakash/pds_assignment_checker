/*lab 7
name :- Mohd Abutalha
roll no.:- 24NA10040*/

#include<stdio.h>

//making function to calculate factorial of n
int fact(int n){        
   int p=1;
   if(n==0)
   {
   return 1;}
    else if(n!=0){
    for(int i=1;i<=n;i++) 
    {p=p*i;}
    }
    return p;
    }
 //making function to calculate x raised to power n   
int power(int x,int n){   
    int t=1;
    for(int i=1;i<=n;i++)
    t=t*x;
    
    return t;
}

int main()
{
     int i,x,n;
     float sum=0;
     printf("enter the value of x: ");
     scanf("%d",&x); //taking input for x
     printf("enter the value of n: ");
     scanf("%d",&n); //taking input for n
     if(n<=10){
     for(i=0;i<=n-1;i++){
     float f= (float)(power(x,i))/(fact(i));  //general term 
      sum=sum+f;}
     printf("%f\n",sum);
}


	return 0;
}
