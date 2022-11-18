/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/

#include<stdio.h>
#define MAX 100

struct Student{
	char name[30];
	char gender[5];
	float marks;
};

int main(){
	//Student Array
	struct Student arr[MAX];
	int i,n;
	//Number of Students
	printf("Enter the number of students: ");
	scanf("%d",&n);
	//Student details
	printf("Enter the student details:\n");
	for(i=0;i<n;i++){
		getchar();
		printf("Enter name: ");
		scanf("%[^\n]s",arr[i].name);
		printf("Enter gender: ");
		scanf("%s",arr[i].gender);
		printf("Enter marks: ");
		scanf("%f",&arr[i].marks);
	}
	printf("\nPrinting the student records...\n\n");
	int res=-1;
	//Printing and finding best girl student
	for(i=0;i<n;i++){
		printf("%s   %s - %f\n",arr[i].name,arr[i].gender,arr[i].marks);
		if(arr[i].gender[0]=='g'){
			if(res==-1){
				res=i;
			}
			else{
				if(arr[i].marks>arr[res].marks){
					res=i;
				}
			}
		}
	}
	printf("\nBest girl student: %s\n",arr[res].name);
}
