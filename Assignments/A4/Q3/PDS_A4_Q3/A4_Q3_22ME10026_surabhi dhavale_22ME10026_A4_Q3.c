/*section 14
roll no.22ME10026
assignment 4
*/


#include<stdio.h>

int main()
{

int n;
printf("enter the number");
scanf("%d",&n);
while(n!=0){

int s;

s=n%10;
n=n/10;

if (s==0){printf("zero");}
else if (s==1){printf("one");}
else if (s==2){printf("two");}
else if (s==3){printf("three");}
else if (s==4){printf("four");}
else if (s==5){printf("five");}
else if (s==6){printf("six");}
else if (s==7){printf("seven");}
else if (s==8){printf("eight");}
else if (s==9){printf("nine");}



}
return 0;
}















