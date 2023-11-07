#include <stdio.h>
#include<stdlib.h>
#include<string.h>


	typedef struct student{
	char first_name[20];
	char last_name[20];
	char address[40];
	unsigned int mobile_number;
	char grade[5];
	float gpa;	 
	} s;
        s studArray[50];                      //global structure end    //global array
	int nstuds;
	
	int enrolStuds(){
	int roll_number[50];
	printf("enter the number of  student ");
	scanf("%d",&nstuds);
	for(int i=0; i<nstuds;i++){
	printf("enter the first name of student ");
	scanf("%s",studArray[i].first_name);
	printf("enter the last name of student ");
	scanf("%s",studArray[i].last_name);
	printf("enter the address of student ");
	scanf("%s",studArray[i].address);
	printf("enter the mobile number of student ");
	scanf("%u",&studArray[i].mobile_number);
	roll_number[i]=i+1;
	}
	for(int i=0; i<nstuds;i++){
	printf("name=%s %s roll number= %d address=%s mobile number=%d\n",studArray[i].first_name,studArray[i].last_name,roll_number[i],studArray[i].address,studArray[i].mobile_number);
	}

	}
	int enterGrades(){
	printf("enter the grad of the student a letter grads can be any (E ,A,,C,D,P or F)");
	for(int i=0;i<nstuds;i++){
	printf(" enter the grade of student name=%s %s roll number= %d \n\n",studArray[i].first_name,studArray[i].last_name,i+1);
	for(int j=0;j<5;j++)
	{scanf(" %c",&studArray[i].grade[j]);
	if (studArray[i].grade[j]=='A');
	else if (studArray[i].grade[j]=='B');
	else if (studArray[i].grade[j]=='C');
	else if (studArray[i].grade[j]=='D');
	else if (studArray[i].grade[j]=='E');
	else if (studArray[i].grade[j]=='P');
	else if (studArray[i].grade[j]=='F');
	else{ 
	printf("wrong input put again");
        j--;
	}
	
	}
	}
	}
	int displayStuds(){}
	int searchStuds(){}
	int editStudGrades(){}
	int modifyStudDetial(){}
	int dispMeritList() {}

	int main(){
	nstuds=0;
	int num;
	while(1){
	
	printf("1. Enroll student\n 2. enter grade\n3.display students\n4.search student\n5. Edit student grades\n6. Modify student detials\n7.display merit list\n8. exit the program");
	printf("enter the number between 1 to 8 ");
	scanf("%d",&num);
	switch(num){
	case 1 : enrolStuds();
break;
	case 2 : enterGrades();
break;	
case 3 : displayStuds();
break;	
case 4 : searchStuds();
break;	
case 5 : editStudGrades();
	
break;
case 6 : modifyStudDetial();
break;
	case 7 : dispMeritList();
break;
case 8: printf("Terminated"); return 0;
	
	
	}

	}






	}
