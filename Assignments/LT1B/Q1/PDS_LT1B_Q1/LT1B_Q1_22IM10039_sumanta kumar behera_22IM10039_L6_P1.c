
# include<stdio.h>
# include<math.h>
int power(int a, int b) {
    if(b==1) {
    
     return a;

 } else  {
   
   return a * pow(a,b-1);
}
    

}
 int main () {

   int number, Number, a, b, c, d, e, f, sum;

       printf(" Enter a number :  ");

       scanf("%d", &number);

     if(number > 0 && number < 10) {

   printf("%d", number);

 

  }   else if( number >= 10 && number <100) {

      int  a = number / 10;

      int  b = number - a * 10;

     int sum = power(a,2) + power(b,2);
 printf("%d", sum);

}    else if(number >=100 && number <1000) {

         int   a = number / 100;
         int   b =( number - a * 100 )/ 10;
          int c = ( number - a * 100 - b * 10);         
         int sum = power(a,3) + power(b,3) + power(c,3);
 printf("%d", sum);

} 
 else if(number >=1000 && number <10000) {

         int   a = number / 1000;
         int   b =( number - a * 1000 )/ 100;
          int c = ( number - a * 1000 - b * 100)/ 10;
          int d = ( number - a * 1000 - b * 100 - c * 10);
          
           int sum = power(a,4) + power(b,4) + pow(c,4) + pow(d,4);
 printf("%d", sum);
}   else if(number >=10000 && number <100000) {

         int   a = number / 10000;
         int   b =( number - a * 10000 )/ 1000;
          int c = ( number - a * 10000 - b * 1000)/ 100;
          int d = ( number - a * 10000 - b * 1000 - c * 100)/ 10;          
          int e = ( number - a * 10000 - b * 1000 - c * 100 - d * 10);
        int sum = pow(a,5) + pow(b,5) + pow(c,5) + pow(d,5) + pow(e,5);
        printf("%d", sum);
}    else if(number >=100000 && number <1000000) {

         int   a = number / 100000;
         int   b =( number - a * 100000 )/ 10000;
          int c = ( number - a * 100000 - b * 10000)/ 1000;
          int d = ( number - a * 100000 - b * 10000 - c * 1000)/ 100;  
          int e = ( number - a * 100000 - b * 10000 - c * 1000 - d * 100);
          int f = ( number - a * 100000 - b * 10000 - c * 1000 - d * 100 - e * 10 );
         int sum = pow(a,6) + (b,6) + pow(c,6) + pow(d,6) + pow(e,6) + pow(f,6);
 printf("%d", sum);
}       



    else {
       printf(" Invalid Input\n ");
}
   return 0;

}
