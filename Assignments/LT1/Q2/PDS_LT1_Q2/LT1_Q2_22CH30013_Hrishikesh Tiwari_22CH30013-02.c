#include<stdio.h>
#include<math.h>
int main()
{
    int n , s=0 , i ,d ,minus ,a ,count=0  ,b , j;

printf("Enter the integers: ");
scanf("%d",&n) ;
//REversing the digits and taking difference//
a=n ; b=n ;
if(n<0) n =-1*n ;
while(n>0)
{
    d = n%10 ;
    s= (s*10)+d ;
    n = n/10 ;
}

 if(b<0) s= -1*s ;

printf("Reverse integer : %d\n",s) ;
minus = a-s ;
if(minus<0){ minus = -1* minus ;
 printf("Absolute difference = %d",minus) ;
}
 else   { printf("Absolute difference =%d\n",minus) ; }

    //Printing the digits in the order given in the question//
    if(a<0) a = -1* a ; //again taking their absolute value as required for next part of code//
    if(b<0) b = -1* b ;

    if(a%2==0)
    {
        while(a>0)
        {
            a = a/10 ;
            count++ ;
        }
        printf("The length of the number is : %d\n",count) ;

        j=b ;

   printf("The required sequence for even numbers is : ") ;
   for(i=1 ; i<=count ; i++)
   {
       b = j/pow(10 , count-i) ;
       printf("%d , ",b) ;
   }
    }


   printf("The required sequence for odd numbers is : ") ;
 else if(a%2 != 0)
 {
for(i=1 ;i<=count ;i++) {
b = b%pow(10 , i) ;
printf("%d ,",b) ;
 }
 }
    return 0 ;
}

















