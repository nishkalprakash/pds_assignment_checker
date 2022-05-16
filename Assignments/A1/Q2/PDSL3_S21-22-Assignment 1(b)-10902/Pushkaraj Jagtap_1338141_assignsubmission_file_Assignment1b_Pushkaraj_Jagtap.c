/*  Name        = Pushkaraj Jagtap
    Roll no.    = 21MF3IM12
    Package     = Codeblock
    Assign class= 5
    Assign no.  = 1(a)
*/

#include<stdio.h>
int main()
{
  int n,ones,tens,hundredth,Reverse;
     printf("Any three digit number:");
     scanf("%d",&n);

     ones=n%10;
     tens=((n%100)-ones)/10;
     hundredth=((n%1000)-ones-tens)/100;

     Reverse=(100*ones)+(10*tens)+hundredth;
     printf("Reverse of given number is:%d",Reverse);
}
