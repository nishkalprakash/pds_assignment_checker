#include<stdio.h>
int main ()   {
     int a,b,c,d;
     printf("Please enter four integers a,b,c,d respectively :");
     scanf("%d%d%d%d", &a, &b, &c, &d);
     if(a==b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)||(a==c&&a!=b&&a!=d&&b!=c&&b!=d&&c!=d)||(a==d&&a!=b&&a!=c&&b!=c&&b!=d&&c!=d)||(b==c&&a!=b&&a!=c&&a!=d&&b!=d&&c!=d)||(b==d&&a!=b&&a!=c&&a!=d&&b!=c&&c!=d)||(c==d&&a!=b&&a!=c&&a!=d&&b!=c&&b!=d){
     
     printf("YES,Here exactly two of the integers are equal");}
     else 
     printf("NO");
     
     return 0;
 }    

