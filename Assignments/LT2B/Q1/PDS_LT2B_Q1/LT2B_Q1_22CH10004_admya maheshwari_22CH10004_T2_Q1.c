/*
Name           : Admya Maheshwari
Roll no.       : 22CH10004
Section        : 14
Lab test no.   : 2 set B
Discription    : compare 2 list and remove common element

*/

#include<stdio.h>
#include<stdlib.h>

typedef struct SET{
		    char data;
		    void *next;
	}SET;


int main(){

char L1[6];
char L2[6];
// taking 1st list as input
for(int i =0;i<3;i++){
	printf("enter element no %d of the string 1 :",i+1);
	scanf("%s",&L1[i]);


}

//taking 2nd list as input
for(int i =0;i<3;i++){
	printf("enter element no %d of the string 2 :",i+1);
	scanf("%s",&L2[i]);
}

//comparing the element of both list
for(int i =0;i<3;i++){
	for(int j=0;j<3;j++){

//printing the element which is not common that is L1-L2
		if(L1[i]==L2[j]){
			printf("%c",L1[i]);
}
					


}

}

	return 0;
}




