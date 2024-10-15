#include <stdio.h>
#include <math.h>

int main()
{
   int n;
   scanf("%d", &n);
      if (IsPalindrome(n) == 1)
      printf("Palindrome");
   if (IsPalindrome(n) == -1)
      printf("Not palindrome");
   return 0;
}

int digits(n)
{
 int a =0;
 if(n<10) return 1;
 a = 1 + digits(n/10); 
 return a;
}

int IsPalidrome()
{
    int n;
    if (n<0 || n>100000)
      return -1;
    if (n>0 && n<100000) {
       return 1;
       }
    
}
