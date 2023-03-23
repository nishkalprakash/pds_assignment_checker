#include <stdio.h>                           //header file
int main(){
    int n,s1,s3=0,t;   // n:integer ,s1,s2,s3: variables for sum of series, t:variable used to solve sum of digits
    long int s2;
    printf("Enter a integer");
    scanf("%d",&n);                          //input from user//

    //series 1
    s1=(n*(n+1))/2;

    //series 2
    s2=(n*(n+1)*((2*n)+1))/6;

    //series 3
    t=(n%10);
    s3+=t;
    n-=t;
    t=(n%100)/10;
    s3+=t;
    n-=t;
    t=(n%1000)/100;
    s3+=t;

    //printing variables
    printf("sum of series s1 is %d\n",s1);
    printf("sum of series s2 is %ld\n",s2);
    printf("sum of series s3 is %d\n",s3);

    return 0;
}
