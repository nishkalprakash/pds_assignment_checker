#include <stdio.h>
   int gcd(int a,int b)
   { if(a>b)
     {if (a%b==0)
       {return b; }
      return gcd(a,a%b);
      }
      else if(b>a)
      {
     {if (b%a==0)
       {return a; }}
      return gcd(b%a,b);
      }
      }
      
 //checking no are coprime are not
 void coprime(int a,int b)
   {if (gcd(a,b)==1)
    {printf("%d and %d are coprime \n",a,b);
    return ;}
    }
 int main ()
   {
     int arr[10],k,i,j;
      for (k=0;k<5;k++)
         scanf("%d",&arr[k]);
    //checking each pairs if they are coprime or not
    for(i=0;i<5;i++)
      { for(j=0;j<5;j++)
      {(coprime(arr[i],arr[j]));}}
         }
       
 return 0;
 }
    
