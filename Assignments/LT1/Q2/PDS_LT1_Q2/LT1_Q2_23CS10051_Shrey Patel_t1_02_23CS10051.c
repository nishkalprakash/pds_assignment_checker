//Shrey G PAtel
//23CS10051
#include <stdio.h>
#include <stdlib.h>
int main()
{
int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40];
for(int i=0;i<10;i++)
{
a1[i]=rand()%21+10;
a2[i]=rand()%31+30;
a3[i]=rand()%31+60;
a4[i]=rand()%31+90;
}

for(int i=0;i<10;i++)
{
a5[2*i]=a1[i];
a5[2*i+1]=a2[i];
a6[2*i]=a3[i];
a6[2*i+1]=a4[i];
}

for(int i=0;i<20;i++)
{
a7[2*i]=a5[i];
a7[2*i+1]=a6[i];
}

printf("Elements of array 1\n");
for(int i=0;i<10;i++)
printf("%d \t",a1[i]);
printf("\n");
printf("Elements of array 2\n");
for(int i=0;i<10;i++)
printf("%d \t",a2[i]);
printf("\n");
printf("Elements of array 3\n");
for(int i=0;i<10;i++)
printf("%d \t",a3[i]);
printf("\n");
printf("Elements of array 4\n");
for(int i=0;i<10;i++)
printf("%d \t",a4[i]);
printf("\n");
printf("Elements of array 5\n");
for(int i=0;i<20;i++)
printf("%d \t",a5[i]);
printf("\n");
printf("Elements of array 6\n");
for(int i=0;i<20;i++)
printf("%d \t",a6[i]);
printf("\n");
printf("Elements of array 7\n");
for(int i=0;i<40;i++)
printf("%d \t",a7[i]);
printf("\n");
return 0;
}
