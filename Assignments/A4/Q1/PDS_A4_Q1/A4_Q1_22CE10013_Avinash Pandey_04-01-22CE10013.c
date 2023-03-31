// section 2
// roll number : 22CE10013
// name : Avinash Pandey
// assignment no. : 4

// question no. 1

#include<stdio.h>

int main(){

    char c ;                                                                  // defining  a character

    int i = 1, n = 1, m = 1 ;
                                                                              // these are some necessary parameters for successful execution of the program
    int p = 0  , q = 0, r = 0, s = 0 , t = 0;

    printf("Enter a password :  "  ) ;                                       // asking user for password


    while (c != '\n') {                                              // using for loop

            scanf("%c" , &c ) ;                                              // taking input password



        if ( (i ==1) && (('A' > c ) || ('Z' < c ) ) ) {                                       // checking for uppercase letter

            printf("Invalid Password. \n The first letter should be an uppercase letter" ) ;
            p = 3 ;
            break ;

        }

         if ( (c < '0' ) || (c > '9')) {

            n++ ;                                                                           // checking for digit
        }

         if ( c == ' ')  {

             printf("Invalid passward. \n No space character is allowed") ;
             q = 3 ;
             break;                                                                                     //  checking for space
        }

        if ( (c != '$') || ( c != '#' ) || (c != '&') || (c != '@)') || (c != '%') ) {

                m++ ;                                                                                      // checking for special characters

        }
        i ++ ;                                                                                   // incrementing i


    }



    if ( (n == i) && (p != 3) && (q != 3) ) {

            printf("Invalid code. \n There should be atleast one digit") ;
            r = 3;
    }

    else if ( (m == i) && (p != 3) && (q != 3) ) {

            printf("Invalid code. \n There should be atleast one of @ , #, $ , %, & special characters") ;
            s = 3;
    }

    else if ( (i < 8) || (i > 13)) {

            printf("Invalid code . \n Password must be between 8 and 12 characters long") ;
            t = 3;
    }
    else if ( (p != 3) && (q != 3) && ( r != 3) && (s != 3) && ( t != 3) ) printf(" Password is correct.") ;


    return 0 ;

}


