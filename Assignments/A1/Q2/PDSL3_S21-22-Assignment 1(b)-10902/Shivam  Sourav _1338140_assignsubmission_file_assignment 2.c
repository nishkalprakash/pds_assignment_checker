/* name : shivam sourav
dept :CSE
roll no. 21CS10059
package :online ide beta
os windows 10 */

#include <stdio.h>
void main()
{
int n,a,b,c,nf;
printf("enter a three digit number");
scanf("%d",&n);
a=n%10;
b=(n/10)%10;
c=(n/100)%10;
nf=100*a+10*b+1*c;
printf("the reversed number is %d",nf);
}