//name amrita singh
//roll no 24na10014
//lab test 
//set a
//upto 1 d array
//terminal 15
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main(){
	int n=5,a=3,b=3;
	float y;
	float sum=0;
	
	float filter[n];
	float bin_a[a];
	float bin_b[b];
	int p=0;
	int q=0;
	int i;
	//generate a random num
	for( int j=0;j<n;j++){ //generation for n numbers
		//srand(41);
		int x=rand()%100+1;
		printf("random number(x): %d \n",x);
		
		//to get y
		for(int i=1;i<=x;i++){
			y=((pow(-1,i+1)*i*i)/(2*i+1))+cos(i/2);
			sum=sum+y;
			filter[j]=sum;}
		printf("the value of y is %f\n",sum);
		//filter[j]=y;
		}  //value entered in the array filter
		printf("\nthe filter array is:\n");
		for(int i=0;i<n;i++)
		printf(" %f ",filter[i]);
	
		
	//entering values to bin_a
	//printf("\nentering to the while loop\n");
	while(1){
		//srand(42);
		int x=rand()%100+1;
		printf("\nrandom number(x): %d \n",x);
		
		y=((pow(-1,x+1)*x*x)/(2*x+1))+cos(x/2);
		printf("%f \n",y);
		//to check the condition of filling
		int flag=0;int check=0;
		for (int i=0;i<n;i++){
			if(y>filter[i])
			flag++;
			if(flag==n)
			
			bin_a[p]=y;
			
			
			}
			
		for (int i=0;i<n;i++){
			if(y<filter[i])
			check++;
			if(check==n)
			bin_b[q]=y;
			}
		//limiting the while loop
		if(p>=a || q>=b)
		break;
		else {p++;q++;}
		printf("\n");}
		
	//printing the values pf the arrays
	printf("\nthe filter array is:\n");
	for(int i=0;i<n;i++)
	printf(" %f ",filter[i]);
	
	printf("\nthe bin_a array is:");
	for(int i=0;i<a;i++)
	printf("%f ,",bin_a[i]);
	
	printf("\nthe bin_b array is:");
	for(int i=0;i<b;i++)
	printf("%f ,",bin_b[i]);
	
	
	
	return 0;}
		
			
		
		
	
