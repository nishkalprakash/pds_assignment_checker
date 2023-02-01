# include<stdio.h>
# include<math.h>
// writing a code to print harmonic series

float function(int n)
{
   float i = 1;
   if(n == 1)
    return n;
   else
   return function(n-1) + (i/n);    
}
int main ()
{
   int n, x, y;
   float ans;
   printf("Enter n : ");
   scanf("%d", &n);
   if(n==1) {
     printf("1.000\n");
     return 0;
   }
   ans = function(n);
   x = (int) (ans * 1000);
   y= (int) (ans * 10000);
   if(y - 10*x > 5)
    printf("%d.%d\n", x/1000, x%1000 + 1);

   if(y - 10*x <= 5)
    printf("%d.%d\n", x/1000, x%1000);

     
   return 0;
}
