#include <stdio.h>
/* 
  NAME - KRISHNA GUPTA
  SECTION -14
  ASSGNMENT -9
  DESCRIPTION - ADDTION OF COMPLEX NUMBERS*/

  typedef struct complex
    {
      float real;
      float imag; 
    }complex;
     
    //INPUT FOR Z1 
struct complex r()
  {
      struct complex z1;
      printf("Enter z1 :");
      scanf("%f %f",&z1.real,&z1.imag);
      return z1;
  }

   //INPUT FOR Z2
  struct complex rn()
   {
     struct complex z2;
     printf("Enter z2 :");
     scanf("%f %f",&z2.real,&z2.imag);
     return z2;
   } 

   //ADDING Z1 AND Z2
   void complex_add(complex a, complex b)
       {
          float sumr=0,sumi=0;
          sumr =a.real+b.real;
          sumi =a.imag+b.imag;
          printf("%f+%fi",sumr,sumi);
       }
 
 // MAIN FUNCTION
   int main()
    {
        struct complex z1,z2;
        z1=r();
        z2=rn();
        complex_add(z1, z2);
        return 0;
    }
