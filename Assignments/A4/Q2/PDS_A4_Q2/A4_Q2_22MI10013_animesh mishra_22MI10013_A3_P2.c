
/*
section 14
rollno:22MI10013
name:animesh mishra
assignment no:4
discription : sum of numbers
*/
#include<stdio.h>
int main()
{ 
      int i,n;
      printf("enter the input");
      scanf("%d",&n);
      
      for(i=1;i<=n;i++) {
                if(n%i==0)
    printf("%d\n",i);
  }
return 0;

}#include<stdio.h>
int main()
{
      int n,sum=0,rem;
 
      printf("enter the numbers");
      scanf("%d",&n);
      if(n<0)
              {
              while(n<0)
              { 
                   rem=n%10;
                   sum=sum+rem;
                   n=n/10;

                 }
                
    }
  else
         
         {
   	while(n>0)
 	 {   
         
                     rem=n%10;
     	             sum=sum+rem;
                     n=n/10;
           }
      	   }
             printf("the sum of digit is: %d" ,sum);
  return 0;
  }
