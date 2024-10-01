#include<stdio.h>
int gcd(int a ,int b)
  {
   int i=1,j,k=1,n=0;
   for(i=2;i>0;i+=1)
      {n=0;
       if (i>2)
         {
          for(j=2;j<i;j+=1)
             {
              if ((i%j)==0)
                 {
                  n=1;
                  break;
                  }
              }
          }
        if (n==1)
          {
           continue;
           }
         if ((i>a)||(i>b))
            {break;}
         if (((a%i)==0)&&((b%i)==0))
             {
              k=i;
              }
         if (k!=1)
           {break;}
         }
     return k;
     }
void coprime(int a, int b)
     {
      if (gcd(a,b)==1)
         {
           printf("%d and %d are co-primes\n",a,b);
         }
       return ;
      }
int main()
    {
      int s=0,d,f,g,a[5];
      for(s=0;s<5;s+=1)
        {
         scanf("%d",&a[s]);
         }
       for(d=0;d<4;d+=1)
         {
          for(f=d+1;f<5;f+=1)
            { 
             coprime(a[d],a[f]);
             }
          }
        if (k==1)
          {printf("no coprime foumd");}
        return 0;
      }
            
                  
                  
                  
                  
                  
                  
                  
                  
                  
     
