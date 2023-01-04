/*section 14
 Name:P.sri Harsha vardhan
 Roll no:22MA10040
 Assignment no:7 
desc : out put all the numbers that appears m number of times
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
scanf("%d",&p);
for(int j=0;j<i;j++){
  flag=0;
for(int k=0;k<i;k++){
if(n[k]==n[j]) flag++;}
if(flag==p){z[y]=n[j];
            y++;
            F++;}}
for(int j=0;j<=y;j++){
t=z[j];
if(t==0) continue;
else {
for(int k=0;k<=y;k++){
 if(z[k]==t) z[k]=0;}
printf("%d",t);}}
if (F==0) printf("NO number");
printf(" appears %d times \n",p);
return 0;
}

