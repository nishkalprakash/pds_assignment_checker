#include<stdio.h>
float fact(int n)
  {
    int i;
    float k=1.0;
    for(i=1;i<=n;i+=1)
      {
       k*=i;
      }
    return k;
  }
int power(int x,int n)
   {
    int g,j=1;
    for(g=1;g<=n;g+=1)
       {
        j*=x;
       }
    return j;
   }
int main()
    {
    int x,n,p;
    float m=1.0;
    printf("enter x and n\n");
    scanf("%d%d",&x,&n);
    for(p=1;p<=(n-1);p+=1)
       {
        m+=(power(x,p)/fact(p));
       }
    printf("%f\n",m);
    return 0;
    }
        
    
