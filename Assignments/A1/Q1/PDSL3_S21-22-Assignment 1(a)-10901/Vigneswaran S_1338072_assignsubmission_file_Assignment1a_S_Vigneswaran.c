/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system:ubuntu 20.04
Sec 3*/
#include<stdio.h>
int main(){
 int a,u,alpha;
 float time,dist;
 printf("Enter a,u,acceleration as integers and time as float type in same order\n");
 scanf("%d%d%d%f",&a,&u,&alpha,&time);
 dist=a+u*time+0.5*alpha*time*time;
 printf("Distance =%f\n",dist);
 printf("------------");
 return 0;
}
