//Roll no:<23MT30029>
//Name:<Tanaya Moghe>

#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,j,k,l,n;
int r[20];
int m[20];
int a[20];
for(i=0; i<20; i++)
{ 
	j=rand()%1000+1000;
	r[i]=j;
	k=rand()%100;
	m[i]=k;
	l=rand()%10+15;
	a[i]=l;
}
for(i=0;i<20; i++)
{
	printf("Roll: %d Age: %d Marks: %d\n", r[i], a[i], m[i]);
}
printf("The students with Same marks are\n");
for(i=0; i<19; i++)
{
 	for(n=i+1; n<20; n++)
	{
	if(m[i]==m[n])
	{
		printf("Roll: %d Age: %d Marks: %d\n", r[i], a[i], m[i]);
		printf("Roll: %d Age: %d Marks: %d\n", r[n], a[n], m[n]);
	}
	}
}
}

