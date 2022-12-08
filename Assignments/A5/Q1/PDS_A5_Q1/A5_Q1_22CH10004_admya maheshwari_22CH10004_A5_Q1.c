/*
  section           :14
  Roll No.          :22CH10004
  Name              :Admya Maheshwari
  Assignment no .   :5
  Description       :a C code to to find the sum of the function given
*/

#include<stdio.h>
int prod =1;
int factorial = 1;
int power(int x ,int n);
int fact(int n);
int power(int x ,int n){
//for finding the value of  x^n
		for (int i=0;i<=n;i++){
					prod=prod*x;
					} 
				return prod;
			}
int fact(int n){
//for finding the value of factorial n!
		for(int i=1;i<=n;i++){
		factorial*=i;
		}
		return factorial;

		}

int main(){

	//for finding the sum of the series given
	int x,n;
	printf("enter x and n :");
	scanf("%d %d",&x,&n);
	float sum = 0;
	
	for(int i=1;i<=n;i++){
			sum = sum +(power(x,n)/fact(i));
			}
	printf("%f",sum);

return 0;
}	












	
