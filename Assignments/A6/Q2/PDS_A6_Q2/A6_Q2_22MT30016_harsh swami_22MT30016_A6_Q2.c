/*SECTION:14
  name:harsh
  roll no. 22MT30016
  question no.2
  assignment no :6
  description:CO merge*/

#include<stdio.h>
 int gcd(int m,int n)
{
  if(m==n)
  return m;
  else if(m>n)
 {
  return gcd((m-n),n);
 }
else
 return gcd(n,(n-m));
}
void coprime (int a,int b)
{
 int flag; flag=gcd(a,b);
 if (flag==1)
printf("(%d %d)",a,b);
}
void pair(double a[], int size)
{
 int i,x,y,value;
int flag=0;int j;
 for(i=0;i<size;i++)
{
 if ((a[i]<0))
 printf("invalid input:all inputs should be integer");
 else{	
 if (flag==0)
	for(i=0;i<size;i++)
	{
		for ( j=i;j<size;j++)
		{
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
printf("enter n:");
scanf("%d",&n);
double arr[n];
printf("enter elemets");
for ( int i=0;i<n;i++)
{
scanf("%lf",&arr[i]);
}
pair( arr,n);
return 0;
}



