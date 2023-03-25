#include<stdio.h>
int main(){

int X, Y, a, b , c, d, e ,f , g, h ;

printf("enter any two numbers between -999 and 999:");
scanf("%d  %d", &X, &Y);

   a = (X%10);
   b = (X/10);
   c = (b%10);
   d = (b/10);

   e = (Y%10);
   f = (Y/10);
   g = (f%10);
   h = (g/10);



   if( ((-999 > X) && (999 < X)) && ( (-999 >  Y) && (999 < Y)) )  printf("wrong input");
   else {
        if( (100 <= X) || (-100>= X)){
        if( (a == h) && (c == g) && (d == e) )   printf("perfect pair") ;
   else                                     printf("not a perfect pair") ;
   }
   }
return 0;

}
