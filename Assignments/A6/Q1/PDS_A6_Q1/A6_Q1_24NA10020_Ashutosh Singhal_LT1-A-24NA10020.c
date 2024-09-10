//Name-Ashutosh Singhal
//Roll no:24NA10020
//Terminal No-21
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


int main()
{
int x1,x2,r;

float filter[10];

	srand(4);
for(int i=0;i<10;i++){
	//random number generator
	
	int x1=rand()%100 +1;
	
	int k1; float j1=0; float y1=0;
	
	for(k1=1;k1<=x1;k1++){
		if (k1%2==0){
		j1=((-1*k1*k1)/(2*k1 +1))+cos(x1/2);
		}
		else if (k1%2!=0){
		j1=((k1*k1)/(2*k1 +1))+cos(x1/2);
		}
		y1=y1+j1;
		}
	
	filter[i]=y1;
	}
for (int a=0;a<10;a++){
printf(" value of element %d in filter is %f \n",a+1,filter[a]);
}
int Bin_A[10];//
int Bin_B[10];
int s;
srand(6);
for (s=0;s<10;s++){
	//random number generator
	
	int x2=rand()%100 +1;
	
	int k2; int j2=0; int y2=0;
	for(k2=1;k2<=x2;k2++){
		if (k2%2==0){
		j2=((-1*k2*k2)/(2*k2 +1))+cos(x2/2);
		}
		else if (k2%2!=0){
		j2=((k2*k2)/(2*k2 +1))+cos(x2/2);
		}
		y2=y2+j2;
		}
		for(int i=0;i<10;i++){
		if (y2>filter[i]){
		Bin_A[i]=x2;
		break;
		
		}
		
		
		else if (y2<filter[i]){
		Bin_B[i]=x2;
		break;
		
		}
		
		
		
		
		
		
		}
		}
for (int a=0;a<10;a++){
printf(" value of element in bin A is %d\n",Bin_A[a]);
}
for (int a=0;a<10;a++){
printf(" value of element in bin B is %d\n",Bin_B[a]);
}
return 0;
}

	
		
		
	

		

		
		
		
	
	
	
	
	 


