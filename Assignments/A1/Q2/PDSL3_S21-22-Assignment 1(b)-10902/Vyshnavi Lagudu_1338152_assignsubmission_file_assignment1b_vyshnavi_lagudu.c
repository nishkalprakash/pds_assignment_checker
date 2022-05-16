/*name : vyshnavi_lagudu
dept : EE
roll number:21EE10044
assignment class :3
package : code blocks
*/
#include <stdio.h>
int main()
{
   int N,x,y,z,reverse_number;
   printf("enter the 3 digit number");
   scanf("%d",&N);
   x=N/100;
   y=(N%100)/10;
   z=N%10;
   reverse_number= z*100+y*10+x;
   printf("reverse number is %d\n",reverse_number);
  return 0;
}
