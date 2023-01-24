#include<stdio.h>

struct employee{
	char name[20];
	int wage;
	int days;
};

int main(){
	int n;
	printf("Enter the number of employee(s)");
	scanf("%d", &n);
	struct employee E[n];//creaiting an array for the structure
	printf("Name:\nWage:\nDays:\n");
	for(int i=0; i<n; i++){//taking input for the given structure
		scanf("%s", E[i].name);
		scanf("%d", &E[i].wage);
		scanf("%d", &E[i].days);
	}
	for(int i=0; i<n; i++){//formulating output for the given input 
		float nw=0;//netwage
		nw=E[i].wage*E[i].days;
		float bp=nw;//basepay
		if(nw>1000){
			nw=1.2*nw;
		}
		else{
			nw=1.12*nw;
		}
		if (E[i].days>19){
			nw=nw+0.1*bp;
		}
		printf("Name : %s\n", E[i].name);
		printf("Net Wage : %f\n", nw);

	}
	return 0;



	
}