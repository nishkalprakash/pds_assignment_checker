#include<stdio.h>
int main(){
int row,i;
printf("enter the row ");
scanf("%d",&row);
for(int i=1;i<=row;i++){
	for(int j=1;j<=i;j++){
		if (j%2==0){
			printf("0");
		}
		else{
			printf("1");
		}
	}
	printf("\n");
}
return 0;
}


