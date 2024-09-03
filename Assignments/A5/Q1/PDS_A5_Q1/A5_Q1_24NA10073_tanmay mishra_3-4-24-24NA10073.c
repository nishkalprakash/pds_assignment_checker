/*code creator: tanmay mishra 24Na10073
logic = 2 pointer approach (swapping)
*/
#include<stdio.h>

int main(){


int array[100];//initialisation
int n,z=0;
printf("enter number of input :");
scanf("%d",&n);

	if(n>100)
		printf("ERROR n>100");        // for giving error 
	for(int i=0;i<n;i++){
	scanf("%d", &array[i]);
	}
	printf("original array :");          //for printing given numbers as they are given
	for(int i=0;i<n;i++)
	{
		printf("%d",array[i]);
	}
	while(z<n)
	for(int i=0;i<n;i++)
	{
		if(array[i]>=0 && array[i+1]<0){
			int temp;                //defining the array
			temp=array[i+1];
			array[i+1]=array[i];
			array[i]=temp;
			
		}
		else 
			z=z+1;
		
}

printf("rearranged array :");
for(int i=0;i<n;i++){
printf("%d", array[i]);
		
	}





return 0;
}
