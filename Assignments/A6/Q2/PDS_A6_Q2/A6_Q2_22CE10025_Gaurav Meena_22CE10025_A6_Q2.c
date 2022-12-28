/* NAME-GAURAV MEENA
  ROLL NO -22CE10025
  ASSIGNMENT NO-6
  DESCRIPTION- COPRIME
*/

#include<stdio.h>
int gcd(int p,int q)
{
 if (p==q)
 return p;
 else if(p>q)
{
  return gcd((p-q),q);
}

 else
   return gcd(q,(q-p));

}
 void coprime(int a,int b)
{

 int flag=gcd(a,b);
 if(flag==1)
 printf("(%d,%d)",a,b);
}
 void pair(double a[],int size)
{
int i;
int x; 
int y;
int flag=0;int j;


for (  i=0; i<size;i++)
{
if((a[i]<0))
printf("invalid input");

 else {
   if (flag==0)
     for(i=0;i<size;i++)
{
   for(int j=i;j<size;j++){
         y=(int)a[i];x=(int)a[j];
       coprime(x,y);
}
}
}
}
}

int main()
{
int n;int i;
printf("Enter n:");
scanf("%d",&n);
double arr[n];
printf("enter elements");

for(int i=0;i<n;i++){
scanf("%lf",&arr[i]);
}
 pair(arr,n);
return 0;
}



















  



