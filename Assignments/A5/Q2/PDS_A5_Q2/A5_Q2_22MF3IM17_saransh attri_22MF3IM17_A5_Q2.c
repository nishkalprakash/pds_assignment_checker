#include <stdio.h>

int count=0;

int gcd(int a,int b)
{



int temp;
if  (a > b) 
 { temp = a; 
 a = b; 
 b = temp; 
}
while ((b % a) != 0) 
 {
temp = b % a;
b = a;
a = temp;
}
int gcd=a;
	/*int ck=2;
	int gcd=4;
	while(ck<=a)                               //checking gcd with any of a aor b as ref 
	{
      if(a!=b)
     {

      if(a%ck!=0)
      {
        if(b%ck!=0)
          gcd=1;
      }
}
      ck++;
	} */  
	return(gcd);               
}



void Coprime(int g, int h)
{  

   //printf("pairs are %d\n",gcd(g,h));
   if(gcd(g,h)==1)
{
    printf("%d and %d are coprime \n", g, h);
count+=1;
}
 
}




void pair(int a[])
{
         int i,j;
	for (i=0; i<5; i++)
	{
  for (j=0; j<5; j++) 
  {                                          /* here you have A[i] and A[j]. Can do whatever you want with them *//* Just an example below, I
                                                want to print all index pairs (i,j) such that A[i] = A[j] */

  	Coprime(a[i],a[j]);
}
}

}



int main()
{  
	int a[4];
	int z;
	while(z<=4)
	{
		printf("enter no.%d:\n",z );
		scanf("%d",&a[z]);
		z++;
	}

	pair(a);

if(count==0)
printf("no coprimes found");

	return 0;
}
