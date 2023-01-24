/*Name:P.Sri Harsha Vardhan
Roll no:22MA10040
assignment:9
program 4
 */
#include <stdio.h>
typedef struct{
char name[20];
int wages_perday;
int no_of days;
}emp_details;
void netpay(char*,int,int);
void netpay(char nam[20],int wage,int days){
int BP;
float HRA,TA;
BP=wage*days;
if (BP<1000) HRA=0.12*BP;
else HRA=0.2*BP;
if(days>19) TA=0.1*BP;
else TA=0;
printf("Name:%s\nnetpay=%f\n",nam,BP+TA+HRA);
}
int main()
int no_ofemp;
emp_details
emps[no_ofemp];
scanf("%d",&no_ofemp);
printf("Name wage days:\n");
for(int i=0;i<no_ofemp;i++){
scanf("%s %d %d",emps[i]name,&ems[i].wages_perday,&ems[i].no_ofdays);
}
for(int i=0;i<no_ofemp;i++){
netpay(emps[i],name,&ems[i].wages_perday,&ems[i].no_ofdays);
printf("\n");
}
return 0;
}
