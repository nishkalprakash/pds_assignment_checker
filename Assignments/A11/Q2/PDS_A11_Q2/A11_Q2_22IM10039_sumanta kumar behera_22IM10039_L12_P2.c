# include<stdio.h>
# include<math.h>
// finding if a given number belongs to fibonacci series
int fbnc(int n)
{
   if(n==0 || n ==1)
   return n;

   if(n>1)
   return fbnc(n-1)+fbnc(n-2);
}

 int main()
{
   int n, x=0;
   printf("Enter n : ");
   scanf("%d", &n);
   for(int i=0; i<12; i++)
 {
  if(n == fbnc(i))
   x++;
 }
   if(x==0)
   printf("No\n");

  if(x > 0)
   printf("Yes\n");
   return 0;
}
