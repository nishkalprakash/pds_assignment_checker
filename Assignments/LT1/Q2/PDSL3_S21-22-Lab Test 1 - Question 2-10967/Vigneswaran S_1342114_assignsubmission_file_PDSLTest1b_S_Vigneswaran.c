/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system: Windows 10
Sec 3*/

#include<stdio.h>
#include<math.h>

int main(){
 float x0,e,x1,error;
 int maxit,i=1;
 printf("Enter x0,e,max itern no");
 scanf("%f%f%d",&x0,&e,&maxit);
 x1=x0-(pow(x0,3.0)-25.0)/3/pow(x0,2.0);
 printf("%f",x1);
 error=e+1.0;
 while((abs(error) > e) && i<maxit){
 x0=x1;
 x1=x0-1.0/3*(pow(x0,3.0)-25.0)/pow(x0,2.0);
 i+=1;
 printf("\n%d \t %f \t %f \t %f \n",i,x0,x1,abs(x1-x0));
 error=x1-x0;
}printf("the sqr root is %f",x1);
}

