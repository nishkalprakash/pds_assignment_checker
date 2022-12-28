/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 6
Discription : To find co prime pairs 
*/
#include<stdio.h>
#include<stdlib.h>
int *In(int size1,int size2, int *ptr1,int *ptr2){
	int *ptr,k=0,j=0,i=0;
	 for(j=0;j<size1;j++){
		for(k=0;k<size2;k++){
			if(ptr1[j]==ptr2[k]) i++;
		}
	}
	ptr=(int *)malloc(i*sizeof(int));
	i=0;
        for(j=0;j<size1;j++){
		for(k=0;k<size2;k++){
			if(ptr1[j]==ptr2[k]) {ptr[i]=ptr1[j];i++;}
		}
	}
	return ptr;
}
int main(){
	int size1,size2,*ptr1,*ptr2,i,z,k,j;
	printf("Input size of set A:");
	scanf("%d",&size1);
	printf("Input values:");
	ptr1=(int *)malloc(size1*sizeof(int));
	for(i=0;i<size1;i++) scanf("%d",&ptr1[i]);
	printf("Input size of set B:");
	scanf("%d",&size2);
	printf("Input values:");
	ptr2=(int *)malloc(size2*sizeof(int));
	for(i=0;i<size2;i++) scanf("%d",&ptr2[i]);
	int*m=In(size1,size2,ptr1,ptr2);
	printf("Intersection:");
	for(j=0;j<size1;j++){
		for(k=0;k<size2;k++){
			if(ptr1[j]==ptr2[k]) i++;
			z=i;
		}
	}
	for(i=0;i<z;i++) printf(" %d",m[i]);

return 0;
}
