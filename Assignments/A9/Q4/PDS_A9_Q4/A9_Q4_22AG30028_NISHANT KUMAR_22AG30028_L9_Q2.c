/* sec:- 14
   roll:- 22AG30028
   name:- NISHANT KUMAR
   assignment:-9
   description:- question number 2
*/

#include <stdio.h>
#include <stdlib.h>



typedef struct emp {
char e_name[100];
float wpd;
float days;
float netsalary;
}emp;
 

int main(){

int n;
printf("ENTER NUMBER OF EMPLOYEES");
scanf("%d",&n);
emp arr[n];
float bp,hr,ta,netsalary;

for(int i=0;i<n;i++){
printf("\nENTER NAME FOR e%d ",i+1);
scanf("%s",arr[i].e_name);
printf("\n ENTER WAGES e%d ",i+1);
scanf("%f",&arr[i].wpd);
printf("\n ENTER days e%d ",i+1);
scanf("%f",&arr[i].days);

bp=arr[i].wpd*arr[i].days;
if(bp<1000){
hr=.12*bp;
}
else{
hr=.2*bp;
}

if(arr[i].days>19){
ta=.1*bp;
}
else{
ta=0;
}
arr[i].netsalary=hr+bp+ta;
}

for(int i=0;i<n;i++){
printf("emp_name : %s\n",arr[i].e_name);
printf("emp_salary : %f\n",arr[i].netsalary);
}

return 0;
} 



