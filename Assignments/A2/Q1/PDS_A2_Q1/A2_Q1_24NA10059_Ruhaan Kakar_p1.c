# include <stdio.h>
int main (){

int n; int s1; int s2 ;
// n is a 3 digit number 
printf (" Give me a 3 digit integer");
scanf( "%d",&n);
s1 =((n)* (n+1))/2;
s2 = ((n) * (n+1)*((2*n)+1))/6;
printf ("%d \n",s1);
printf("%d \n" , s2);
return 0;} 
