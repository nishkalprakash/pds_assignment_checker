#include<stdio.h>

float harmonic(int x){
	float temp=0,sum=0;
	

	//if (x==2){
	//	sum = 1.0;
//	}
	if(x>1){

		if(x==2){
           temp=1;
		}

	sum =  temp + 1.0/x + harmonic(x-1);
}



return (sum);
}

int main(){
	int n;
	float result;
	printf("Enter the number of terms upto which harmonic sum is needed\n");
	scanf("%d",&n);
 result = harmonic(n);
printf("The addition  is %f",result);
  return 0;
}