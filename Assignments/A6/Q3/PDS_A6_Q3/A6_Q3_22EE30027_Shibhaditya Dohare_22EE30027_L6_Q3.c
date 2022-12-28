/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 6
Discription : To merge 2 arrays 
*/
#include<stdio.h>
#include<stdlib.h>
int *Merge(int size1,int size2, int *ptr1,int *ptr2){
	int size=size1+size2,*ptr,k=0,j=0;
	ptr=(int *)malloc(size*sizeof(int));
	int i;
	for(i=0;i<size;i++){
        if(i<size1) ptr[i]=ptr1[i];
        else if(i>=size1) ptr[i]=ptr2[i-size1];
	}
	return ptr;
}
int main(){
	int size1,size2,*ptr1,*ptr2,i;
	printf("Input size:");
	scanf("%d",&size1);
	printf("Input values:");
	ptr1=(int *)malloc(size1*sizeof(int));
	for(i=0;i<size1;i++) scanf("%d",&ptr1[i]);
	printf("Input size:");
	scanf("%d",&size2);
	printf("Input values:");
	ptr2=(int *)malloc(size2*sizeof(int));
	for(i=0;i<size2;i++) scanf("%d",&ptr2[i]);
	printf("\nA =");for(i=0;i<size1;i++) printf(" %d", ptr1[i]);
	printf("\nB =");for(i=0;i<size2;i++) printf(" %d", ptr2[i]);
	printf("\nC =");
	int*m=Merge(size1,size2,ptr1,ptr2);
	for(i=0;i<size1+size2;i++) printf(" %d",m[i]);
	printf("\n%d\n",size1+size2);

return 0;
}
