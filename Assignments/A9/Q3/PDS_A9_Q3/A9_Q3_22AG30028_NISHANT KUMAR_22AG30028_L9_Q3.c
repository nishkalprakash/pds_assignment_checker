
/* sec:- 14
   roll:- 22AG30028
   name:- NISHANT KUMAR
   assignment:-9
   description:- question numbet 3

*/

#include <stdio.h>
#include <stdlib.h>


 typedef struct complex {
                        
                float real;
                float imag;
           } complex;
 
complex product (complex a1,complex a2)
     
   { complex a3;
    
    a3.real=a1.real-a2.real ;
    a3.imag=a1.imag-a2.imag ;
    a3=a3.real * a3.imag ;
   return(a3);

   }  

int main() {

 complex a1,a2;
 
 printf("   a1 ");
 scanf("%f%f",&a1.real,&a1.imag);

 printf("   a2 ");
 scanf("%f%f",&a2.real,&a2.imag);

complex a3;

 a3 = product (a1,a2);



 printf("%f",a3);









return 0;
}


