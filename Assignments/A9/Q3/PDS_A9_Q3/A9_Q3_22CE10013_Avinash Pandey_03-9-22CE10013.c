// 22ce10013

// q3

#include<stdio.h>
#include<stdlib.h>

        struct User{

               char userID[100] ;

               char password[100] ;

        };



int check_password(struct User *my_user, int i){

         int j = 0, k =0, l = 0, m = 0,  n =0;

         while ( my_user[i].password[j] != '\0'){

            if ( 'a' <= my_user[i].password[j] <= 'z'  ) k++ ;

            if( 'A' <= my_user[i].password[j] <= 'Z' )   l++ ;

            if( '0' <= my_user[i].password[j] <= '9' ) m++ ;

            if (  my_user[i].password[j] == '$' ||  my_user[i].password[j] == '%' ||  my_user[i].password[j] == '#' ||  my_user[i].password[j] == '@' ||  my_user[i].password[j]== '~' ||  my_user[i].password[j] == '*' ||  my_user[i].password[j] == '&' ||  my_user[i].password[j] == '!' ) n++ ;

            j++ ;

         }


         if ( k != 0 || l != 0 || m != 0 || n != 0 || (j > 12)) {

                printf("password is invalid.") ;
                return 0 ;

                }

         return 1;


}


int enrolment( struct User my_user , int i){



     int x = i - 1, y = 0;

     printf("enter the user ID:\n" ) ;

     scanf("%s", &my_user[i].userID) ;

     for ( x = i - 1 ; i >= 0 ; i++){

        if ( my_user[x].userID == my_user[i].userID ) {

                printf(" this user ID already exists.") ;
                y = 1 ;



     }

     if ( y == 1 ) return 1;



     printf("enter the password:\n" ) ;

     scanf("%s", &my_user[i].password ) ;








}

int main(){






        int n, i, j;

        printf("enter the maximum number of users:\n") ;

        scanf("%d", &n ) ;


        struct User *my_user ;

        my_user = ( struct User *) malloc( n*sizeof( struct User) ) ;

        printf("select one option: \n") ;

        printf("1. enroll\n")  ;
        printf("2. sign in\n")  ;
        printf("3. exit\n") ;

        scanf("%d", &j) ;

        if ( j == 1) enrolment ;








}
