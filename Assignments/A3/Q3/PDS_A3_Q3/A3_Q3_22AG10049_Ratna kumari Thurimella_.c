#include <stdio.h>
 #include<math.h>
 int main()
 {
     double k,l,m,n,o,p,q,r,s;
     printf("enter coordinate points of x-axis:\n");
     scanf("%lf%lf%lf",&k,&l,&m);
     printf("enter coordinate points of y-axis:\n");
     scanf("%lf%lf%lf",&n,&o,&p);
     printf("enter coordinate points of z-axis:\n");
     scanf("%lf%lf%lf",&q,&r,&s);

     printf("coordinate points of A:%lf%lf%lf\n",&k,&n,&q);
     printf("coordinate points of B:%lf%lf%lf\n",&l,&o,&r);
     printf("coordinate points of c:%lf%lf%lf\n",&m,&p,&s);

     return 0;

 }