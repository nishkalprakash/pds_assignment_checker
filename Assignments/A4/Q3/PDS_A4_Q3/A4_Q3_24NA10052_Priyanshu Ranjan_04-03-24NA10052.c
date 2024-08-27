#include <stdio.h>
#include <math.h>
int main(){
	//initializing the values..
	int i,j,n,z;
	//taking inputs..
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	//creating loop for pyramid..
	for (i=0;i<n;++i){
	
		//creating spaces..
		for(j=n-i;j>0;--j){
			
			printf(" ");
			}
		for (z=0;z<n;++z){
			printf("%d",i+z);
		}
	
	printf("\n");
	
	
		
	
	}






}


