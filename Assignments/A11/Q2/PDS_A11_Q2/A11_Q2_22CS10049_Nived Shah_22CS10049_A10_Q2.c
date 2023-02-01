/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. : 10
Description: Check duplicate, max and min
*/
#include <stdio.h>
#include <stdlib.h>
struct list{
	int d;
	struct list *next;
};
typedef struct list ELEMENT;

void sort(int a[], int n){
	int temp;
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i; j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

int main(){
	int l;
	ELEMENT *head=NULL;
	ELEMENT *tail;
	printf("Enter the total number of elements = ");
	scanf("%d", &l);
	int a[l+1];
	for(int i=0; i<l;i++)
		scanf("%d", &a[i]);
	a[l]=-99999;

	head=malloc(sizeof(ELEMENT));
	head->d=a[0];
	tail=head;
	for(int i=1; a[i]!=-99999;i++){
		tail->next=malloc(sizeof(ELEMENT));
		tail=tail->next;
		tail->d=a[i];
	}
	tail->next=NULL;

	int max=(head->d);
	int min=(head->d);
	int c[l];
	for(int i=0; i<l;i++)
		c[i]=-999999;
	ELEMENT *temp2, *temp3;
	temp2=head;
	for(int i=0; temp2!=NULL; temp2=temp2->next){
		if((temp2->d)>max)
			max=(temp2->d);
		if((temp2->d)<min)
			min=(temp2->d);
		temp3=head;
		int count=0;
		for(int i=0; temp3!=NULL; i++){
			if((temp2->d) == temp3->d){
				count++;
			}
			temp3=temp3->next;
		}
		if(count>1){
			c[i]=temp2->d;
		}
		i++;
	}
	printf("The input list contains duplicate numbers of: ");
	int i=0;
	sort(c,l);
	while(i<l){
		int count=0;
		if(c[i]!=-999999){
			for(int j=0; j<l; j+=1){
				if(c[i]==c[j]){
					count++;
				}
			}
			if(count>1)
				printf("%d ", c[i]);
			i=i+count;
		}
		i++;
	}
	printf("\nMaximum number is: %d", max);
	printf("\nMinimum number is: %d\n", min);
	return 0;
}