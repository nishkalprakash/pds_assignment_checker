#include<stdio.h>
int *BuildSet(int *A,int n);
int SearchSet(int*A,int x);
int *Union(int*A,intx);
void print(int*A);
int main()
{int setA[50],setB[50];
*BuildSet(&setA,5);
*BuildSet(&setB,5);
return 0;
}


int *Buildset(int *A,int n)
{
printf("enter the elements");
for(int i=0;i<n;i++)
printf("%d",i);
scanf("%d",(A+i));
}
int SearchSet(int*A,int x)
{
for(int j=0;j<5;j++)
if(*A(j)==x)
return x;
}
void print(int*A)
{for(int i=0;i<5;i++){
printf("%d",*b=BuildSet[i]);
}
