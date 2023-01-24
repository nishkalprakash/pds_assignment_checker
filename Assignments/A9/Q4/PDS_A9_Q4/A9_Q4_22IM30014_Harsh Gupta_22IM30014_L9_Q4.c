/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 9
Description - 
*/
#include <stdio.h>
struct employeep {                        // creating structure for employee
	char name[100];
	int wage;
	int days;
};
double bp;
double netpay(int days,int wage){                          // creating a func to return the netpay
	bp = wage*days;
	double hra;
	if (bp<1000) hra = 0.12*bp;
	else hra=0.20*bp;
	if (days>19) bp = bp + 0.10 * bp;

	return bp+hra;

}	
int main(){             
	int n;scanf("%d",&n);
	struct employeep employee[n];                                
    for (int i=0;i<n;i++){                                        // taking all employee data input 
    	scanf("%s",employee[i].name);
    	scanf("%d",&employee[i].wage);
    	scanf("%d",&employee[i].days);
    }
    
    for (int i=0;i<n;i++){                                        // passing each employee details to netpay func 
    	printf("Name : %s",employee[i].name);
    	printf("\n");                                                  // and printing them
    	printf("Netpay : %0.3lf",netpay(employee[i].days,employee[i].wage));
    	printf("\n");
    }



    return 0;
}
