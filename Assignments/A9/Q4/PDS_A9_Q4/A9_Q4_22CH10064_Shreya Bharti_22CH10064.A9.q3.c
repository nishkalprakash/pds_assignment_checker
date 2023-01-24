#include <stdio.h>
#include <string.h>

typedef struct employee{

char name[100];
float wage;
int day;

} emp ;


void netpay(char name[100], float wage, int day){

float bp,hra, ta, netpay;
int len=0;
for(int i=0; i!='\0'; i++){
	if(name[i]!='\0'){
	len++;
	}
}

bp=wage*day;

if(bp<1000){
hra = bp*0.12;
}
else{
hra=bp*0.2;
}

if(day>19){
ta= 0.1*bp;
}
else{
ta=0;
}

netpay= bp + hra + ta; 

for(int i=0; i<len; i++){
printf("Name: %c",name[i]);
}
printf("Netpay: %f\n", netpay);
}


int main(){

int n;
printf("Enter the total number of employee(s): ");
scanf("%d",&n);
emp em[100];

for(int i=1; i<=n; i++){

printf("Enter name of employee[%d]: ",i);
scanf("%s",&em[i].name[100]);
//for(int j=0; j<100; j++){
//scanf("%c",&em[i].name[j]);
//}
printf("Enter wages/day: ");
scanf("%f",&em[i].wage);
printf("Number of days present for employee[%d]: ",i);
scanf("%d",&em[i].day);
}



for(int i=1; i<=n; i++){
//printf("Name: %s\n",em[i].name);
netpay(em[i].name,em[i].wage,em[i].day);
printf("\n");
}






return 0; 
}
