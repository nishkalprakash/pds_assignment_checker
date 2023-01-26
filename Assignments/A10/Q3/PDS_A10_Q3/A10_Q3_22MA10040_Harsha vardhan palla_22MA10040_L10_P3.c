/*Name:P.Sri Harsha Vardhan
Roll no:22MA10040
assignment:10
program 4
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
int *list,i=1,asc=0,t=0,desc=0;
char d;
printf("L=");
list=(int *)malloc(i*sizeof(int));
scanf("%d",&list[i-1]);
d=getchar();
while(d!='\n'){
i++;
list=realloc(list,i*sizeof(int));
scanf("%d",&list[i-1]);
d=getchar();
}
for(int j=0;j<i-1;j++){
if(list[j]<list[j+1]) {asc=
else 
