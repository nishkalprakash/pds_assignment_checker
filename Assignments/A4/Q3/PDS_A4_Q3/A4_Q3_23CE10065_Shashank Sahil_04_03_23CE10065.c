//Lab 4
// Name- Shashank Sahil
// Roll number - 23CE10065

#include <stdio.h>
int a;
int i ;
int b ;
int num,num2;
int threshold = 1;
int main(){
    printf("Enter the number you want to check");
    scanf("%d",&a);
    num2 = a;
    for (i =0 ; i < threshold; i ++ ){
        if ( (a / 10) == 0 ) {
            
            i = threshold;
        }
        else{
            threshold++;
        }
        b = a % 10;
        a = a / 10;
         num = num*10 +b;

    }
    
    if (num ==num2  ){
        printf( " This is a palindrome!");
    }
    else{printf(" Not a palindrome!");}
    return 0;
}