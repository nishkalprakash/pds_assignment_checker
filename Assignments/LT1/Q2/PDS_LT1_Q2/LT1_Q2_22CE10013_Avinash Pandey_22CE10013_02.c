
#include<stdio.h>
int main(){

int n, n1, n2, n3, n4,  s = 0, l = 0;

printf("enter the value of integer:\n") ;

scanf("%d", &n) ;

n1 = n;
n3 = n;


if(n % 2 == 1){

    for (n3 = n; n3!=0; n3 = n3/10){
            n4 = n3%10;
            l = l*10 + n4;
            printf("%d",l);


    }
}

if( n%2 == 0){

    for( n1 = n; n1 != 0; n1 = n1/10 ){

            n2 = n1%10;
            s = s*10 + n2;
            printf("%d\n", s);

    }
}














//  This part of program reverses the digits of the integer


int m = n , reverse_n = 0 , a, difference;                                      // declaration of some required integer variables for program



for ( m = n; m != 0; m= m/10 ){                                                 // reverse the digits

    a = m%10 ;

    reverse_n = reverse_n*10 + a;

}
printf("reverse number = %d \n", reverse_n);



if( n < 0) m = (-1)*n ;                                                       // calculation of absolute value of n

if( reverse_n < 0) reverse_n = (-1)*reverse_n ;                                // calculation of absolute value of reverse_n

difference = m - reverse_n ;                                                   // calculation of difference between number and its reverse

if (difference < 0) difference = (-1)*difference ;                              // calculation of absolute value of defference

printf(" difference between reverse and original number = %d ", difference) ;


return 0 ;

}
