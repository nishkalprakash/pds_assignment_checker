
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{

    int *a ,  n  , j = 0 , sum =0 , flag = 0 ;
    int r , i ;

    scanf("%d",&n) ;

    a = (int*) malloc(n*sizeof(int)) ;


    time_t t ;

    srand(time(0)) ;




    // initializing the array with n random numbers //

    for(i =0 ; i< n ; i++)
    {
         r = 2+ rand()%1000 ;
          a[i] = r ;
          printf("%d ,",a[i]) ;
    }

     // checking perfect numbers //


     for( j = 0 ; j< n ; j++)
     {    sum = 0 ;
         for( i =1 ; i< a[j] ; i++)
         {
             if( a[j] % i == 0)
             {
                 sum = sum + i ;
             }
         }

         if(sum == a[j]) { flag = 1 ; printf("%d is a random number",a[j]) ; break ; }

     }

     if(flag == 0) printf("No perfect number found") ;


    return 0 ;
}
