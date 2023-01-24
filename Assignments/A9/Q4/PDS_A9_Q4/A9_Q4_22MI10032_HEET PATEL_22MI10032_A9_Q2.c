/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 9
Description :  to compute the net salary
*/
#include<stdio.h>
struct emp{//structure
char name[15];
int wage;
int day;
};
void salary(struct emp a[],int n){//function to calculate net salary
float hr,bp,ta,s;
for(int i = 0 ; i < n ; i++){
 bp = a[i].wage*a[i].day;
if(bp<1000){
 hr=  0.12*bp;
}
else {
 hr = 0.20*bp;
}
if(a[i].day>19){
 ta = 0.1*bp;
}
else{
 ta = 0;
}

 s = bp+hr+ta;
printf("Name:%s\n",a[i].name);
printf("Netpay:%.2f\n",s);//final salary
printf("\n");
}}
int main(){
printf("Enter number of employees:\n");
int n;
scanf("%d",&n);
struct emp a[n];
for(int i = 0 ; i < n ; i++){//loop for n number of employees
printf("Enter employee %d name :\n",i+1);
scanf("%s",a[i].name);
printf("Enter wage per day:\n");
scanf("%d",&a[i].wage);
printf("Enter number of days present:\n");
scanf("%d",&a[i].day);
}
printf("\n");
salary(a,n);
}
