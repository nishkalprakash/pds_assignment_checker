//Creator: Madhav Gupta
//Roll No.:24NA10038
//About: Displaying two largest value entered
#include <stdio.h>
int main()
{
     int max, i, k, count;
     printf("Enter number\n");
      count=0;
      max=0;
     do {
     scanf("%d", &i);
     
     if(i>=max && count==0)
     {
     printf("Largest number:%d\n", i);
     printf("Second largest number:Value not entered yet\n");
     }
    else if(i>=max && count>0)
     {
     k=max;
     max=i;
     printf("Largest number:%d\n", max);
     printf("Second largest number:%d\n", k);
     }
    else if(i<=max && count>0)
     {
     printf("Largest number:%d\n", max);
     if(i>k)
     printf("Second largest number:%d\n", i);}
    else if(i<k)
     printf("Second largest number:%d\n", k);
     
    
     count++;
     }
     
     
     while(i>=0);
    return 0;
    }
    
    
     
     
     
