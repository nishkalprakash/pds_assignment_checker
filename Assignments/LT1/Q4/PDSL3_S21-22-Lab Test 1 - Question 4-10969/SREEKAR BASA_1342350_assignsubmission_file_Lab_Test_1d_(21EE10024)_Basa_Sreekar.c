
/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department  : Electrical Engineering
package     : code blocks
Lab Test_1
Question    : 4
*/
 #include <stdio.h>
 #include <math.h>
 int main()
 {
     float x[100],y[100],X,Y,m,b,m1,m2;
     int i,n;
     printf(" Enter the  no.of integers : ");
     scanf("%d",&n);

     for(i=0,X=0,Y=0;i<n;i++)
     {
        printf(" Enter X-coordinate : ");
        scanf("%f",&x[i]);
        printf(" Enter Y-coordinate : ");
        scanf("%f",&y[i]);
        X = X + x[i] ;
        Y = Y + y[i] ;
     }

     X = (X*1.0)/n ;
     Y = (Y*1.0)/n ;

     for(i=0;i<n;i++)
     {
       m1 = m1 + ((x[i]-X)*(y[i]-Y));
       m2 = m2 + pow((x[i]-X),2) ;
     }

     m = (m1*1.0)/m2;
     b = Y - (m*X) ;
     printf(" The equation of best fits line is y = %.3fx+%.3f",m,b);
     return 0;
 }
