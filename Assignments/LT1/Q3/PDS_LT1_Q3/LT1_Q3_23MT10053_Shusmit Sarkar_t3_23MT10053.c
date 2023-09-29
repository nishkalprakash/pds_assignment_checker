#include<stdio.h>
int main(){
	int s;
	int n;
	int x = 1;
	printf("Enter scale factor between [1,6]: ");
	scanf("%d",&s);
	printf("\n");
	printf("Enter number of lines [1,10]: ");
	scanf("%d",&n);
	printf("\n");
        if( s<1 || s>6 || n<1 || n>10 ) printf("Error");
 	else{
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++) { 
					
						printf("%d",x); 
						x++;
						if(x > (s+3) ) x = 1;

	}					
        printf("\n");
	}
	}
 	return 0;
}
