// Name : Bhoomik Modi
// Roll No. : 23PH10013
#include <stdio.h>
#include <stdlib.h>
int main(){// Begining of function
	int ran,max=0;
        printf("The numbers are : \n");
	for(int i=0;i<=19;++i){
	ran=rand()%100;//To get the number in range
	ran += ran==0?1:0;//If 0 is generated to change it to 1
	printf("%d\n",ran);
	if (ran>max)
	max=ran;
	}
	printf("Maximum number generated is:  %d\n",max);
}// End of function
