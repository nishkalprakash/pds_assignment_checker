/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department : Electrical Engineering
package     : code blocks
Assignment 4
Question : 3
*/

#include <stdio.h>

 typedef struct {        //Used typedef //
     char list[10] ;
     int f ;       // index of front element //
     int r ;       // index of rear element //
}queue;

 queue enque(queue qu,char c) //Enque function requires qu & a character to store//
 {
    static int i=0 ;
    qu.list[i] = c ;
    qu.f = 0;
    qu.r = i; // counting index of last element //
    i++ ;
    return qu;
 }

 queue deque(queue qu) //Deque reuires only qu to perform //
 {
    static int i=0 ;
    int j ;

    for(j=0;j<qu.r;j++) qu.list[j] = qu.list[j+1] ; //deletion of first element //

    i--;
    qu.f = 0 ;
    qu.r = i ;
    return qu;
 }


 int main()
 {
     int n,i,k ;
     queue qu ;
     qu.f = 0 ;
     qu.r = 0 ;
     char c ;

     if(qu.f == qu.r) // situation with empty or 1 element //
    {
     printf(" Enter the option: 1)Enque ; 2)Deque  ");
     scanf("%d",&k);
     if(k==2)
     {
         if(qu.r==0) printf(" The queue is empty!"); //Empty queue//
         else if(qu.r==1)  // Removing one element in queue //
         {
             qu = deque(qu) ;
             printf(" Now the queue is empty ");
         }
     }
     else if(k==1) // performimg enque - inputing element//
     {
         printf(" Enter the element : ");
         scanf("%c",&c);
         qu = enque(qu,c);
         printf("%c",c);
     }
    }
     else
     {
        printf(" Enter the option : 1)Enque 2)Deque 3)Exit :");
        scanf("%d",&k);
        if(k==2)
        {
            qu = deque(qu);
            for(i=0;i<qu.r;i++) printf("%c ",qu.list[i]); //printing//
        }
        else if(k==1)
        {
         printf(" Enter the element : ");
         scanf("%c",&c) ;
         qu = enque(qu,c);
         for(i=0;i<qu.r;i++) printf("%c ",qu.list[i]); //printing//
        }
        if(k==3)
        {
            printf(" Exit!! ");
            return 0 ; //exiting the program //
        }
     }

 }

