/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Lab Test 2,Question:4
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10000



  // structure to store multiple data types and data
typedef struct _Student {
	char name[100];
	char gender[10];
	double marks;
} Student;


//function  which takes user input to store data
void populate(Student students[],int n){
	int i;
	for(i = 0;i < n;i++){
		printf("Enter Details of %dth student:\n",i+1);
		printf("Enter Name:");
		scanf("%s",students[i].name);
		printf("Enter Gender:");
		scanf("%s",students[i].gender);
		printf("Enter Marks:");
		scanf("%lf",&students[i].marks);
	}
}


//fucntion which prints all the input data in tabular form
void print(Student students[],int n){
	printf("\nPrinting the student records..\n");
	printf("Name\tGender\tMarks\n");
	int i;
	for(i = 0; i < n;i++){
		printf("%s\t%s\t%lf\n",students[i].name,students[i].gender,students[i].marks);
	}

}



   //function which compares marks of girl students and prints it
void bestGirlStudent(Student students[],int n){
	int i;
	int maxIndex = -1;
	for(i = 1;i < n;i++){
		if(students[i].gender[0] == 'g' || students[i].gender[0] == 'G'){
			if(maxIndex == -1){
				maxIndex = i;
			} else {
				if(students[maxIndex].marks < students[i].marks)
					maxIndex = i;
			}
		}
	}
	printf("\nBest Girl Student: %s\n",students[maxIndex].name);
}

int main(){
	Student students[MAX];
	int n;
	printf("Enter Number of Students:"); //main function
	scanf("%d",&n);
	populate(students,n);
	print(students,n);
	bestGirlStudent(students,n);
	return 0;
}


