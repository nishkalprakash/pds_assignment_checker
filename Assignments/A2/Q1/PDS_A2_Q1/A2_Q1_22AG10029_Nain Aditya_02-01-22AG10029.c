#include<stdio.h>
#include<math.h>

int main(){
    int a,b,n,s1,s2,s3;

    printf ("enter the no \n");
    scanf ("%d", &n);//input of user

    s1= (n*(n+1))/2;
    s2= (n*(n+1)*((2*n)+1))/6;
    a= (n/100);
    b= (n/10);
    s3= a + (b-(10*a)) + (n-(10*b));

    printf ("the sum of the integers till %d is %d \n", n , s1);
    printf ("the sum of the squares of integers till %d is %d \n" , n , s2);
    printf ("the sum of digits of %d is %d \n" , n , s3);
    return 0;


}
