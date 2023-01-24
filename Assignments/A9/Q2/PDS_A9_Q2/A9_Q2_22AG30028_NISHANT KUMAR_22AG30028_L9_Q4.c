/* sec:- 14
   roll:- 22AG30028
   name:- NISHANT KUMAR
   assignment:-9
   description:- q4

*/

#include <stdio.h>
#include <stdlib.h>


 typedef struct complex {
                        
                float real;
                float imag;
           } complex;
 
complex add (complex a1,complex a2)
     
   { complex a3;
    
    a3.real=a1.real+a2.real ;
    a3.imag=a1.imag+a2.imag ;
    
   return(a3);

   }  

int main() {

 complex a1,a2;
 
 printf("   a1 ");
 scanf("%f%f",&a1.real,&a1.imag);

 printf("   a2 ");
 scanf("%f%f",&a2.real,&a2.imag);

complex a3;

 a3 = add (a1,a2);



 printf("%f+%f",a3.real,a3.imag);





return 0;
}
