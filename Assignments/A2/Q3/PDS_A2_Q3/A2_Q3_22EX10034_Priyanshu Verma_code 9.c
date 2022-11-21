/* This program is to find roots of a quadratic equation */
#include <stdio.h>
#include <math.h>
int main()
{   
    int a , b , c ; float s1 , s2 ;
    
    printf("enter values (a ,b and c)for the quadratic equations");

    scanf("%d , %d , %d" , &a , &b , &c);
    s1=(-b+sqrt((pow(b,2)-4*a*c)))/(2*a);
    s2=(-b-sqrt((pow(b,2)-4*a*c)))/(2*a);
    printf("The roots of the given equation= %f and %f" , s1 , s2);   


  return 0;
}
