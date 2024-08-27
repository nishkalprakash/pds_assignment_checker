#include <stdio.h>
#include <math.h>

int main(){

int n,i,y,x;

printf("Enter a positive integer n: \n");
scanf("%d",&n);
y=1;

if(n<=0){
printf("N is invalid \n");
}

if(n>0){

for(i=1;i<=n;++i){
printf("%d,",y);
y = y+i;


}}




getchar();
return 0;



}
