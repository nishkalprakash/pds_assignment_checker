#include<stdio.h>
int k=1;
int digits(int n)
   {
    if ((n%10)==n) return 0;
    digits(n/10);
    k+=1;
    return k;
    }
int ispalindrome(int n, int l)
    {
     if ((l==1)||(l==0))  return 1;
     int i=1,k=1;
     for(i=1;i<l;i+=1)
         {
           k*=10;
         }
     int r=(n/10)-(((n/k)*k)/10);
     ispalindrome(r,l-2);
     if ((r/k)==(r%10))
        return 1;
     if ((r/k)!=(r%10))
        return 0;
     }
int main()
   {
    int n,l,m;
    scanf("%d",&n);
    l=digits(n);
    m=ispalindrome(n,l);
    if (m==1) printf("\nPALINDROME");
    if (m==0) printf("NOT A PALINDROME\n");
    return 0;
    }
