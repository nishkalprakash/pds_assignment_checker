#include<stdio.h>
  int main()
{   int a,i;
    printf("enter the no. to get the factor of  ");
    scanf("%d",&a); \\to input the integer from user
    int remainder; 
 for(i=1;i<=a;i++)     
{
    
 remainder=a%i;
  if(remainder==0){     \\ if remainder is 0 then that value of i is a factor
    printf("%d\n",i);   \\printing the value of i each time when program is evaluated
}
 

}



   return 0;
}
