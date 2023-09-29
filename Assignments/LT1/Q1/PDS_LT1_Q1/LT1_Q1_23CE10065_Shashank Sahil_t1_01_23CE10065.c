//Test 1.
// Name- Shashank Sahil
// Roll number - 23CE10065
unsigned int n;
long long int a ;
long long int b ;
long long  int c ;
long long int d ;
int i = 1 ;
int p ;// stores the sum value
#include <stdio.h>
int main(){
    printf("Enter a number less than 9999\n");
    scanf("%u",&n);
    c = n ;
    while(n < 9999){
       while(c > 0){
        a = c % 10;
        c = c/10;
        b = a + 1 ; // Encode
        d = b*i + d;
        i = i*10; 
        if (b == 10){
            i = i*10;
        }
        if( b == 10){
            p = p + 1;
        }
        else{
        p = p + b;}

        
       }

    printf("%lld\n", d);// print encoded input
    // part (a) completes here.
    a = p % 100;
    d = d*100 + a;
    printf("%lld\n", d);//prints with check sum  
    //part (b) completes here
     c = d;
     d = 0;
     i = 10;
  while(c > 0){
        a = c % 10;
        c = c/10;
        d = a*i + d;
        i = i*100; 
          
       }
     printf("%lld\n", d);// print double encoded input
    // part (c) completes here.

    
    return 0 ;
    }



  return 0;


    
}
