//Shrey Patel
//23CS10051

#include <stdio.h>
#include <string.h>

typedef struct{
	int rollno;
	char firstn[20];
	char lastn[20];
	char add[40];
	long int mono;
	char grade[5];
	float gpa;
}student;

int nstud=0;
student studentarray[50];


void enrolstuds(student studentarray[50])
{  
   printf("Enter the number os students in class");
   scanf("%d",&nstud);
   char a[40];
   for(int i=0;i<nstud;i++){
   studentarray[i].rollno=i+1;
   printf("%d.",studentarray[i].rollno);
   printf("First name:");
   scanf("%s",a);
   strcpy(studentarray[i].firstn,a);
   printf("Last name:");
   scanf("%s",a);
   strcpy(studentarray[i].lastn,a);
   printf("Address:");
   scanf(" %[^\n]s",a);
   strcpy(studentarray[i].add,a);
   printf("Mobile no:");
   scanf("%ld",&studentarray[i].mono);}
   
   for(int i=0;i<nstud;i++)
   {printf("\n%d. %s %s\n",studentarray[i].rollno,studentarray[i].firstn,studentarray[i].lastn);
   printf("Address:%s\n",studentarray[i].add);
   printf("Mobileno:%ld\n\n\n",studentarray[i].mono);}}


void entergrade(student arr[50],int n)
{
   
   for(int i=0;i<n;i++)
{  
  printf("%d. %s %s\n",studentarray[i].rollno,studentarray[i].firstn,studentarray[i].lastn);
  for(int j=0;j<5;j++)
  {printf("Enter grades subject for %d:",j+1);
do{
  scanf(" %c",&studentarray[i].grade[j]);}while(studentarray[i].grade[j]!='E' || studentarray[i].grade[j]!='A' || studentarray[i].grade[j]!='B' || studentarray[i].grade[j]!='C' || studentarray[i].grade[j]!='D' ||studentarray[i].grade[j]!='P' || studentarray[i].grade[j]!='F');
  }}

  for(int i=0;i<n;i++)
{  int sum=0;
   for(int j=0;j<5;j++)
   { 

    if(studentarray[i].grade[j]=='E')
    sum=sum+10;
   else if(studentarray[i].grade[j]=='A')
    sum=sum+9;
   else if(studentarray[i].grade[j]=='B')
    sum=sum+8;
   else if(studentarray[i].grade[j]=='C')
    sum=sum+7;
   else if(studentarray[i].grade//Shrey Patel
//23CS10051

#include <stdio.h>
#include <string.h>

typedef struct{
	int rollno;
	char firstn[20];
	char lastn[20];
	char add[40];
	long int mono;
	char grade[5];
	float gpa;
}student;

int nstud=0;
student studarray[50];


void enrolstuds(student studarray[50])
{  
   printf("Enter the number os students in class");
   scanf("%d",&nstud);
   char a[40];
   for(int i=0;i<nstud;i++){
   studarray[i].rollno=i+1;
   printf("%d.",studarray[i].rollno);
   printf("First name:");
   scanf("%s",a);
   strcpy(studarray[i].firstn,a);
   printf("Last name:");
   scanf("%s",a);
   strcpy(studarray[i].lastn,a);
   printf("Address:");
   scanf(" %[^\n]s",a);
   strcpy(studarray[i].add,a);
   printf("Mobile no:");
   scanf("%ld",&studarray[i].mono);}
   
   for(int i=0;i<nstud;i++)
   {printf("\n%d. %s %s\n",studarray[i].rollno,studarray[i].firstn,studarray[i].lastn);
   printf("Address:%s\n",studarray[i].add);
   printf("Mobileno:%ld\n\n\n",studarray[i].mono);}}


void entergrade(student arr[50],int n)
{
   
   for(int i=0;i<n;i++)
{  
  printf("%d. %s %s\n",arr[i].rollno,arr[i].firstn,arr[i].lastn);
  for(int j=0;j<5;j++)
  {printf("Enter grades subject for %d:",j+1);
do{
  scanf(" %c",&arr[i].grade[j]);}while(arr[i].grade[j]!='E' || arr[i].grade[j]!='A' || arr[i].grade[j]!='B' || arr[i].grade[j]!='C' || arr[i].grade[j]!='D' ||arr[i].grade[j]!='P' || arr[i].grade[j]!='F');
  }}

  for(int i=0;i<n;i++)
{  int sum=0;
   for(int j=0;j<5;j++)
   { 

    if(arr[i].grade[j]=='E')
    sum=sum+10;
   else if(arr[i].grade[j]=='A')
    sum=sum+9;
   else if(arr[i].grade[j]=='B')
    sum=sum+8;
   else if(arr[i].grade[j]=='C')
    sum=sum+7;
   else if(arr[i].grade[j]=='D')
    sum=sum+6;
   else if(arr[i].grade[j]=='P')
    sum=sum+5;
   else if(arr[i].grade[j]=='F')
    sum=sum+0;
    }
arr[i].gpa=(float)sum/5;
}


 for(int i=0;i<n;i++)
   {printf("\n%d. %s %s\n",arr[i].rollno,arr[i].firstn,arr[i].lastn);
   printf("Address:%s\n",arr[i].add);
   printf("Gpa:%f\n",arr[i].gpa);
   printf("Mobileno:%ld\n\n\n",arr[i].mono);
}}

void displaystud(student arr[],int n)
{
student t;
for(int i=0;i<n;i++)
{ 	for(int j=i;j<n;j++)
	{
	if(strcmp(arr[i].firstn,arr[j].firstn)>0 || (strcmp(arr[i].firstn,arr[j].firstn)==0 && strcmp(arr[i].lastn,arr[j].lastn)>0))
 	{t=arr[i];
 	arr[i]=arr[j];
	arr[j]=t;
	}}
}


 for(int i=0;i<n;i++)
   {printf("\n%d. %s %s\n",arr[i].rollno,arr[i].firstn,arr[i].lastn);
   printf("Address:%s\n",arr[i].add);
   printf("Gpa:%f\n",arr[i].gpa);
   printf("Mobileno:%ld\n\n\n",arr[i].mono);
}

}


void searchstud(student arr[],int n)
{
char a[20];
printf("Enter the keyword to search:");
scanf(" %s",a);

for(int i=0;i<n;i++)
{
  if(strcasecmp(a,arr[i].firstn)==0 || strcasecmp(a,arr[i].lastn)==0)
  {
   printf("\n%d. %s %s\n",studarray[i].rollno,studarray[i].firstn,studarray[i].lastn);
   printf("Address:%s\n",studarray[i].add);
   printf("Mobileno:%ld\n\n\n",studarray[i].mono);}}
}

void modifystuddetail(student arr[],int n)
{
  int i;
  printf("Enter the rollno:");
  scanf("%d",&i);

printf("Name:%s %s\n",arr[i-1].firstn,arr[i-1].lastn);
printf("Add:%s \n",arr[i-1].add);
printf("Mobileno:%ld\n\n",arr[i-1].mono);

printf("enter new add:");
scanf("%s",&(arr[i-1].add[0]));
printf("Enter new mobile no:");
scanf("%ld",&(arr[i-1].mono));

for(int i=0;i<nstud;i++)
   {printf("\nRoll no:%d \t Name:%s %s\n",studarray[i].rollno,studarray[i].firstn,studarray[i].lastn);
   printf("Address:%s\n",studarray[i].add);
   printf("Mobileno:%ld\n\n\n",studarray[i].mono);}
}



void editstudgrade(student arr[],int n)
{
int i;
printf("enter the rollno:");
scanf("%d",&i);

printf("Name:%s %s\n roll no:%d\n",arr[i-1].firstn,arr[i-1].lastn,arr[i-1].rollno);
for(int j=0;j<5;j++)
printf("Grade subject %d:%c\n",j+1,arr[i-1].grade[j]);
printf("Add:%s\n",arr[i-1].add);
printf("MobileNO:%ld\n",arr[i-1].mono);


for(int j=0;j<5;j++)
{printf("New grade for subject %d:",j+1);
do{
scanf(" %c",&arr[i].grade[j]);}while(arr[i].grade[j]!='E' || arr[i].grade[j]!='A' || arr[i].grade[j]!='B' || arr[i].grade[j]!='C' || arr[i].grade[j]!='D' ||arr[i].grade[j]!='P' || arr[i].grade[j]!='F');
int sum=0;

 for(int j=0;j<5;j++)
   { 

    if(arr[i-1].grade[j]=='E')
    sum=sum+10;
   else if(arr[i-1].grade[j]=='A')
    sum=sum+9;
   else if(arr[i-1].grade[j]=='B')
    sum=sum+8;
   else if(arr[i-1].grade[j]=='C')
    sum=sum+7;
   else if(arr[i-1].grade[j]=='D')
    sum=sum+6;
   else if(arr[i-1].grade[j]=='P')
    sum=sum+5;
   else if(arr[i-1].grade[j]=='F')
    sum=sum+0;
    }
arr[i-1].gpa=(float)sum/5;
}

for(int k=0;k<n;k++)
   {printf("\n%d. %s %s\n",arr[k].rollno,arr[k].firstn,arr[k].lastn);
   printf("Address:%s\n",arr[k].add);
   printf("Gpa:%f\n",arr[k].gpa);
   printf("Mobileno:%ld\n\n\n",arr[k].mono);
}



} 


int main()
{
int input;

while(input!=8)
{

printf("1.Enrol student\n");
printf("2.Enter grade\n");
printf("3.Display student\n");
printf("4.Search student\n");
printf("5.Edit student grades\n");
printf("6.Modify student details\n");
printf("7.Display merit list\n");
printf("8.Exit the program\n");

scanf("%d",&input);


if(input>8 || input <1)
printf("Invalid input\n");

else if(input==1)
enrolstuds(studentarray);

else if(input==2)
entergrade(studentarray,nstud);

else if(input==3)
displaystud(studentarray,nstud);

else if(input==4)
searchstud(studentarray,nstud);


else if(input==5)
editstudgrade(studentarray,nstud);

else if(input==6)
modifystuddetail(studentarray,nstud);

else if(input==7)
dispmeritlist(studentarray,nstud);



}
return 0;}

[j]=='D')
    sum=sum+6;
   else if(studentarray[i].grade[j]=='P')
    sum=sum+5;
   else if(studentarray[i].grade[j]=='F')
    sum=sum+0;
    }
studentarray[i].gpa=(float)sum/5;
}


 for(int i=0;i<n;i++)
   {printf("\n%d. %s %s\n",studentarray[i].rollno,studentarray[i].firstn,studentarray[i].lastn);
   printf("Address:%s\n",studentarray[i].add);
   printf("Gpa:%f\n",studentarray[i].gpa);
   printf("Mobileno:%ld\n\n\n",studentarray[i].mono);
}}

void displaystud(student arr[],int n)
{
student t;
for(int i=0;i<n;i++)
{ 	for(int j=i;j<n;j++)
	{
	if(strcmp(studentarray[i].firstn,studentarray[j].firstn)>0 || (strcmp(studentarray[i].firstn,studentarray[j].firstn)==0 && strcmp(studentarray[i].lastn,studentarray[j].lastn)>0))
 	{t=studentarray[i];
 	studentarray[i]=studentarray[j];
	studentarray[j]=t;
	}}
}


 for(int i=0;i<n;i++)
   {printf("\n%d. %s %s\n",studentarray[i].rollno,studentarray[i].firstn,studentarray[i].lastn);
   printf("Address:%s\n",studentarray[i].add);
   printf("Gpa:%f\n",studentarray[i].gpa);
   printf("Mobileno:%ld\n\n\n",studentarray[i].mono);
}

}


void searchstud(student arr[],int n)
{
char a[20];
printf("Enter the keyword to search:");
scanf(" %s",a);

for(int i=0;i<n;i++)
{
  if(strcasecmp(a,studentarray[i].firstn)==0 || strcasecmp(a,studentarray[i].lastn)==0)
  {
   printf("\n%d. %s %s\n",studarray[i].rollno,studarray[i].firstn,studarray[i].lastn);
   printf("Address:%s\n",studarray[i].add);
   printf("Mobileno:%ld\n\n\n",studarray[i].mono);}}
}

void modifystuddetail(student arr[],int n)
{
  int i;
  printf("Enter the rollno:");
  scanf("%d",&i);

printf("Name:%s %s\n",studentarray[i-1].firstn,studentarray[i-1].lastn);
printf("Add:%s \n",studentarray[i-1].add);
printf("Mobileno:%ld\n\n",studentarray[i-1].mono);

printf("enter new add:");
scanf("%s",&(studentarray[i-1].add[0]));
printf("Enter new mobile no:");
scanf("%ld",&(studentarray[i-1].mono));

for(int i=0;i<nstud;i++)
   {printf("\nRoll no:%d \t Name:%s %s\n",studarray[i].rollno,studarray[i].firstn,studarray[i].lastn);
   printf("Address:%s\n",studarray[i].add);
   printf("Mobileno:%ld\n\n\n",studarray[i].mono);}
}



void editstudgrade(student arr[],int n)
{
int i;
printf("enter the rollno:");
scanf("%d",&i);

printf("Name:%s %s\n roll no:%d\n",studentarray[i-1].firstn,studentarray[i-1].lastn,studentarray[i-1].rollno);
for(int j=0;j<5;j++)
printf("Grade subject %d:%c\n",j+1,studentarray[i-1].grade[j]);
printf("Add:%s\n",studentarray[i-1].add);
printf("MobileNO:%ld\n",studentarray[i-1].mono);


for(int j=0;j<5;j++)
{printf("New grade for subject %d:",j+1);
do{
scanf(" %c",&studentarray[i].grade[j]);}while(studentarray[i].grade[j]!='E' || studentarray[i].grade[j]!='A' || studentarray[i].grade[j]!='B' || studentarray[i].grade[j]!='C' || studentarray[i].grade[j]!='D' ||studentarray[i].grade[j]!='P' || studentarray[i].grade[j]!='F');
int sum=0;

 for(int j=0;j<5;j++)
   { 

    if(studentarray[i-1].grade[j]=='E')
    sum=sum+10;
   else if(studentarray[i-1].grade[j]=='A')
    sum=sum+9;
   else if(studentarray[i-1].grade[j]=='B')
    sum=sum+8;
   else if(studentarray[i-1].grade[j]=='C')
    sum=sum+7;
   else if(studentarray[i-1].grade[j]=='D')
    sum=sum+6;
   else if(studentarray[i-1].grade[j]=='P')
    sum=sum+5;
   else if(studentarray[i-1].grade[j]=='F')
    sum=sum+0;
    }
arr[i-1].gpa=(float)sum/5;
}

for(int k=0;k<n;k++)
   {printf("\n%d. %s %s\n",studentarray[k].rollno,studentarray[k].firstn,studentarray[k].lastn);
   printf("Address:%s\n",studentarray[k].add);
   printf("Gpa:%f\n",studentarray[k].gpa);
   printf("Mobileno:%ld\n\n\n",studentarray[k].mono);
}} 


void dispmeritlist(


int main()
{
int input;

while(input!=8)
{

printf("1.Enrol student\n");
printf("2.Enter grade\n");
printf("3.Display student\n");
printf("4.Search student\n");
printf("5.Edit student grades\n");
printf("6.Modify student details\n");
printf("7.Display merit list\n");
printf("8.Exit the program\n");

scanf("%d",&input);


if(input>8 || input <1)
printf("Invalid input\n");

else if(input==1)
enrolstuds(studentarray);

else if(input==2)
entergrade(studentarray,nstud);

else if(input==3)
displaystud(studentarray,nstud);

else if(input==4)
searchstud(studentarray,nstud);


else if(input==5)
editstudgrade(studentarray,nstud);

else if(input==6)
modifystuddetail(studentarray,nstud);

//else if(input==7)
//dispmeritlist(studarray,nstud);



}














return 0;}


