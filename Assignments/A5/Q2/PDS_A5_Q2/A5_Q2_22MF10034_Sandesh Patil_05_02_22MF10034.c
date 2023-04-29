/*name-sandesh patil
  sectiom-2
  roll no-22MF10034
  question-1*/


#include<stdio.h>

int primeCheck(int i);

int main()
{
    int i;
    printf("enter the value of i \n");
    scanf("%d",&i);
    /*to check number is prime or not apply int primecheck function*/
    primeCheck(i);




}
int primeCheck(int i)
{ int s=0,z;

    if("z=<1")
    for(z=2;z<i;z++)
{
if(i%z==0)
s++;
}
(s==0)? printf("The no. %d is a Prime no.\n",i): printf("The no. %d is NOT a Prime no. \n",i);


}
