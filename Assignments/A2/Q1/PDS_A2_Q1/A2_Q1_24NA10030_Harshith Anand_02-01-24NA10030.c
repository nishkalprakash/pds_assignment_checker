//program to compute the sum of the series
// code creator : HARSHITH ANAND
// ROLL NO : 24NA10030
#include<stdio.h>
int main()
{
    int n,s1,s2,s3;
    char x,y,z;
    scanf("%d",&n);
    //scanf("%d %d %d ",&s1,&s2,&s3);
    //scanf("%c %c %c",&x,&y,&z);
    
    
    s1=n*(n+1)/2;
    
    s2=n*(n+1)*(2*n+1)/6;
    
    s3=x+y+z;
    printf("the sum of numbers is %d",s1);
    printf("the sum of square of numbers is %d",s2);
    printf("the sum of digit of number is %d",s3);
    
    
    return 0;
}    
    
    
