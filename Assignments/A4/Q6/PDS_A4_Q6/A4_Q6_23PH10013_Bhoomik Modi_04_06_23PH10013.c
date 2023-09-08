// Name : Bhoomik Modi
// Roll No. : 23PH10013
#include <stdio.h>
#include <stdlib.h>
int main(){// Beginning of function
	int ran,min_sum=100,n,sum=0,d,min_num;
        printf("Num\tsum \n");
	for(int i=0;i<=19;++i){// Beginning of loop
	ran=rand()%1000+5000;//To get the number in range
	n=ran;// copy variable
	// calculating sum of number
	while(n!=0){
		d=n%10;
		sum+=d;
		n/=10;
		}
	printf("%d\t%d\n",ran,sum);
	if (sum<min_sum){
		min_sum=sum;
		min_num=ran;
		}
	sum=0;
	}
	printf("The number with minimum sum of digit is %d and the sum of digit is %d\n",min_num,min_sum);
}// End of function
