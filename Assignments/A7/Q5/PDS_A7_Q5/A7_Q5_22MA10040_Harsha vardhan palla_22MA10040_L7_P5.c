/*section 14
 Name:P.sri Harsha Vardhan 
 Roll no:22MA10040
 Assignment no:7
program 5
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
int *num,i=1,m,k,count=0;
char d;
num=(int *)malloc(i*sizeof(int));
scanf("%d",&a[i-1]);
while(1){
i++;
num=realloc(num,i*sizeof(int));
scanf("%d",&a[i-1]);
d=getchar();
if(d=='\n') break;}
for(int j=0;j<i;j++){
k=0;
for(int l=j+1;l<i;l++){
if(num[j]>num[l]) {k=-1;count++;break}}
if(k==-1) continue;
else{
for(int l=0;l<j;l++){
if(num[j]<num[l]) {count++;break;}}}}
printf("out of order : %d\n",count);
return 0;
}

