/*
SATYA PRAKASH NANDA
SECTION 14
22AG10041
LAB 10
QUESTION 1
*/
#include<stdio.h>
typedef struct employee{
	char name[100];
	int wage;
	int days;
}emp;
float netpay(int wage, int days);  // function declaration
int main(){
int n;
printf("enter total no of employees:");
scanf("%d", &n);
emp arr[n];
for(int i=0; i<n; i++){
printf("enter employee name:");
scanf("%s", arr[i].name);
printf("enter wage:");         			// input of employee data 
scanf("%d", &arr[i].wage);
printf("number of days present for employee:");
scanf("%d", &arr[i].days);
}
for(int i=0; i<n ; i++){
	printf("name=%s\n",arr[i].name);
	printf("net salary =%.2f\n",netpay(arr[i].wage, arr[i].days));
}

return 0;
}

float netpay(int wage, int days){  // function to calculate net salary
float bp= wage*days;
float hra, ta, netsalary;
if(bp<1000){hra=0.12*bp;}
else{hra=0.2*bp;}

if(days>19){
	ta=0.1*bp;
}
else{
	ta=0;
}

netsalary=bp+hra+ta;

return netsalary;
}
