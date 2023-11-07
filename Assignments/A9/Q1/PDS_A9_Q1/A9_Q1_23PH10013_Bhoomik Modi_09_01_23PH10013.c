//Name : Bhoomik MOdi
// Roll: 23PH10013

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void enrolStuds();
void entergrads();
void searchStuds();
void editStudGrades();
void modifyStudDetails();

struct student{
	char first_name[20];
	char last_name[20];
	char address[40];
	long long int mob_num;
	char sub[5];
	float gpa;
	int roll;
	int grade[5];
	};
struct student studArray[50];
int nStuds;
//fgets(str_name,size,stdin);
int main(){
	nStuds=0;
	while(1){
		printf("1.Enrol Student\n2.Enter Grade\n3.Display Students\n4.Search Students\n5.Edit Students\n6.Modify Student Details\nDisplay Merit List\n8.Exit program");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1: enrolStuds();
				break;
			case 2: entergrads();
				break;
			case 3:searchStuds();
				break;
			case 5:editStudGrades();
				break;
			case 6:modifyStudDetails();
				break;
			
		}
	}
	enrolStuds();	
	entergrads();
}


void enrolStuds(){
	printf("Enter the number of students : ");
	scanf("%d",&nStuds);
	fflush(stdin);
	char temp;
	for(int i=0;i<nStuds;i++)
		{
		printf("Enter the first name ");
		scanf("%s",studArray[i].first_name);
		printf("Enter the last name ");	
		scanf("%s",studArray[i].last_name);
		printf("Enter the address ");
		scanf("%c",&temp);
		fgets(studArray[i].address, 40, stdin);
		printf("Enter the mobile number ");
		scanf("%lld",&studArray[i].mob_num);
		studArray[i].roll=i+1;
		}
	for(int i=0;i<nStuds;i++)
	{
		printf("Entry of %d student\n",i+1);
		printf("firstName %s\nlast name %s\nRollnum %d \nAddress %smobile number %lld",studArray[i].first_name,studArray[i].last_name,studArray[i].roll,studArray[i].address,studArray[i].mob_num);
	}
	
	
}

void entergrads()
{ 	
	getchar();
	for(int i=0;i<nStuds;i++)
	{
		printf("\n\nRoll no. %d \nFirstName  %s  \nlast Name %s\n",studArray[i].roll,studArray[i].first_name,studArray[i].last_name);
		
		for(int j=0;j<5;j++)
		{
			printf("\nenter grade of subject %d  ",j+1);
			
	          	scanf("%c",&studArray[i].sub[j]);
			getchar();
			
			
			while(1){
			if ((studArray[i].sub[j]>=65 && studArray[i].sub[j]<=70) ||studArray[i].sub[j]=='P')
			break;
			else{
			printf("Inapt grade...Enter again ");
			scanf("%c",&studArray[i].sub[j]);
			getchar();
			}}
			{//conversiom
				if(studArray[i].sub[j]=='E')
					studArray[i].grade[j]=10;
				if(studArray[i].sub[j]=='A')
					studArray[i].grade[j]=9;
				if(studArray[i].sub[j]=='B')
					studArray[i].grade[j]=8;
				if(studArray[i].sub[j]=='C')
					studArray[i].grade[j]=7;		
				if(studArray[i].sub[j]=='D')
					studArray[i].grade[j]=6;
				if(studArray[i].sub[j]=='P')
					studArray[i].grade[j]=5;
				if(studArray[i].sub[j]=='F')
					studArray[i].grade[j]=0;				

			}
			
		}
		//printf("%s\n", studArray[i].sub);
		
	}
	for(int i=0;i<nStuds;i++)
	{
		studArray[i].gpa = 0;
		for(int j=0;j<5;j++)
			{
				studArray[i].gpa+=studArray[i].grade[j];	
			}
		
		studArray[i].gpa/=5;
		printf("\n\nfirstName %s\nlast name %s\nRollnum %d \nAddress %smobile number %lld\nCGPA   %f",studArray[i].first_name,studArray[i].last_name,studArray[i].roll,studArray[i].address,studArray[i].mob_num,studArray[i].gpa);
	}
}
	
void searchStuds(){
	int flag=0;		
	char search[20];
	printf("Enter a String:\n");
	scanf("%s",search);
	for(int i=0;i<nStuds;i++){
	if(strcasecmp(studArray[i].first_name,search)==0)
		{
		printf("firstName %s\nlast name %s\nRollnum %d \nAddress %smobile number %lld",studArray[i].first_name,studArray[i].last_name,studArray[i].roll,studArray[i].address,studArray[i].mob_num);
		break;
		flag+=1;	
		}
	if(strcasecmp(studArray[i].last_name,search)==0)
		{
		printf("firstName %s\nlast name %s\nRollnum %d \nAddress %smobile number %lld",studArray[i].first_name,studArray[i].last_name,studArray[i].roll,studArray[i].address,studArray[i].mob_num);
		break;
		flag+=1;	
		}
	}
	if (flag)
	printf("Not found");
}
void editStudGrades(){
	int roll;
	printf("Enter the roll number");
	scanf("%d",&roll);
	for(int i=0;i<nStuds;i++)
	{
		if(studArray[i].roll== roll)
		{
		printf("\n\nfirstName %s\nlast name %s\nRollnum %d \nAddress %smobile number %lld\nCGPA   %f\n\n%s",studArray[i].first_name,studArray[i].last_name,studArray[i].roll,studArray[i].address,studArray[i].mob_num,studArray[i].gpa,studArray[i].sub);
		printf("Enter the updated grade");
			for(int j=0;j<5;j++)
			{
				printf("\nenter grade of subject %d  ",j+1);
				
			  	scanf("%c",&studArray[i].sub[j]);
				getchar();
				
				
				while(1){
				if ((studArray[i].sub[j]>=65 && studArray[i].sub[j]<=70) ||studArray[i].sub[j]=='P')
				break;
				else{
				printf("Inapt grade...Enter again ");
				scanf("%c",&studArray[i].sub[j]);
				getchar();
				}}
				{//conversiom
					if(studArray[i].sub[j]=='E')
						studArray[i].grade[j]=10;
					if(studArray[i].sub[j]=='A')
						studArray[i].grade[j]=9;
					if(studArray[i].sub[j]=='B')
						studArray[i].grade[j]=8;
					if(studArray[i].sub[j]=='C')
						studArray[i].grade[j]=7;		
					if(studArray[i].sub[j]=='D')
						studArray[i].grade[j]=6;
					if(studArray[i].sub[j]=='P')
						studArray[i].grade[j]=5;
					if(studArray[i].sub[j]=='F')
						studArray[i].grade[j]=0;				

				}
				
			}
			//printf("%s\n", studArray[i].sub);
			studArray[i].gpa = 0;
		for(int j=0;j<5;j++)
			{
				studArray[i].gpa+=studArray[i].grade[j];	
			}
		
		studArray[i].gpa/=5;
		printf("\n\nfirstName %s\nlast name %s\nRollnum %d \nAddress %smobile number %lld\nCGPA   %f\n\n%s",studArray[i].first_name,studArray[i].last_name,studArray[i].roll,studArray[i].address,studArray[i].mob_num,studArray[i].gpa,studArray[i].sub);
		break;
		}
	
	}
}

void modifyStudDetails(){
	int roll;
	printf("Enter the roll number");
	scanf("%d",&roll);
	for(int i=0;i<nStuds;i++)
		{
			if(studArray[i].roll== roll)
				{
					printf("firstName %s\nlast name %s\nRollnum %d \nAddress %smobile number %lld",studArray[i].first_name,studArray[i].last_name,studArray[i].roll,studArray[i].address,studArray[i].mob_num);		
					printf("Enter the new address ");
					getchar();
					fgets(studArray[i].address, 40, stdin);
					printf("Enter the new mobile number ");
					scanf("%lld",&studArray[i].mob_num);					


				}
		}	
}


