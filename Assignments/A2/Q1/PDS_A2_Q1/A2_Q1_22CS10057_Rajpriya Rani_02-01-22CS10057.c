#include <stdio.h>
 void main()
 {
     int s1,s3,n,d1,d2,d3,n1,n2;
     long s2;
     printf("Enter a number: ");
     scanf("%d",&n);
     printf("\n The entered value is: %d",n);       //a
     s1=n*(n+1)/2;      //b
     s2=n*(n+1)*(2*n+1)/6;       //c
     d1=n%10;       //d
     n1=n/10;
     d2=n1%10;
     n2=n1/10;
     d3=n2%10;
     s3=d1+d2+d3;
     printf("\n The value of s1=%d",s1);        //e
     printf("\n The value of s2=%d",s2);
     printf("\n The value of s3=%d",s3);


 }
