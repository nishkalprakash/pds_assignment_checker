//Name:Bhumika Goyal
//Roll.no. : 23MI10014

#include<stdio.h>
int main ()
{
  int hr,kms,rent;
  //hr represent no. of hours travelled and kms represent no. of kilometers travelled.

  printf("Enter kms and hr:\n");
  scanf("%d %d",&kms,&hr);

  if(kms<=8){
    if(hr<1) printf("rent is 20rs");
    else if (hr>=1&&hr<12)printf("rent is 20+200rs");
    else if (hr>=12&&hr<24)printf("rent is 20+200+300rs");
    else if (hr>=24) printf("rent is  20+200+300+300rs");
  }
  else if(kms<=12){
    if(hr<1)printf("rent is 10rs");
    else if (hr>=1&&hr<12)printf("rent is 10+200rs");
    else if (hr>=12&&hr<24)printf("rent is 10+200+300rs");
    else if (hr>=24) printf("rent is  10+200+300+300rs");
  }
  else if(kms<=16){
    if(hr<1)printf("rent is 8rs");
    else if (hr>=1&&hr<12)printf("rent is 8+200rs");
    else if (hr>=12&&hr<24)printf("rent is 8+200+300rs");
    else if (hr>=24) printf("rent is  8+200+300+300rs");
  }
   else if(kms<=20){
    if(hr<1)printf("rent is 6rs");
    else if (hr>=1&&hr<12)printf("rent is 6+200rs");
    else if (hr>=12&&hr<24)printf("rent is 6+200+300rs");
    else if (hr>=24) printf("rent is  6+200+300+300rs");
  }
  else if(kms>20){
    if(hr<1)printf("rent is 5rs");
    else if (hr>=1&&hr<12)printf("rent is 5+200rs");
    else if (hr>=12&&hr<24)printf("rent is 5+200+300rs");
    else if (hr>=24) printf("rent is  5+200+300+300rs");
  }
  return 0;
}
  
  
  
			     
  
			    
    
    
