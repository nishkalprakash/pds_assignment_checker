#include<stdio.h>
int primeCheck(int i)
{
     int j ;
     if(i==1 || i==2 || i==3) return -1 ;
      if(i<4){return -1 ;}
      if(i%2==1) { return -1;}
     else
     {
         for(j=2 ;j<i ;j++)
       {
           if(i%j == 0)
           {
             return 0 ;
           }
           else if(i%j !=0 )
           {
              return 1 ;
           }
       }

     }

    }

int main()
{
    int n ,a , b ,k , u ,v ,l1,l2;
    scanf("%d",&n) ;
    primeCheck(n) ;
    if(primeCheck(n)==0 || primeCheck(n)==-1)
    {
        printf("THis number is not prime\n") ;
    }
    a=n/2 ;
    b=n/2 ;
   while(a>0 && b>0)
    {  k=1 ;
        a= a-k ; b= b+k ;
      u = primeCheck(a) ;
      v= primeCheck(b) ;
        if(u+v==2 )
        {
            break ;
        }
    }
  printf("%d = %d + %d",n , a ,b);
    return 0 ;
}





















