
/*    Section : 2
      Roll no. :  22CE10013

      Name : Avinash Pandey

      Assignment no. : 4

      Question no. : 3

      Description : printing a "Numero-pyramid"  */



 #include<stdio.h>

 int main(){

     int Rows, row, i, j, k , l , m ;                                   // declaration of variables

     printf("Enter the number of rows : ") ;

     scanf("%d", &Rows) ;                                              // user gives input


     for ( row = 1; row <= Rows; row++ ){                              // using for loop and applying condition on variation of row

          for ( j = 1; j <= (Rows - row); j++ ){

             printf(" ") ;                                             // this part of program prints spaces required before printing any digit
          }

          for ( i = 1, k = row; i <= row; i++){                          // this part of program prints digits number of times equal to Rows in increasing order

             printf("%d" , (k%10) ) ;
             k++ ;

          }

          for ( l  = 1, m = 2*(row - 1) ; l <= row - 1 ; l++){           // this part prints numbers in decreasing order

            printf("%d" , (m%10) ) ;
            m-- ;
          }


          printf("\n") ;
                                                          // new line character
          }

     return 0 ;
 }

