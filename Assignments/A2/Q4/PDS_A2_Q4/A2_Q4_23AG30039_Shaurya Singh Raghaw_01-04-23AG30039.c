//name: Shaurya Singh Raghaw
//roll no.: 23AG30039

#include<stdio.h>
#include<math.h>
int main()
{
  int m,n,a,b,c,d,e,g,h;
  float f,i,j; 
  printf("enter the two numbers:");
    scanf("%d%d",&m,&n);

    a = m+n;
    b = m-n;
    c = m*n;
    d = m/n;
    e = m%n;
    f = m/n;
    g = (m)*m + (n)*n;
    h = (m+n)*(m+n);
    i =(m+n)/2;
    j= (m^2 + n^2)/2;
    
    



    printf("the sum =%d",a);
    printf("the difference= %d",b );
    printf("the product= %d",c );
    printf("the integer quotient= %d",d );
    printf("the integer remainder= %d",e );
    printf("the floating point quotient= %f",f );
    printf("the sum of squares= %d",g );
    printf("square of the sum= %d",h );
    printf(" average of the two numbers=%f",i);
    printf("average of sum of squares=%f", j);
    
    return 0;
}
    
