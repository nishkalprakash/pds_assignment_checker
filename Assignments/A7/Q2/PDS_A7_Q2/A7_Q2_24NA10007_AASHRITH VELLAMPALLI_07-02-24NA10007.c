//aashrith vellampalli
//24NA10007
#include<stdio.h>

int gcd(int a,int b)
{
 int temp;
 while(a!=0)
{ 
 temp=a;
 a=b%a;
 b=temp;
} 
 return b;
}

void coprime(int a,int b)
{
 if(gcd(a,b)==1)
 {
 printf("%d and %d are coprimes\n",a,b);
 }
}



void pair(int a[],int n)

{
 for(int i=0;i<n-1;i++)
{
 for(int j=i+1;i<n;i++)
 {
  coprime(a[i],a[j]);
 }
}

}

int main()
{
 int a[5];
 int n=5;
 for(int i=0;i<n;i++)
 {
  printf("enter element %d:\n",i+1);
  scanf("%d",&a[i]);
 }
 pair(a, n);
 return(0);
 

}


