#include<stdio.h>
#define N 100
int main()
{
   int a[100] , i , n , j ,index;
      printf("Please enter the limit(<N) :") ;
        scanf("%d",&n) ;
          for(i=0 ; i<n ; i++)
          {
              scanf("%d",&a[i]) ;
          }
j=0 ;
 for(i=0;i<n ;i+=1)
 {
     if(a[i]<0)
     {
         a[j]=a[i] ;
     index = i ;
     index++ ; j++ ;
     }

     else
     {
         a[i] = 0 ;
     }
 }


    for(i=0 ; i<n ;i++)
    {
        printf("%d ,",a[i]) ;
    }

    return 0 ;
}
