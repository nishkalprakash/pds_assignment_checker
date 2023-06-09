/*
Name Hrishikesh Tiwari
22CH30013
SEC 2
QUES 2
*/
#include<stdio.h>
#include<stdlib.h>

struct dob
{
    int date ;
    int month ;
    int year ;
};

struct record
{
    char rollNO[10] ;
    char branch[2] ;
    struct dob  avatar ;
};

int main()
{
    struct record * Rec ;
    int n  , i , y  , m =0 , k =0 ; // Counters m and k to check number of records remaining //
    char c ;

    scanf("%d" , &n) ;

    if(n>100) {
    printf("INvalid value of n \n") ;
    exit(0) ;
    }

    Rec = (struct record *)malloc(n * sizeof( struct record)) ;

    for( i =0 ; i<n ; i++)
    {
        scanf("%s" , (Rec[i].rollNO)) ;
        scanf("%s" , (Rec[i].branch)) ;
        scanf("%d" , &(Rec[i].avatar.date)) ;
         c= getchar() ;
        scanf("%d" , &(Rec[i].avatar.month)) ;
        c= getchar() ;
        scanf("%d" , &(Rec[i].avatar.year)) ;

    }
   // NOw I will INput the year as asked in the question //
     scanf("%d" , &y) ;

        // Printing and deleting records //
         for( i=0 ; i<n ; i++)
         {
              if( Rec[i].avatar.year <= y )
              {
                   m++ ;
                  printf("Deleted REcord : ") ;

                   printf("%s" , (Rec[i].rollNO)) ; printf(" ") ;

                        printf("%s " , (Rec[i].branch)) ; printf(" ") ;

                          printf("%d//" , (Rec[i].avatar.date)) ;

                        printf("%d//" , (Rec[i].avatar.month)) ;

                   printf("%d" , (Rec[i].avatar.year)) ;
               }
               printf("\n") ;
         }
         if(m == 0)
         {
             printf("NO records Deleted\n") ;
         }

         printf( "\n m =  %d , n-m = %d \n" , m , n-m ) ;
         printf("Remaining Records :\n") ;

          for( i=0 ; i<n ; i++)
          {
              if( Rec[i].avatar.year > y )
              {
                  k++ ;

                  printf("%s" , (Rec[i].rollNO)) ; printf(" ") ;

                        printf("%s " , (Rec[i].branch)) ; printf(" ") ;

                          printf("%d//" , (Rec[i].avatar.date)) ;

                        printf("%d//" , (Rec[i].avatar.month)) ;

                   printf("%d" , (Rec[i].avatar.year)) ;
               }
               printf("\n") ;
          }

          if(k ==0 ) printf("No REcords remaining\n") ;

// REmoving the records from the memory which are not required //

        for( i=0 ; i<n ; i++)
         {
              if( Rec[i].avatar.year == y )
              {
                  free(Rec) ;
              }
         }

         Rec = (struct record *) realloc( Rec , (n-m)*sizeof(struct record) ) ;

    return 0 ;
}
