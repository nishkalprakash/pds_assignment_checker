#include <stdio.h>
int main(){
int num,num1;
printf("Enter integer number:");
scanf("%d",&num);
for(int i=1; i<=num;i++){
if(num%i==0){
printf("%d\n",i);
}
}
if (num==0){
printf("%d\n",num);
}
if(num<0){

num1=num*(-1);
for(int i=1;i<=num1;i++){
if (num1%i==0){
printf("%d\n",i);
}
}
}
return 0;
}
