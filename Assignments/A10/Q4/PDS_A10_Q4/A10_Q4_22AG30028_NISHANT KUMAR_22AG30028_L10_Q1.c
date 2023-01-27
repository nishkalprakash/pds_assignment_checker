/* sec:- 14
   roll:- 22AG30028
   name:- NISHANT KUMAR
   assignment:10
   description:- question number 1
*/

#include <stdio.h>
#include <stdlib.h>



typedef struct emp {
char e_name[100];
int acc_num;
int balance;

}emp;
 

int main(){

int n;
printf("ENTER NUMBER OF EMPLOYEES( CUSTOMER )");
scanf("%d",&n);
emp arr[n];
// float bp,hr,ta,netsalary;

for(int i=0;i<n;i++){
printf("\nENTER NAME FOR e%d ",i+1);
scanf("%s",arr[i].e_name);
printf("\n ENTER account number of employ e%d ",i+1);
scanf("%d",&arr[i].acc_num);
printf("\n ENTER balance of employ e%d ",i+1);
scanf("%d",&arr[i].balance);


}

for(int i=0;i<n;i++){
printf("emp_name : %s\n",arr[i].e_name);
printf("emp_account number : %d\n",arr[i].acc_num);
printf("emp_balance : %d\n",arr[i].balance);
}

return 0;
} 



