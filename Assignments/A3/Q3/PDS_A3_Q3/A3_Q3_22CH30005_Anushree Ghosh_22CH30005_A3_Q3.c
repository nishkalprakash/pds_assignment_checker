#include<stdio.h>
  
  int main(){
   float a,b;
   char c;
   printf("enter any char");
   scanf("%c",&c);
   printf("enter a and b");
   scanf("%f %f",&a,&b);

   if(c=='+'){
   printf("%f",a+b);
   }else if(c=='-'){
   printf("%f",a-b);
   }else if(c=='*'){
   printf("%f",a*b);
  }else if(c=='/'){
   printf("%f",a/b);
}
  
   return 0;
}
