#include <stdio.h> 
int main () 
   { 
    int deposite , withdrawal , balance = 0 ;
    printf ("Enter deposite amount: ") ;
    scanf ("%d" , &deposite ) ;
    printf ("Enter Withdrawal amount: ") ;
    scanf ("%d" , &withdrawal) ;
    if ( withdrawal <= deposite ) { 
    balance = deposite - withdrawal ;
    printf ("Balance = %d \n" , balance ) ;
    }
    else  
    printf ("Withdrew failed : Balance is low \n") ;
    return 0 ;
}
