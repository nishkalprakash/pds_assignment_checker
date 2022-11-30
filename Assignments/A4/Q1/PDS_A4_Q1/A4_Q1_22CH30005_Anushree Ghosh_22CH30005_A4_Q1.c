/*
section 14
roll no 22CH30005
ASSIGNMENT 4
*/

#include<stdio.h>

int main(){
 
int num;
printf("enter number{-999999-999999}");
scanf("%d",&num);
if(num==0){
printf("%d",num);
}
if(num<0){
num=0-num;
}

for(int i=1;i<=num;i++){
 
 if (num%i==0)
printf("%d    ",i);

}
return 0;
}





