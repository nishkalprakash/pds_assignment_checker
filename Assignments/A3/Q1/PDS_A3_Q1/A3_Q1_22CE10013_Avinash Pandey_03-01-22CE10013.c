#include<stdio.h>
int main(){

    int a, b, c, d, e ;

    printf("enter five integers:");
    scanf("%d %d %d %d %d", &a , &b, &c, &d, &e) ;


    int x1, x2, x3 ,  r , s ,t , y1, y2, y3 , max;





    if (  ((a%2) + (b%2) + (c%2) + (d%2) + (e%2)) == 3  ){

        if( (a%2 == 1) && (b%2 == 1) && (c%2 ==1)  )     x1 = a, x2 = b , x3 = c ;

        else if((a%2 ==1) && (b%2 == 1) && (d%2 ==1))   x1 = a, x2 = b , x3 = d ;

        else if((a%2 == 1) && (b%2 == 1) && (e%2 ==1))   x1 = a, x2 = b , x3 = e ;

        else if((a%2 == 1) && (c%2 == 1) && (d%2 ==1))   x1 = a, x2 = c , x3 = d ;

        else if((a%2 == 1) && (c%2 == 1) && (e%2 ==1))   x1 = a, x2 = c , x3 = e ;

        else if((a%2 == 1) && (d%2 == 1) && (e%2 ==1))   x1 = a, x2 = d , x3 = e ;

        else if((b%2 == 1) && (c%2 == 1) && (d%2 ==1))   x1 = b, x2 = c , x3 = d ;

        else if((b%2 == 1) && (c%2 == 1) && (e%2 ==1))   x1 = b, x2 = c , x3 = e ;

        else if((b%2 == 1) && (d%2 == 1) && (e%2 ==1))   x1 = b, x2 = d , x3 = e ;

        else if((c%2 == 1) && (d%2 == 1) && (e%2 ==1))   x1 = c, x2 = d , x3 = e ;








    if(x1 >= x2){

     if(x2 >= x3)                         r = x1, s = x2, t = x3;
     else if( (x2 <= x3) && (x3 <= x1) )  r = x1, s = x3, t = x2 ;
     else if( (x2 <= x3) && (x3 >= x1) )  r = x3, s = x1, t = x2 ;
   }

   else {
    if( (x2 >= x3) && (x1 >= x3) )        r = x2, s = x1, t = x3 ;
    else if( (x2 >= x3) && ( x1 < x3) )   r = x2, s = x3 , t = x1 ;
    else if( x3 >= x2)                    r = x3, s = x2, t = x1 ;
   }

   printf("odd numbers in ascending order are: %d < %d <%d ", t, s, r);

    }





       if (  ((a%2) + (b%2) + (c%2) + (d%2) + (e%2)) == 0  ){

        if( (a%2 == 0) && (b%2 == 0) && (c%2 ==0)  )     y1 = a, y2 = b , y3 = c ;

        else if((a%2 ==0) && (b%2 == 0) && (d%2 ==0))   y1 = a, y2 = b , y3 = d ;

        else if((a%2 == 0) && (b%2 == 0) && (e%2 ==0))   y1 = a, y2 = b , y3 = e ;

        else if((a%2 == 0) && (c%2 == 0) && (d%2 ==0))   y1 = a, y2 = c , y3 = d ;

        else if((a%2 == 0) && (c%2 == 0) && (e%2 ==0))   y1 = a, y2 = c , y3 = e ;

        else if((a%2 == 0) && (d%2 == 0) && (e%2 ==0))   y1 = a, y2 = d , y3 = e ;

        else if((b%2 == 0) && (c%2 == 0) && (d%2 ==0))   y1 = b, y2 = c , y3 = d ;

        else if((b%2 == 0) && (c%2 == 0) && (e%2 ==0))   y1 = b, y2 = c , y3 = e ;

        else if((b%2 == 0) && (d%2 == 0) && (e%2 ==0))   y1 = b, y2 = d , y3 = e ;

        else if((c%2 == 0) && (d%2 == 0) && (e%2 ==0))   y1 = c, y2 = d , y3 = e ;



     if( y1 >= y2)  max = y1 ;
     else max = y2 ;

     if(max <= y3)  max = y3 ;




     printf("largest even number is: %d", max);
}

    return 0;




    }










