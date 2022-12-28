/*section:14
name: Abhisekh Mukherjee
roll no:22MA10002
Assingment no:6
q:2
description:
*/
#include<stdio.h>
int gcd(int m,int n); // declaring the functions
void coprime(int m,int n);
void pair(int arrayname[]);
int main()
{
int n;
printf("enter how many number you want\n");
scanf("%d",&n);
int A[n];
int B[n];
printf("enter \n");
for(int i=0;i<n;i++){
scanf("%d",&A[i]);   // reading the numbers in form of an array
}
printf("\n");
for(int i=0;i<n;i++){
if(10*A[i]%10!=0){
printf("invalid entries :all should be  integers\n");
return 0;
}
if(A[i]<=0){
printf("invalid entries :all should be postive integers\n");
return 0;
}

}



printf("coprime pairs are\n");
for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){

   if(A[i]>=A[j]){
    coprime(A[i],A[j]);
}
if(A[i]<A[j]){coprime(A[j],A[i]);}   // using if else

}
}
return 0;
}



int gcd(int m,int n){   // defining gcd recursive function
if(m%n==0){
return n;
}
int c=m%n;
return gcd(n,c);
}


void coprime(int m,int n){  // defining coprime function
int B[2];
if(gcd(m,n)==1){
   for(int i=0;i<1;i++)
   B[i]=n;
   for(int i=1;i<2;i++)
   B[i]=m;
   pair(B);
   }
else return ;
}

void pair(int B[]){
printf("(");
for(int i=0;i<2;i++){
 printf("%d ",B[i]);    // printing the pairs
}
printf(")\t");


}
