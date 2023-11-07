//name: pilli asish chadan ; r.no: 23ME30039
#include<stdio.h>
#include<stdlib.h>
struct student{
  int roll_no;
  char firstname[20];
  char lastname[20];
  char address[40];
  long int mobile_number;
  char grade[5];
  float gpa;
};
struct student studArray[50];
int nStuds;
void enrolStuds(){
  printf("enter nStuds");
  scanf("%d",&nStuds);
  getchar();
  for(int i=0;i<nStuds;i++){
    printf("enter first name\n");
    for(int j=0;j<20;j++){
      scanf("%c",&studArray[i].firstname[j]);
      if(studArray[i].firstname[j]=='\n')
	{
	  studArray[i].firstname[j]='\0';
	  break;
	}
    }
    printf("enter  lastname\n");
    for(int k=0;k<20;k++){
      scanf("%c",&studArray[i].lastname[k]);
      if(studArray[i].lastname[k]=='\n')
	{
	  studArray[i].lastname[k]='\0';
	  break;
	}
    }
    printf("enter address");
    for(int j=0;j<40;j++){
      scanf("%c",&studArray[i].address[j]);
       if(studArray[i].address[j]=='\n')
	{
	  studArray[i].address[j]='\0';
	  break;
	}
    }
    printf("enter mobile number");
    scanf("%ld",&studArray[i].mobile_number);
    studArray[i].roll_no=i+1;
  }
  for(int i=0;i<nStuds;i++){
    printf("roll no:%d\n",studArray[i].roll_no);
    printf("name:");
    for(int j=0;j<20;j++){
      printf("%c",studArray[i].firstname[j]);
    }
    printf(" ");
    for(int j=0;j<20;j++){
      printf("%c",studArray[i].lastname[j]);
    }
    printf("\naddress:");
    for(int j=0;j<40;j++){
      printf("%c",studArray[i].address[j]);
    }
    printf("\nmobile number:%ld\n",studArray[i].mobile_number);
  }
}
    
      
   
    
    
      
    
int main(){
  nStuds=0;
  while(1){
    int n;
    printf("enter required action\n");
    printf(" 1. enrol student \n 2. enter grade \n 3.display students \n 4.search student grades \n 5.edit student grades \n 6. modify student details \n 7. display merit list \n 8. exit program");
    scanf("%d",&n);
    if(n==1)
      enrolStuds();
   
    if(n==8)
      break;
    
  }
}
