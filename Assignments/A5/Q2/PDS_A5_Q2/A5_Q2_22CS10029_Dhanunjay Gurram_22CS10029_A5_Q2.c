/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:5
  Description:Finding sum of given series using functions*/
#include <stdio.h>
int k=0;
int gcd(int a,int b)
{
   int x,rem=1;
   if (a>b) {
     x=a;a=b;b=x;}
   while (rem!=0){
     rem=b%a;
     b=a; a=rem;}
   return b;
}
void CoPrime(int x,int y)
{
   int a;
   a=gcd(x,y);
   if (a==1){ printf("%d and %d are CoPrime\n",x,y) ; k++;}
}
int Pair(int B[])
{
   int i,j;
   for (i=0;i<4;i++) {                 //Extracting all pairs possible for an array of SIZE 5
     j=i+1;
     for (;j<5;j++) {
        CoPrime(B[i],B[j]);}}
}
   
int main()
{
   int a[5],i;
   printf("Enter 5 numbers :\n");
   for (i=0;i<5;i++){
     scanf("%d",&a[i]);}
   void CoPrime(int,int);                         //Prototypes of all func.s going to be used 
   int gcd(int ,int);
   int Pair(int B[]);
   Pair(a);
   if (k==0) printf("No Co-Prime found\n");
   return 0;
}

