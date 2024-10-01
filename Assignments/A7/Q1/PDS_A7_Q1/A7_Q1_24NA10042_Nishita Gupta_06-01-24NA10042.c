// Program to 
// Code creator : Nishita Gupta
// Roll number : 24NA10042

#include<stdio.h>


     int power(int x, int n){ ////creating power function
     int pow=1;
     for(int i=1; i<=n; i++)
     pow=x*pow;
     return pow;
    }
    
    int factorial(int n){      //creating factorial function
    long int prod=1;
    if (n==0) return 1;
    else 
    {for(int i=1; i<=n; i++)
    prod=prod*i;
    return prod;}}
    
    int main()
    { 
       int n,x;
       int i;
       int a=0;
       int b;
       float sum = 1;
       printf("ENTER THE VALUES OF x and n:");
       scanf("%d %d", &x, &n);
       
  
       if(x==0) 
       printf("1");
       else {
       for( i=1; i<=n; i++){
      
        a= power(x,i);
       b= factorial(i);
       
       sum= sum+ ((float)a/b) ;}
       printf("%f" , sum);}
    

return 0;
}
