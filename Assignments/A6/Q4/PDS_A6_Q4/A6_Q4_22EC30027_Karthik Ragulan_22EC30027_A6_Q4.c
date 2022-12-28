#include<stdio.h>
int *Buildset(int *A,int n);
int SearchSet(int *A,int x);
int Union(int *A,int *B);
void print(int *A);
int main()
{int setA[100],setB[100];
*Buildset(&setA,5);
*Buildset(&setB,5);
return 0;

}
int *Buildset(int *A,int n)
{int i=0;
printf("enter the elements into the array:");
for(i=0;i<n;i++)
printf("element %d",i);
scanf("%d",(A+i));
}

int Searchset(int *A,int x)
{
for(int j=0;j<5;j++)
if(*A(j)==x)
return x;
}
void print(int *A)
{
for(int i=0;i<5;i++){
printf("%d",*Buildset[i]);
}
for(int i=0;i<5;i++){
printf("%d",setA[i]);
}
