/* Section 14
   Muskan
   Lab- 9
   Roll No.- 22ME30042
*/
#include<stdio.h>
  
typedef struct employee{
              char name[10];
              int w_day;         /*wages per day*/
              int pre_day;   /*present day*/
            }empl;
empl w1;
   


void netpay(empl arr[])
{
 int BP=w_day*pre_day;
 int HRA,TA;
 if(BP<1000)
 {
  HRA=.12*BP;
}
else{
      HRA=.2*BP;
      } 
if(pre_day>19)
{
 TA=.1*BP;
}
else{
     TA=0;
}

float netsalary=BP+HRA+TA;
printf("name: %s",name);
printf("Netpay: %f",netsalary);
} 






int main()
{
  int n;
 printf("Enter the number of employee\n");
 scanf("%d\n",&n);empl arr[n]
 empl arr[n];
 for(int i=0;i<n;i++)
{
  
	printf("Enter the name of employee\n");
	scanf("%s",arr[i].name);
	printf("Enter wages per day\n");
	scanf("%d",&arr[i].w_day);
	printf("Number of days present for employee\n");
	scanf("%d",&arr[i].pre_day);
	netpay(arr);
}
return 0;
}





 







              
