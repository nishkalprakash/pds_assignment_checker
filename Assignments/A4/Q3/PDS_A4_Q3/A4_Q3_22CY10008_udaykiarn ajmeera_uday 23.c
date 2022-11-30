#include<stdio.h>

int main()
{
  long int a,b;
  printf("enter any number");
  scanf("%ld",&a);

  if(a==0){
  printf("zero");
  }

 while(a!=0){
 b=a%10;
 a=a/10;


 if(b==1)
 {printf("one");}
 if(b==2)
 {printf("two");}
 if(b==3)
 {printf("three");}
 if(b==4)
 {printf("four");}
 if(b==5)
 {printf("five");}
 if(b==6)
 {printf("six");}
 if(b==7)
 {printf("seven");}
 if(b==8)
 {printf("eight");}
 if(b==9)
 {printf("nine");}   
}
 return 0;
}
