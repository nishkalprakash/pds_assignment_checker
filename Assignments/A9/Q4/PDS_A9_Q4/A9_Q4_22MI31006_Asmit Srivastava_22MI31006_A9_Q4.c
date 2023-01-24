#include<stdio.h>
struct employee{
char name[50];
int wages;
int days_present;
};

/*int net_pay(struct employee,int netpay){

int BP;
float net,HRA,TA;
BP=wages*days_present;
if(BP<1000){
HRA=(0.12)*BP;}
else {
HRA=(0.20)*BP;}
if(days_present>19){
TA=(0.10)*BP;}
else{
TA=0;}
net=BP+HRA+TA;
printf("Netpay=%f" ,net);
return 0;
}*/

int main(){
int n;
printf("Enter total no. of employees");
scanf("%d" ,&n);
struct employee arr[n];
for(int i=0;i=n;i++){
printf("enter the employee name");
scanf("%s" ,arr[i].name);
printf("enter wages/day");
scanf("%d",&arr[i].wages);
printf("number of days present for employees");
scanf("%d" ,&arr[i].days_present);}

return 0;
}


