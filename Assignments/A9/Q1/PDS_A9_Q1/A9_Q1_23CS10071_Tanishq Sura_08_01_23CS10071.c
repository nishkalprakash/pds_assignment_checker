//name tanishq sura
//roll no 23CS10071

#include<stdio.h>
#include<string.h>

typedef struct{
  char firstname[20];
  char lastname[20];
  char address[40];
  long int mobno;
  char grades[5];
  float gpa;
  int roll;
}student;
student studArray[50];
int nStuds;

void enrolStuds(){
  printf("give no. of students: ");
  scanf("%d",&nStuds);
  for(int i=0;i<nStuds;i++){
    studArray[i].roll= i+1;
    printf("give firstname of student %d: ",i+1);
    scanf("%s",&(studArray[i].firstname[0]));
    printf("give lastname of student %d: ",i+1);
    scanf("%s",&(studArray[i].lastname[0]));
    printf("give address of student %d: ",i+1);
    scanf(" %[^\n]s",&(studArray[i].address[0]));
    printf("give mobile no. of student %d: ",i+1);
    scanf("%ld",&(studArray[i].mobno));
  }
  for(int i=0;i<nStuds;i++){
    printf("Rollno.:%d   Firstname:%s   Last name:%s  Address:%s  mobile no: %ld\n",studArray[i].roll,studArray[i].firstname,studArray[i].lastname,studArray[i].address,studArray[i].mobno);
  } 
  return;
}

void enterGrades(){
  for(int i=0;i<nStuds;i++){
    printf("Rollno.:%d   Firstname:%s   Last name:%s  Address:%s  mobile no: %ld\n",studArray[i].roll,studArray[i].firstname,studArray[i].lastname,studArray[i].address,studArray[i].mobno);
    int sum=0;
    for(int j=0;j<5;j++){
      printf("enter grade of subject %d (in uppercase only):",j+1);
      scanf(" %c",&(studArray[i].grades[j]));
      while(!((studArray[i].grades[j]=='E')||(studArray[i].grades[j]=='A')||(studArray[i].grades[j]=='B')||(studArray[i].grades[j]=='C')||(studArray[i].grades[j]=='D')||(studArray[i].grades[j]=='P')||(studArray[i].grades[j]=='F'))){
	printf("wrong input, enter again:");
	scanf(" %c",&(studArray[i].grades[j]));
      }

      switch(studArray[i].grades[j]){
      case 'E': sum+=10;
	break;
      case 'A': sum+=9;
	break;
      case 'B': sum+=8;
	break;
      case 'C': sum+=7;
	break;
      case 'D': sum+=6;
	break;
      case 'P': sum+=5;
	break;
      case 'F': sum+=0;
	break;
      }
      studArray[i].gpa=sum/5.0;
    }
  }
  for(int i=0;i<nStuds;i++){
    printf("Rollno.:%d   Firstname:%s   Last name:%s  Address:%s  mobile no: %ld  \n",studArray[i].roll,studArray[i].firstname,studArray[i].lastname,studArray[i].address,studArray[i].mobno);
    for(int j=0;j<5;j++){
      printf("grade of subject %d= %c\n",j+1,studArray[i].grades[j]);
    }
    printf("gpa: %f\n",studArray[i].gpa);
  }
  return;
}
void displayStuds(){
  student temp;
  int imin;
  for(int i=0;i<nStuds;i++){
    imin=i;
    for(int j=i;j<nStuds;j++){
      if(strcmp(studArray[imin].firstname,studArray[j].firstname)<0) imin=j;
      else if(strcmp(studArray[imin].firstname,studArray[j].firstname)==0){
	if(strcmp(studArray[imin].lastname,studArray[j].lastname)<0) imin=j;
      }
    }
    temp=studArray[imin];
    for(int k=imin;k>i;k--){
      studArray[k]=studArray[k-1];
    }
    studArray[i]=temp;
  }
  for(int i=0;i<nStuds;i++){
    printf("Rollno.:%d   Firstname:%s   Last name:%s  Address:%s  mobile no: %ld  \n",studArray[i].roll,studArray[i].firstname,studArray[i].lastname,studArray[i].address,studArray[i].mobno);
    for(int j=0;j<5;j++){
      printf("grade of subject %d= %c\n",j+1,studArray[i].grades[j]);
    }
    printf("gpa: %f\n",studArray[i].gpa);
  }
  return;
}
  
void searchStuds(){
  char search[20];
    printf("enter the word to be searched:");
    scanf("%s",search);
    for(int i=0;i<nStuds;i++){
      if((strcasecmp(studArray[i].firstname,search)==0)||(strcasecmp(studArray[i].lastname,search)==0)){
	printf("Rollno.:%d   Firstname:%s   Last name:%s  Address:%s  mobile no: %ld  \n",studArray[i].roll,studArray[i].firstname,studArray[i].lastname,studArray[i].address,studArray[i].mobno);
    for(int j=0;j<5;j++){
      printf("grade of subject %d= %c\n",j+1,studArray[i].grades[j]);
    }
    printf("gpa: %f\n",studArray[i].gpa);
      }
    }
    return;
}

void modifyStudDetails(){
  int flag=0;
  int rollsearch;
  printf("give the roll no. of student: ");
  scanf("%d",&rollsearch);
  for(int i=0;i<nStuds;i++){
    if(studArray[i].roll==rollsearch){
      flag=1;
      printf("Rollno.:%d   Firstname:%s   Last name:%s  Address:%s  mobile no: %ld  \n",studArray[i].roll,studArray[i].firstname,studArray[i].lastname,studArray[i].address,studArray[i].mobno);
      for(int j=0;j<5;j++){
      printf("grade of subject %d= %c\n",j+1,studArray[i].grades[j]);
      }
      printf("gpa: %f\n",studArray[i].gpa);
      printf("give new address : ");
      scanf(" %[^\n]s",&(studArray[i].address[0]));
      printf("give new mobile no.");
      scanf("%ld",&(studArray[i].mobno));

      printf("Rollno.:%d   Firstname:%s   Last name:%s  Address:%s  mobile no: %ld  \n",studArray[i].roll,studArray[i].firstname,studArray[i].lastname,studArray[i].address,studArray[i].mobno);
      for(int j=0;j<5;j++){
      printf("grade of subject %d= %c\n",j+1,studArray[i].grades[j]);
      }
      printf("gpa: %f\n",studArray[i].gpa);	    
    }
  }
  if(flag==0) printf("invalid roll no");
  return;
}

void editStudGrades(){
  int flag=0;
  int rollsearch;
  printf("give the roll no. of student: ");
  scanf("%d",&rollsearch);
  for(int i=0;i<nStuds;i++){
    if(studArray[i].roll==rollsearch){
      flag=1;
      printf("Rollno.:%d   Firstname:%s   Last name:%s  Address:%s  mobile no: %ld  \n",studArray[i].roll,studArray[i].firstname,studArray[i].lastname,studArray[i].address,studArray[i].mobno);
      for(int j=0;j<5;j++){
      printf("grade of subject %d= %c\n",j+1,studArray[i].grades[j]);
      }
      printf("gpa: %f\n",studArray[i].gpa);
      int sum=0;
      for(int j=0;j<5;j++){
      printf("enter new grade of subject %d (in uppercase only):",j+1);
      scanf(" %c",&(studArray[i].grades[j]));
      while(!((studArray[i].grades[j]=='E')||(studArray[i].grades[j]=='A')||(studArray[i].grades[j]=='B')||(studArray[i].grades[j]=='C')||(studArray[i].grades[j]=='D')||(studArray[i].grades[j]=='P')||(studArray[i].grades[j]=='F'))){
	printf("wrong input, enter again:");
	scanf(" %c",&(studArray[i].grades[j]));
      }

      switch(studArray[i].grades[j]){
      case 'E': sum+=10;
	break;
      case 'A': sum+=9;
	break;
      case 'B': sum+=8;
	break;
      case 'C': sum+=7;
	break;
      case 'D': sum+=6;
	break;
      case 'P': sum+=5;
	break;
      case 'F': sum+=0;
	break;
      }
      }
      studArray[i].gpa=sum/5.0;
      

      printf("Rollno.:%d   Firstname:%s   Last name:%s  Address:%s  mobile no: %ld  \n",studArray[i].roll,studArray[i].firstname,studArray[i].lastname,studArray[i].address,studArray[i].mobno);
      for(int j=0;j<5;j++){
      printf("grade of subject %d= %c\n",j+1,studArray[i].grades[j]);
      }
      printf("gpa: %f\n",studArray[i].gpa);	    
    }
  }
  if(flag==0) printf("invalid roll no");
  return;
}

int main(){
  nStuds=0;
  int n;
  while(1){
    printf("the menu options:\n1. enrol student\n2. enter grade\n3. display student\n4. search student\n5. edit student grades6. modify student details\n7.display merit list\n8.exit\n enter no.:");
    scanf("%d",&n);
    int flag=0;
    switch(n){
    case 1:
      enrolStuds();
      break;
    case 2:
      enterGrades();
      break;
    case 3:
      displayStuds();
      break;
    case 4:
      searchStuds();
      break;
    case 5:
      editStudGrades();
      break;
    case 6:
      modifyStudDetails();
      break;
    /*case 7:
      dispMeritList();
      break;*/
    case 8:
      flag=1;
      break;
    }
    if(flag==1) break;
  }
  return 0;
}
