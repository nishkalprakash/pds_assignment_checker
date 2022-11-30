/*
section 14
roll no. 22ME10026
assignment4
*/


#include<stdio.h>
int main(){

int a,b, num;
printf("enter the number");
scanf("%d",&num);
for (a=1;a<=num;a++){
for(b=1;b<=a;b++){
if( b%2==0)

printf("0");

 else
printf("1");

}
printf("\n");


}

return 0;
}

