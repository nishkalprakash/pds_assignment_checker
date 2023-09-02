//Roll no -23NA30009
//Athika
#include <stdio.h>

int main(){
  int a,b,c,d,e,f;
  printf("Enter coefficient of x^0:\n");
  scanf("%d",&f);

  printf("Enter coefficient of x^1:\n");
  scanf("%d",&e);

  printf ("Enter coefficient of x^2:\n");
  scanf("%d",&d);

  printf("Enter coefficient of x^3:\n");
  scanf("%d",&c);

  printf("Enter coefficient of x^4:\n");
  scanf("%d",&b);

  printf("Enter coefficient of x^5:\n");
  scanf("%d",&a);
  
   if(a<0 || b<0 || c<0 || d<0 || e<0 || f<0){
      printf("please enter positive coefficients.\n");
      return 0;
    }
   printf("your polynomial is:%d*x^5 + %d*x^4 + %d*x^3 + %d*x^2 + %d*x + %d\n" , a,b,c,d,e,f);
   
   printf("your derivative is:%d*x^4 +%d*x^3 + %d*x^2 + %d*x +%d\n", 5*a,4*b,3*c,2*d,e);
   
   return 0;
}
