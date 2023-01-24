/* Name:Gaurav meena 
Roll no:22CE10025
Description : NET PAY TO TA
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct{
   char name[100];
   float wpd;
   float days;
   float BP;
   float HRA;
   float pay;
   float TA;

}data;

int main(){
	int n;
	int i;

	printf("Enter number of employees:");
	scanf("%d",&n);

	data a[n];

	for( i=0;i<n;i++){
	printf("Enter name:");
	scanf("%s",a[i].name);

	printf("Enter wage per day:");
	scanf("%f",&a[i].wpd);

	printf("Enter no of days present:");
	scanf("%f",&a[i].days);
	a[i].BP=a[i].wpd * a[i].days;

	if(a[i].BP<1000)
		a[i].HRA=0.12*a[i].BP;

	else
		a[i].HRA=0.20*a[i].BP;


    if(a[i].days>19)
    	a[i].TA=0.10*a[i].BP;
    else
    	a[i].TA=0;
    a[i].pay=a[i].BP + a[i].TA +a[i].HRA;
}
 for (i=0;i<n;i++){
 	printf("names:%s\n",a[i].name);
 	printf("NET pay:%f\n",a[i].pay);
 }


return 0;
}
