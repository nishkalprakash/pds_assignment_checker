
# include<stdio.h>
# include<math.h>

 int main () {

   int number, Number, a, b, c, d, e, f;

       printf(" Enter a number :  ");

       scanf("%d", &number);

     if(number >= 0 && number < 10) {

   printf("%d", number);

 

  }   else if( number >= 10 && number <100) {

      int  a = number / 10;

      int  b = number - a * 10;

    printf("%d", a + b );

}    else if(number >=100 && number <1000) {

         int   a = number / 100;
         int   b =( number - a * 100 )/ 10;
          int c = ( number - a * 100 - b * 10);         
          printf("%d", a + b + c);

} 
 else if(number >=1000 && number <10000) {

         int   a = number / 1000;
         int   b =( number - a * 1000 )/ 100;
          int c = ( number - a * 1000 - b * 100)/ 10;
          int d = ( number - a * 1000 - b * 100 - c * 10);
          
          printf("%d", a + b + c + d);
}   else if(number >=10000 && number <100000) {

         int   a = number / 10000;
         int   b =( number - a * 10000 )/ 1000;
          int c = ( number - a * 10000 - b * 1000)/ 100;
          int d = ( number - a * 10000 - b * 1000 - c * 100)/ 10;          
          int e = ( number - a * 10000 - b * 1000 - c * 100 - d * 10);
          printf("%d", a + b + c + d + e);
}    else if(number >=100000 && number <1000000) {

         int   a = number / 100000;
         int   b =( number - a * 100000 )/ 10000;
          int c = ( number - a * 100000 - b * 10000)/ 1000;
          int d = ( number - a * 100000 - b * 10000 - c * 1000)/ 100;  
          int e = ( number - a * 100000 - b * 10000 - c * 1000 - d * 100);
          int f = ( number - a * 100000 - b * 10000 - c * 1000 - d * 100 - e * 10 );
          printf("%d", a + b + c + d + e + f);
}       


    else if(number >= -10 && number < 0) {

  
    int Number = -1 * number;
        printf("-");
     printf("%d", Number);
 

  }   else if( number >= -100 && number < -10) {
      int Number = -1 * number;
      int  a = Number / 10;

      int  b = Number - a * 10;
   printf("-");
    printf("%d", a + b );

}    else if(number >= -1000 && number < -100) {
 int Number = -1 * number;
         int   a = Number / 100;
         int   b =( Number - a * 100 )/ 10;
          int c = ( Number - a * 100 - b * 10); 
   printf("-");        
          printf("%d", a + b + c);

} 
 else if(number >= -10000 && number < -1000) {
        int Number = -1 * number;
         int   a = Number / 1000;
         int   b =( Number - a * 1000 )/ 100;
          int c = ( Number - a * 1000 - b * 100)/ 10;
          int d = ( Number - a * 1000 - b * 100 - c * 10);
             printf("-");
          printf("%d", a + b + c + d);
}   else if(number >= -100000 && number < -10000) {
         int Number = -1 * number;
         int   a = number / 10000;
         int   b =( Number - a * 10000 )/ 1000;
          int c = ( Number - a * 10000 - b * 1000)/ 100;
          int d = ( Number - a * 10000 - b * 1000 - c * 100)/ 10;          
          int e = ( Number - a * 10000 - b * 1000 - c * 100 - d * 10);
   printf("-");
          printf("%d", a + b + c + d + e);
}    else if(number >= -1000000 && number <100000) {
         int Number = -1 * number;
         int   a = Number / 100000;
         int   b =( Number - a * 100000 )/ 10000;
         int c = ( Number - a * 100000 - b * 10000)/ 1000;
         int d = ( Number - a * 100000 - b * 10000 - c * 1000)/ 100;  
         int e = ( Number - a * 100000 - b * 10000 - c * 1000 - d * 100);
         int f = ( Number - a * 100000 - b * 10000 - c * 1000 - d * 100 - e * 10 );
          printf("-");
         printf("%d", a + b + c + d + e + f);
}
    else {
       printf(" Invalid Number ");
       printf(" Enter a valid number ");
}
   return 0;

}




      
