#include<stdio.h>
int main()
{
int n;
printf("enter a number:");
scanf("%d",&n );
int a;

while(n!=0){
a=n%10;
if(a==0){printf("zero ");}
else if(a==1){printf("one ");}
else if(a==2){printf("two ");}
else if(a==3){printf("three ");}
else if(a==4){printf("four ");}
else if(a==5){printf("five ");}
else if(a==6){printf("six ");}
else if(a==7){printf("seven ");}
else if(a==8){printf("eight ");}
else{printf("nine ");}


n=n/10;}


return 0;
}
