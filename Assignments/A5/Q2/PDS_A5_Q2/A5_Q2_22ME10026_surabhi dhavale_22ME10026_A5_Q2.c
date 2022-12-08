/*
Section14
assignment5
22ME100026
*/

void coprime (int a,int b);
#include<stdio.h>
int main()
{
int a,b;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);

coprime ( a,b);


return 0;


}

void coprime (int a,int b){
int n;
int y=n; 

for(int i=2;i<n;i++){
if(( a%i==0)&&(b%i==0))

printf("not a prime");

else
 
printf("it is coprime");
}
  }

