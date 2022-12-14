//Program to print maximum and 2nd maximum
#include <stdio.h>
int c[20],k=0,t=0;
void max(int c[],int); 
int main()
{
   int i,num=0,max1;
   printf("Enter 10 and press enter in order to stop taking numbers\n");
   printf("Enter the numbers:\n");
   while (num != '\n'){
     scanf("%d",&num);
     for (i=0;i<20;i++) {
        c[i]=num;}
     k++;}
   c[k]=0;
   if (k==2) {printf("Largest number:%d\n Second largest number:Value not yet entered",c[0]);}
   else {
       max(c,k);
       c[t]==0;
       max(c,k);}
   return 0;
      
  }
void max(int a[],int n)
{
   int j,max1;
   for (j=0;j<n;j++){
        if (j==0) max1=c[j];
        else if (max1>c[j]) continue;
        else if (max1<c[j]) {max1=c[j]; t=j;}
        else if (c[j]<0) printf("<Program terminated>");
        ++t;}
   if (t==1) printf("Largest number: %d\n",max1);
   else if (t==2) {printf("Second largest number: %d\n",max1);}
 }
