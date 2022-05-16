/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system:ubuntu 20.04
Sec 3*/

#include<stdio.h>
#include<math.h>
int main(){
 int k,i;
 float z;
 float z1[200];
 printf("enter height as float,no of iter ass int");
 scanf("%f%d",&z,&k);

 z1[0]=z; //oth element
 i=1;
 while(i<=k){


  z1[i]=z1[i-1]-sqrt(z1[i-1]);


  printf("(%f,%d)",z1[i-1],i);
  if (z1[i]==0) break; //exit the loop

  if (i>1){
   if (z1[i]==z1[i-1]) z1[i]=z1[i]-sqrt(z1[i-1])-1.0/i;   //trapped case
    }
  if (z1[i]<0) z1[i]=fabs(z1[i]); // if z becomes negative

  i+=1;
 }
 return 0;
}
