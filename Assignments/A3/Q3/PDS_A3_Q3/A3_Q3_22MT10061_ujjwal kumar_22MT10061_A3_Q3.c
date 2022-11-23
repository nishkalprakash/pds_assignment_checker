#include<stdio.h>
  int main()
{ char s;
   scanf("%c", &s);
 double a,b;

 switch(s) {
  case '+' :
   
    
  scanf("%lf %lf",&a,&b);
   double sum;
    sum=a+b;
  printf("sum is : %lf",sum);
  break;
}

double c,d ;

 switch(s) {
  case '-' :
 
 scanf("%lf %lf",&c,&d);
 double subsctract;
  subsctract=c-d;
printf("subsctraction is : %lf",subsctract);
  break;
}

double e,f;
 switch(s) {
  case '*' : 

  scanf("%lf %lf",&e,&f);
 double multiply;
  multiply=e*f;
printf("multiplication is : %lf",multiply);
  break;
}

 double g,h;
 switch(s) {
  case '/' :

  scanf("%lf %lf",&g,&h);
 double divide;
  divide=g/h;
printf("division is : %lf",divide);
  break;

}



      
   
  





   return 0;
}
