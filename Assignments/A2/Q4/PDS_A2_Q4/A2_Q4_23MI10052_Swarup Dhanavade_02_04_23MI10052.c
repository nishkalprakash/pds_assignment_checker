/* Roll No=23MI10052
   Name : Swarup Dhanavade*/
#include<stdio.h>
int main ()
{ int m ,n;
  float x,y,z;
 
  
  printf("Enter two number keeping space between them:");
  scanf("%d %d",&m,&n);
  x=((float)m)/n;
  y=(m+n)/2.0;
  z=(m*m + n*n)/2.0;
  
  printf("Sum=%d\n Difference=%d\n Product= %d\n interger quotient=%d\n remainder=%d\n Sum of square=%d\n Square of sum=%d\n ",m+n,m-n,m*n,m/n,m%n,m*m+n*n,(m+n)*(m+n));
  printf("Flpating point quotient=%f\n averege=%f\n average of square=%f",x,y,z);
  return 0;
  
}
