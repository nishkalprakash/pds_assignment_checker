/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:7
problem:1
topic:structures
*/
#include<stdio.h>
#include<string.h>
// structure to store name ,wages per day,days' of a employee

typedef struct employee{
char name[20];
float wagespd;
int days;
}emp;
// function to calculate net pay

void Netpay(emp s){
float HRA,TA,SAL,BP;
 BP=s.wagespd * s.days;
if (BP<1000){ HRA=(float)(BP*12)/100;}
else { HRA=(float)(BP*20)/100;}
if (s.days>19) {TA=(float)(BP*10)/100;}
else {TA=0;}
SAL=BP+HRA+TA;
printf("Name:%s\n",s.name);
printf("Net pay :%f\n",SAL);
}

// main function

int main()
{
int n,i;
printf("enter the number of employess\n");
scanf("%d",&n);
emp arr[n];
for(i=0;i<n;i++){
printf("enter the name of employee number %d\n",i+1);
scanf("%s",arr[i].name);
printf("enter his wages per day\n");
scanf("%f",&arr[i].wagespd);
printf("enter number of days' present\n");
scanf("%d",&arr[i].days);
}

for(i=0;i<n;i++){
Netpay(arr[i]);   // calling the funcion netpay
}
return 0;
}




