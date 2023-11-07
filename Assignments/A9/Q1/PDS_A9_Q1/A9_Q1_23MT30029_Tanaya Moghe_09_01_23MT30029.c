//Roll no:<23MT30029>
//Name:<Tanaya Moghe>

#include <stdio.h>
#include <string.h>

struct student {
	char firstname[20];
	char lastname[20];
	char address[40];
	long int mobile;
	char grades[5];
	float gpa;
	};

struct student studArray[50];

int nstuds;

void enrolStuds()
{
	int i;
	int roll[200];
	printf("Enter number of students\n");
	scanf("%d", &nstuds);
	for( i=0; i<nstuds; i++)
	{
		printf("Enter Student's first name\n");
		scanf("%s", studArray[i].firstname);
		printf("Enter Student's last name\n");
		scanf("%s", studArray[i].lastname);
		getchar();
		printf("Enter Student's address\n");
		fgets(studArray[i].address, 40, stdin);
		printf("Enter Student's mobile number\n");
		scanf("%ld", &studArray[i].mobile);
		roll[i]=i+1;
	}
	for( i=0; i<nstuds; i++)
	{
		printf("Student's first name:%s \n", studArray[i].firstname);
		printf("Student's last name:%s \n", studArray[i].lastname);
		printf("Student's address:%s \n", studArray[i].address);
		printf("Student's mobile:%ld \n", studArray[i].mobile);
		printf("Student's Roll number:%d\n", roll[i]);
	}
	return;
}

void enterGrades()
{
int i,j,k,sum=0;
float mean;
for( i=0; i<nstuds; i++)
{
	printf("Student's first name:%s \n", studArray[i].firstname);
	printf("Student's last name:%s \n", studArray[i].lastname);
	printf("Student's Roll number:%d\n", i+1);
	for(j=0; j<5; j++)
	{
		printf("Enter Grade for subject %d\n", j+1);
		getchar();
		scanf("%c", &studArray[i].grades[j]);
		if(studArray[i].grades[j]=='E') k=10;
		else if(studArray[i].grades[j]=='A') k=9;
		else if(studArray[i].grades[j]=='B') k=8;
		else if(studArray[i].grades[j]=='C') k=7;
		else if(studArray[i].grades[j]=='D') k=6;
		else if(studArray[i].grades[j]=='P') k=5;
		else if(studArray[i].grades[j]=='F') k=0;
				
		sum= sum+k;
	}
	mean= (float)sum/5;
	studArray[i].gpa= mean;
}
for( i=0; i<nstuds; i++)
{
	printf("Student's first name:%s \n", studArray[i].firstname);
	printf("Student's last name:%s \n", studArray[i].lastname);
	printf("Student's Roll number:%d\n", i+1);
	printf("Student's GPA:%f\n",studArray[i].gpa );	
}
return;
}		
				
void modifyStudDetails()
{
	int a,b;
	printf("Enter Student roll no\n");
	scanf("%d", &a);
	b=a-1;
	printf("Student's first name:%s \n", studArray[b].firstname);
	printf("Student's last name:%s \n", studArray[b].lastname);
	printf("Student's address:%s \n", studArray[b].address);
	printf("Student's mobile:%ld \n", studArray[b].mobile);
	printf("Enter Student's new mobile number\n");
	scanf("%ld", &studArray[b].mobile);
	getchar();
	printf("Enter Student's new address\n");
	fgets(studArray[b].address, 40, stdin);
	printf("Student's first name:%s \n", studArray[b].firstname);
	printf("Student's last name:%s \n", studArray[b].lastname);
	printf("Student's new address:%s \n", studArray[b].address);
	printf("Student's new mobile:%ld \n", studArray[b].mobile);
}


void editStudGrades()
{
	int a,j,b,k,sum=0;
	float mean;
	printf("Enter Student roll no\n");
	scanf("%d", &a);
	b=a-1;
	printf("Student's first name:%s \n", studArray[b].firstname);
	printf("Student's last name:%s \n", studArray[b].lastname);
	printf("Student's address:%s \n", studArray[b].address);
	printf("Student's mobile:%ld \n", studArray[b].mobile);
	printf("Student's GPA:%f\n",studArray[b].gpa );
	for(j=0; j<5; j++)
	{
		printf("Subject %d grade= %c\n", j+1, studArray[b].grades[j]);
	}
	for(j=0; j<5; j++)
	{
		printf("Enter Updated Grade for subject %d\n", j+1);
		getchar();
		scanf("%c", &studArray[b].grades[j]);
		if(studArray[b].grades[j]=='E') k=10;
		else if(studArray[b].grades[j]=='A') k=9;
		else if(studArray[b].grades[j]=='B') k=8;
		else if(studArray[b].grades[j]=='C') k=7;
		else if(studArray[b].grades[j]=='D') k=6;
		else if(studArray[b].grades[j]=='P') k=5;
		else if(studArray[b].grades[j]=='F') k=0;
		sum+=k;
	}
	mean= (float)sum/5;
	studArray[b].gpa= mean;
	printf("Student's first name:%s \n", studArray[b].firstname);
	printf("Student's last name:%s \n", studArray[b].lastname);
	printf("Student's Updated GPA:%f\n",studArray[b].gpa );	
return;
}		


void searchStuds()
{
	int i;
	char str[20]; 
	printf("Enter student first name/last name\n");
	scanf("%s", str);
	getchar();
	for(i=0; i<nstuds; i++)
	{
		strcasecmp(str,studArray[i].firstname);
		strcasecmp(str,studArray[i].lastname);
		if(strcasecmp(str,studArray[i].firstname)==0 || strcasecmp(str,studArray[i].lastname)==0)
		{
			printf("Student's first name:%s \n", studArray[i].firstname);
			printf("Student's last name:%s \n", studArray[i].lastname);
			printf("Student's Updated GPA:%f\n",studArray[i].gpa );	
			printf("Student's mobile:%ld \n", studArray[i].mobile);
			printf("Student's Roll number:%d\n", i+1);
		}
	}
	return;
}




				

int main()
{
	int k;
	nstuds=0;
	printf("User Menu:\n");
		printf("1 - Enrol Student\n");
		printf("2 - Enter grade\n");
		printf("3 - Display Students\n");
		printf("4 - Search Student\n");
		printf("5 - Edit Student Grades\n");
		printf("6 - Modify Search Details\n");
		printf("7 - Display Merit List\n");
		printf("8 - Exit the Program\n");
		while(1)	
		{
			printf("Enter your choice\n");
			scanf("%d", &k);
			if(k>0 && k<8){
			switch(k){
				case(1):{ enrolStuds();
					break;}
				case(2):{ enterGrades();
					break;}
				//case(3):{ displayStuds();
					//break;}
				case(4):{searchStuds();
					break;}
				case(5):{ editStudGrades();
					break;}
				case(6):{ modifyStudDetails();
					break;}
				//case(7):{ dispMeritList();
					//break;}
			
						
				}
			}
			else break;
		}
		return 0;
}


