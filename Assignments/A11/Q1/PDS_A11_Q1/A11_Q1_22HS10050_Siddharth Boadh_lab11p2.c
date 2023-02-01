#include <stdio.h>
float harmonic(int n);

int main(){
float n;
printf("Enter the number between 0 to 99999\n");
scanf("%f", &n);
printf("%f", harmonic(n));
return 0;
}

float harmonic(int n)
{
float y;
if(n == 1 || n == 0)
{
return 1;
}
else
y=1.0/n + harmonic(n-1);
return y;
}



