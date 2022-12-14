#include<stdio.h>
int sum_factor(int a);
 int main()
{   
   int i=1,n;
   scanf("%d",&n);
  
    while(i<=n)
    { 
       int x; //temporary storage of sum of factors
         x = sum_factor(i);
       
         if(x==i)
           printf("%d\n",i);
 
     
   



   return 0;
}

//factor function to calculate the sum of factor 
  int sum_factor(int a)
{
      int j;
    
     scanf("%d",&a); //to input the integer from user
    int remainder;
    int sum=0;   //to print sum of factors 
 for(i=1;j<a;j++)     
{
    
   remainder=a%j;
   if(remainder==0){     //if remainder is 0 then that value of i is a factor
       sum=sum+j;
    
  }
 }
  
    printf("%d\n",sum);   //printing the sum of factors
   
}
