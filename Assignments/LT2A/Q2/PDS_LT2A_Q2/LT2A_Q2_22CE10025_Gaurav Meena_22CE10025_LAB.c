/*name-gaurav meena
rolll no-22CE10025
LAB TEST-2*/

#include<stdio.h>
#include<stdlib.h>

typedef struct SET{
	int data;
	 struct SET *next;
}SET;







int main(){

	int a;
	int b;
	

	printf("Enter a:");
	scanf("%d",&a);

	printf("Enter b:");
	scanf("%d",&b);

	int p[a];
	int q[b];
    
    printf("Enter list 1:");
	for(int i=0;i<a;i++){
		scanf("%d",&p[i]);
	}
 

 printf("Enter list 2:");

	for(int j=0;j<b;j++){
		scanf("%d",&q[j]);
	}







return 0;
}

