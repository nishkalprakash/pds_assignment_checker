/*section 14
 Roll no:22MA10040
 Assignment no:7
program 2
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
int *n,i=1,p,flag,t=0,*z,y=0,F=0;
char d;
printf("n=");
n=(int *)malloc(i*sizeof(int));
scanf("%d",&n[i-1]);
while(1){
   i++;
   n=realloc(n,i*sizeof(int));
   scanf("%d",&n[i-1]);
   d=getchar();
   if(d=='\n') break;}
z=(int *)calloc(i,sizeof(int));
printf("m =");