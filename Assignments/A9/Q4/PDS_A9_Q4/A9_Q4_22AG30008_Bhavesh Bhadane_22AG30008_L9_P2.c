#include<stdio.h>

struct employee {
	char name[10];
	int wages ;
	int days;
};




int main(){
	int n,i;
	printf("Enter the number of employees");
	scanf("%d",&n);
	struct employee en[n];
	
	for(i=0;i<n;i++){
		printf("Enter name wage days:");
		scanf("%s %d %d",en[i].name,&en[i].wages,&en[i].days);
	}

	for(i=0;i<n;i++){
		   printf("%s\n",en[i].name);
           netpay(en,i);
	}

	return 0;
}

int netpay(struct employee en[],int i)
{
	
	float BP=en[i].wages * en[i].days;
	float HRA,TA;
if (BP<1000){
	HRA=0.12*BP;
}
if (BP>1000) {
	HRA=0.2*BP;
}

if (en[i].days>19){
	TA = 0.1 *BP;
}

if(en[i].days<19) {
	TA =0;

}

float netsalary=BP+HRA+TA ;

printf("Net salary is %lf",netsalary);
return 0;
}
