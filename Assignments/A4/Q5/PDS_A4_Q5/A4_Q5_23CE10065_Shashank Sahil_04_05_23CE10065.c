//Lab 4
// Name- Shashank Sahil
// Roll number - 23CE10065

#include <stdio.h>

int a;
int i ;
int b ;
int m ;
int n;
int num = 0;
int threshold = 1;
int main(){
printf("Enter the integer");
scanf( "%d",&a);
int c = a;
for (i =0 ; i < threshold; i ++ ){
        if ( (a / 10) == 0 ) {
            
            i = threshold;
        }
        else{
            threshold++;
        }
        
        b = a % 10;
        a = a / 10;
        num = num + b;
        if (b > m){
            m = b ;
        }
        

    }
    threshold = 1;
    a = c;
    b = 0;
    for (i =0 ; i < threshold; i ++ ){
        if ( (a / 10) == 0 ) {
            
            i = threshold;
        }
        else{
            threshold++;
        }
        
        b = a % 10;
        a = a / 10;
        num = num + b;
        if (b > n && n < m && b< m){
            n = b ;
        }
        
        

    }
    printf("Sum of digits is %d\n",num);
    printf("Largest digit is %d\n", m);
    printf("Second Largest digit is %d", n);







}