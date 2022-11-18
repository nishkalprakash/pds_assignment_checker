/* NAME- SATYAJIT BEHERA
   ROLL NO-21AG10034
   DEPT- AGRICULTURE AND FOOD ENGINEERING
   SECTION-03
   SOFTWARE- CODEBLOCK*/

#include<stdio.h>
#include<math.h>
int main()
{
    float u,alpha,a,t,d1,d;/* HERE THE REPRESENTATION AS FOLLOWS;-
                              u ;initial velocity
                              alpha; acceleration
                              a; initial position(in coordinate system it is (a,0))
                              t; total time taken
                              d1; the distance travelled by particle in time t
                              d;  distance from the origin (0,0) after t seconds
                              */
    printf("ENTER THE VALUE OF a-");
    scanf("%f",&a);
    printf("ENTER THE VALUE OF INITIAL VELOCITY (u)-");
    scanf("%f",&u);
    printf("ENTER THE VALUE OF  ACCELERATION (alpha)-");
    scanf("%f",&alpha);
    printf("ENTER TIME TAKEN (t)-");
    scanf("%f",&t);
    d1=((u)*(t))+((0.5)*(alpha)*(t)*(t));/* formula used ;
                                            s=u*t +(1/2)*alpha*t*t  */

    d=d1+a;                        /* d is the distance from origin */
    printf("The total distance travelled is %f\n",d);
    return 0;


}
