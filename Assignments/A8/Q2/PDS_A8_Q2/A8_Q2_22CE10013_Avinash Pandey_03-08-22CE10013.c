
//QUESTION 3

#include<stdio.h>
#include<stdlib.h>

typedef struct {

       char roll_no[10] ;           //define structure
       float marks[3] ;
       float total ;

} student ;


student bubble_sort( student *p , int size){

           int i = 0, j = 0 ;
           student temp ;

           for ( i = 0; i< size ; i++){

                 for ( j = 0; j < size - i - 1 ; j++){
                                                                        // using bubble sort to sort array
                    if ( p[j].total  > p[j + 1].total ){


                        temp = p[j] ;
                        p[j ] = p[j + 1] ;
                        p[j+1] = temp ;
                    }
                 }

           }

           return *p ;

}



int main(){


     int n , i = 0 , j = 0;

     printf("enter the number of students :\n") ;
     scanf("%d", &n) ;

     student *p = (student *) malloc( n* sizeof(student)) ;                 // allocate array of size n of type of structure of student

     printf("enter the data for students:") ;

     for ( i = 0; i < n ; i++){


        printf(" enter the roll no of student %d \n", i+1) ;          // ask for roll no

        j = 0;
        scanf("%s", &p[i].roll_no) ;


        printf(" for student %d enter the marks of subject 1" , i+1) ;
        scanf("%f", &p[i].marks[0]) ;

        printf(" for student %d enter the marks of subject 2" , i+1) ;       // ask for subject wise marks
        scanf("%f", &p[i].marks[1]) ;


        printf(" for student %d enter the marks of subject 3" , i+1) ;
        scanf("%f", &p[i].marks[2]) ;


     }


        for ( i = 0; i< n; i++){

            p[i].total = p[i].marks[0] + p[i].marks[1] +p[i].marks[2] ;          // store total marks
        }


        *p = bubble_sort( p , n) ;                             // sort the array

        printf("sorted student records: \n") ;


        for ( i = n-1; i >= 0 ; i--){

                printf("roll no : %s", p[i].roll_no) ;

                                                                                               // print the sorted records

           printf(" total marks: %f \n ", p[i].total ) ;

           printf("marks: %f   ,  %f ,   %f  \n" , p[i].marks[0], p[i].marks[1], p[i].marks[2] ) ;





        }



return 0;


     }




