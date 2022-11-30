/*
section 14
roll no 22CH30005
assignment 4
*/

#include<stdio.h>

int main(){

int i,j,num;
printf("enter the number{2-10}");
scanf("%d",&num);
for(i=0;i<=num-1;i++)
{
for(j=0;j<=i;j++){
int k=j+1;
if( k%2==0){
printf("0 ");
}
else{
printf("1 ");
}
}
printf("\n");
}
return 0;
}
