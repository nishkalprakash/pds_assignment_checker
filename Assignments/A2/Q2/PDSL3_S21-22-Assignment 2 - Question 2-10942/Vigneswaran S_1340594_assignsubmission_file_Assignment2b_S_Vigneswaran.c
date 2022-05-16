/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system:ubuntu 20.04
Sec 3*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main(){

 srand(time(NULL));
 int i,n,k,p;
 float d,dn;
 d=0.0;
 dn=0.0;
 p=rand() & 1? -1 : 1;
 printf("Enter n and k");
 scanf("%d%d",&n,&k);
 for (i=0;i<k;i++){
  for(int j=0;j<n;j++) {
  dn+=p;
    }
 d += dn * dn;}
 d/=k;
 d=sqrt(d);
 printf("distance =%f",d);
 return 0;
}
