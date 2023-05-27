// QUESTION NO. 1


#include<stdio.h>
#include<math.h>

typedef struct {

    float real;                                     // defining structure
    float imag ;

}Complex  ;

Complex add( Complex a, Complex b){

      Complex temp ;
                                                           // addition
      temp.real = a.real + b.real ;
      temp.imag = a.imag + b.imag ;

      return temp ;

}

Complex subst ( Complex a, Complex b){
                                                            // substracton
      Complex temp ;

      temp.real = a.real - b.real;
      temp.imag = a.imag - b.imag;

      return temp ;

}


Complex mult( Complex a, Complex b){

      Complex temp ;

      temp.real = a.real* b.real - a.imag* b.imag ;
                                                                   // multiplication
      temp.imag = a.real*b.imag + a.imag*b.real ;

      return temp ;

}


Complex div( Complex a, Complex b){

       Complex temp ;

       temp.real = (a.real * b.real + a.imag* b.imag)/ ( b.real*b.real + b.imag*b.imag) ;

       temp.imag = (-1)*( a.real*b.imag - a.imag*b.real)/ ( b.real*b.real + b.imag*b.imag) ;                          // division

       return temp ;


}

Complex mod_( Complex a ){

     Complex temp;
     temp.real = sqrt( a.real*a.real + a.imag*a.imag ) ;
     temp.imag = 0;
                                                                                   // modulus
     return temp ;

}









int main(){                              // main function



    Complex complex1, complex2 , complex3, temp1, temp2, temp3, temp4, temp5, temp6, temp7 , temp8, z;

    printf("enter the first complex number: \n") ;

    printf(" enter the real part: \n") ;

    scanf("%f" , &complex1.real) ;

    printf("enter the imaginary part:\n") ;
    scanf("%f", &complex1.imag) ;


    printf("enter the second complex number: \n") ;

    printf(" enter the real part: \n") ;

    scanf("%f" , &complex2.real) ;

    printf("enter the imaginary part:\n") ;
    scanf("%f", &complex2.imag) ;



    printf("enter the third complex number: \n") ;

    printf(" enter the real part: \n") ;

    scanf("%f" , &complex3.real) ;

    printf("enter the imaginary part:\n") ;
    scanf("%f", &complex3.imag) ;

    printf("first complex number : %f + i*(%f)\n" , complex1.real, complex1.imag) ;
    printf("second complex number : %f + i*(%f)\n" , complex2.real, complex2.imag) ;




    temp1 = add( complex1, complex2) ;

    printf("addition : %f + i*(%f) \n", temp1.real, temp1.imag) ;

    temp2 = subst( complex1, complex2) ;

    printf(" substraction : %f + i*(%f) \n", temp2.real, temp2.imag ) ;

    temp3 = mult( complex1, complex2) ;

    printf("multiplication : %f + i*(%f) \n", temp3.real , temp3.imag ) ;

    temp4 = div(complex1, complex2) ;

    printf("division : %f + i*(%f) \n", temp4.real , temp4.imag) ;

    temp5 = mod_( complex1) ;

    printf("modulus of first  : %f\n" , temp5.real) ;

    temp6 = mod_(complex2) ;

    printf("modulus of second : %f\n", temp6.real) ;

    temp7 = div(temp2 , temp1) ;

    temp8 = mult( temp7, complex3) ;

    z.real = temp8.real + 4.39;
    z.imag = temp8.imag;

    printf("value of z : %f + i*(%f)", z.real, z.imag) ;


    return 0;




}
