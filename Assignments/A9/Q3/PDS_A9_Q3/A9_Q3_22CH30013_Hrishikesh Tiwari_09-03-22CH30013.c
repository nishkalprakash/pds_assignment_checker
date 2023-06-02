#include<stdio.h>
struct login
{
    char  UserID[100];
    char  password[100] ;
};

void enrollment ( int num)
{
    struct login  A [num] ;
    int i ;
    for( i= 1 ; i<=num ; i++) {
    printf("Enter user id :")  ;
    scanf("%s" , A[i].UserID ) ;
    printf("Enter password :") ;
    scanf("%s" , A[i].password) ;
       for( int j =0 ; A[i].password[i] != '\0' ; j++)
       {


       }

    }



}


int main()
{
    int  m , x ;

    printf("Enter Max number of users =  ") ;
    scanf("%d" , &m ) ;
     printf(" Choose one of the options:\n") ;
      printf( " 1 - Enroll\n") ;
      printf("2- SignIn\n") ;
      printf(" 3 - Exit \n") ;

      scanf("%d" , &x) ;

      switch(x)
      {
          case 1 : enrollment(m) ;
          case 2 : signin(m) ;
          case 3 : Exit() ; break ;
          default : Error ; break ;

      }

    return 0 ;
}
