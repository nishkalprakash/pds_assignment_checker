/*Name:P.Sri Harsha Vardhan
Roll no:22MA10040
assignment:2
fibinocci series*/
#include<stdio.h>
int fibinocci(int n)
{
if(n<2)
return n;
else 
return fibinocci(n-1)+fibinocci(n-2);
}
void fibinoc_seq(int n){
int count=0;
if(n==0 || n==1){printf("YES\n"); return;}
for(;n>fibinocci(count);){
if(n==fibinocci(count+1)){
printf("YES\n");return;}
count++;
}
printf("NO\n");
return;
}
int main(){
int num;
scanf("%d",&num);
fibinoc_seq(num);
return 0;
}
