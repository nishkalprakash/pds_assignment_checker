#include<stdio.h>
int main()
{
int x,m2=0,m1=0;
printf("Enter the numbers:\n");
scanf("%d",&x);


while(x>0){

  if(x>m1){
  m1=x;
  
    if(x>m2)
    m2=x;
   
       printf("%d is greatest",x);
    else if(x<m2 && x>m1)
            printf("%d is greatest",m1);
        else if(x>m2 && x<m1)
                 printf("%d is second greatest",m2);
   }
   
   else{
   if(x<0)
     printf("Invalid");
   }
   break;
    
   getchar();
   return 0;
   }
 }
