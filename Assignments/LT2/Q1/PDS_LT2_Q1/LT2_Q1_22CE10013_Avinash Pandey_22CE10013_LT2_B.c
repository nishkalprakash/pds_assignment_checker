
#include<stdio.h>
#include<stdlib.h>

struct Dob{

      int date;
      int month ;
      int year ;
};

struct Person{

      char name[30] ;
      char passport_no[11] ;
      char nationality[16] ;

      struct Dob dob ;

};

void read( struct Person *Persons){

      printf("name:\n") ;
      scanf("%s", &Persons->name) ;

      printf("passport no. : \n") ;
      scanf("%s", &Persons->passport_no) ;

      printf("nationality :\n") ;
      scanf("%s", &Persons->nationality) ;

      printf("dob (date) :\n") ;
      scanf("%d", &Persons-> dob.date) ;
      printf("dob (month) :\n") ;
      scanf("%d", &Persons-> dob.month ) ;
      printf("dob (year) :\n") ;
      scanf("%d" , &Persons->dob.year ) ;

}



void print( struct Person *Persons ){

      printf("%s \n", Persons->name ) ;
      printf("%s \n", Persons->passport_no) ;
      printf("%s \n" , Persons->nationality ) ;
      printf("%d-", Persons->dob.date ) ;
      printf("%d-", Persons->dob.month );
      printf("%d\n", Persons->dob.year );

}

int main(){

    int n , m , i , j;

    printf("enter the number of persons:\n") ;

    scanf("%d", &n ) ;

    struct Person *Persons , *Persons2 ;

    Persons = (struct Person *) malloc(n* sizeof(struct Person) ) ;

    for ( i = 0; i < n ; i++){

           printf("enter the record of person %d" , i) ;

           read( &Persons[i] ) ;

    }


    for ( i = 0; i < n; i++){

         printf("person %d" , i ) ;

         print( &Persons[i] ) ;


    }

    printf("enter the value of m:\n") ;

    scanf("%d", &m ) ;

    Persons2 = (struct Person *) malloc( m* sizeof( struct Person )) ;

    for ( i = 0; i < n ; i++){

           printf("enter the record of person %d" , i) ;

           read( &Persons2[i] ) ;

    }


    for ( i = 0; i < n; i++){

         printf("person %d" , i ) ;

         print( &Persons2[i] ) ;


    }

    struct Person *Persons_merged ;

    Persons_merged = ( struct Person *) malloc( (m + n) * sizeof( struct Person ) ) ;

    for ( i = 0; i < n ; i++){

        Persons_merged[i] = Persons[i];

    }

    for ( i = i + 1, j = 0 ; i < ( m + n) ; i++ , j++ ){

        Persons_merged[i] = Persons2[j] ;

    }


    for ( i = 0; i < (m + n) ; i++){

        if( Persons_merged[i]-> nationality == "India"){

            print( Persons_merged[i] ) ;
        }

    }


}
