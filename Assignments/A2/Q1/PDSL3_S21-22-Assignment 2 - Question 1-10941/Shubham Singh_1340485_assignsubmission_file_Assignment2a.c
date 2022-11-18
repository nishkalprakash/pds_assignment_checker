/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Assignment Class: 2(a)
*/

#include <stdio.h>
#include <math.h>
int main(){
int i,k;
float z, znew,s;

printf("Enter value of z: "); // reading value of z
scanf("%f", &z);

printf("\nEnter value of k: "); // reading value of k
scanf("%d", &k);

for(i=1;i<=k;i++)
{

znew=z;
s=sqrt(z);
z= z - s;

if(z<0)
z=fabs(z);

if(znew==z)//Trapped situation
{
   s=s-(1/k);
   z=z-(s*s);
}


printf("(%f, %d)  ", z, i); // printing the new Z value and the iteration value

if(z==0)
break;

}




return 0;
}
