/*name : vyshnavi_lagudu
dept : EE
roll number:21EE10044
assignment class :3
package : code blocks
*/
#include <stdio.h>
int main()
{
   int a,u,alpha;
   float t;
   double distance;
   scanf("%d%d%d",&a,&u,&alpha);
   printf("intial position of particle (%d,0)\n",a);
   printf("initial velocity=%d\n",u);
   printf("accelration of particle %d\n",alpha);
   scanf("%f",&t);
   printf("time =%f\n",t);
   distance=(a+(u*t)+(alpha*t*t/2));
   printf("distance from origin= %lf\n",distance);
  return 0;
}
