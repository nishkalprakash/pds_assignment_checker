//Roll no:<23MT30029>
//Name:<Tanaya Moghe>
//Set:<Set 1>

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j,k,a,b,c;
	int a1[10], a2[10], a3[10], a4[10];
	int a5[20], a6[20];
	int a7[40];
	for(i=0; i<10; i++)
	{
		j=rand()%20 + 10;
		a1[i]=j;
		k=rand()%30 + 30;
		a2[i]=k;
		a=rand()%30 + 60;
		a3[i]=a;
		b=rand()%30 + 90;
		a4[i]=b;
	}
	printf("Array a1:\n");
	for(i=0;i<10;i++)
		printf("a1[%d] = %d, ", i, a1[i]);
	printf("Array a2:\n");
	for(i=0;i<10;i++)
		printf("a2[%d] = %d, ", i, a2[i]);
	printf("Array a3:\n");
	for(i=0;i<10;i++)
		printf("a3[%d] = %d, ", i, a3[i]);
	printf("Array a4:\n");
	for(i=0;i<10;i++)
		printf("a4[%d] = %d, ", i, a4[i]);
printf("array a5:\n");

for(i=0; i<10;i++)
a5[i*2]=a1[i];
for(i=0;i<10;i++)
a5[i*2 + 1]=a2[i];
for(i=0;i<20;i++)
		printf("a5[%d] = %d, ", i, a5[i]);
printf("array a6:\n");
for(i=0; i<10;i++)
a6[18-i*2]=a3[i];
for(i=0;i<10;i++)
a6[i*2 + 1]=a4[i];

for(i=0;i<20;i++)
		printf("a6[%d] = %d, ", i, a6[i]);

printf("array a7:\n");
for(i=0; i<20;i++)
a7[38-i*2]=a5[i];
for(i=0;i<20;i++)
a7[39-i*2]=a6[i];

for(i=0;i<40;i++)
		printf("a7[%d] = %d, ", i, a7[i]);

	return 0;
}




