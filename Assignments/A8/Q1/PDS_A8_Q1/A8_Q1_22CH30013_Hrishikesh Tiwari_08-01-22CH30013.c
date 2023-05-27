#include<stdio.h>
#include<math.h>

typedef struct complex{
float real ;
float imag ;
} complex ;

complex add(complex p1 , complex p2)
{ complex p3 ;
   p3.real =  p1.real+p2.real  ;
   p3.imag =  p1.imag + p2.imag ;
   return p3 ;
}

complex sub(complex p1 , complex p2)
{  complex p3 ;
  p3.real =  p1.real-p2.real ;
  p3.imag =  p1.imag - p2.imag ;
  return p3 ;
}

complex mul(complex p1 , complex p2 )
{
    complex p3 ;
    p3.real = ((p1.real) *(p2.real) - (p1.imag)*(p2.imag)) ;
    p3.imag = ((p1.real)*(p2.imag) + (p2.real)*(p1.imag)) ;
    return p3 ;
}

complex div_c( complex p1 , complex p2)
{
    complex p3 ;
    p3.real = ((p1.real) *(p2.real) + (p1.imag)*(p2.imag)) ;
    p3.real = p3.real / (pow(p2.real , 2) + pow(p2.imag , 2)) ;
    p3.imag = ((p1.real)*(p2.imag) - (p2.real)*(p1.imag)) ;
    p3.imag = (-1*p3.imag) / (pow(p2.real , 2) + pow(p2.imag , 2)) ;
    return p3 ;
}

float modu_c(complex p)
{
    return sqrt(pow(p.real , 2) +  pow(p.imag , 2)) ;
}

int main()
{
    complex z1 , z2 , z3 , o1 , o2 , o3 , o4 ;
    float  o5 , o6 ;
    complex z , z1_n , z2_n , new_z;

    printf("Enter the first complex number :\n") ;
        printf("Enter the real part : ") ;
           scanf("%f" , &z1.real) ;
         printf("Enter the imaginary part :") ;
    scanf("%f", &z1.imag) ;

     printf("Enter the second complex number :\n") ;
        printf("Enter the real part : ") ;
           scanf("%f" , &z2.real) ;
         printf("Enter the imaginary part :") ;
    scanf("%f", &z2.imag) ;

     printf("Enter the third complex number :\n") ;
        printf("Enter the real part : ") ;
           scanf("%f" , &z3.real) ;
         printf("Enter the imaginary part :") ;
    scanf("%f", &z3.imag) ;


printf("complex number = %f + i %f \n" , z1.real ,z1.imag) ;
printf("complex number = %f + i %f \n" , z2.real ,z2.imag) ;

o1 =  add(z1 , z2) ;
   printf("Addition = %f + i %f \n" , o1.real , o1.imag ) ;

    o2 = sub(z1 , z2) ;
      printf("Substraction = %f + i%f \n" , o2.real , o2.imag) ;

     o3 =  mul(z1 , z2) ;
   printf("Multiplication = %f + i%f\n" , o3.real , o3.imag) ;

    o4 = div_c(z1 , z2) ;
      printf(" Division = %f + i%f\n" , o4.real , o4.imag) ;

      o5 = modu_c(z1) ;
      printf("Modulus of complex number 1 = %f\n" , o5) ;

     o6 = modu_c(z2) ;
    printf("Modulus of complex number 2 = %f  \n" , o6) ;

    z1_n.real = z3.real *(z1.real - z2.real) - z3.imag*(z1.imag - z2.imag) ;
    z1_n.imag = z3.real *(z1.imag - z2.imag) + z3.imag *(z1.real -z2.real) ;
    z2_n.real = z1.real + z2.real ;
    z2_n.imag = z1.imag + z2.imag ;

    z = div_c(z1_n , z2_n) ;
    printf("The value of z = %f + i %f\n" , z.real+4.39 , z.imag) ;

    new_z.real = z.real+4.39 ;
    new_z.imag = z.imag ;

    printf("The modulus of Z = %f" , modu_c(new_z)) ;

    return 0 ;
}
