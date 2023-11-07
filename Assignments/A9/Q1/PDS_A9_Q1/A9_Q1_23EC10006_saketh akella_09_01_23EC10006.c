//name:Akella Satya Hanuma Saketh
//Roll no.:23EC10006

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
   int rollNumber;
   char firstName[20];
   char lastName[20];
   char address[40];
   long unsigned int mobileNumber;
   char grades[5];
   float gpa;
};
int nstud=0;
struct student studArray[50];


void enrollstudents()
{
    printf("enter the number of students \n");
    scanf("%d",&nstud);
    for(int i=0;i<nstud;i++){
        studArray[i].rollNumber=i+1;
        printf("enter the first name\n");
        scanf("%s",studArray[i].firstName);
        printf("enter the last name\n");
        scanf("%s",studArray[i].lastName);
        printf("enter the address\n");
        scanf("%s",studArray[i].address);
        printf("enter the mobile number \n");
        scanf("%lu",&studArray[i].mobileNumber);
    }
    for(int i=0;i<nstud;i++){
        printf("roll number: %d\tfirst name: %s\tlast name: %s\taddress: %s\tmobile number: %lu\n",studArray[i].rollNumber,studArray[i].firstName,studArray[i].lastName,studArray[i].address,studArray[i].mobileNumber);       
    }

}

void entergrades()
{
    int sum=0;
    for(int i=0;i<nstud;i++){
        printf("roll number: %d\tfirst name: %s\tlast name: %s\taddress: %s\tmobile number: %lu\n",studArray[i].rollNumber,studArray[i].firstName,studArray[i].lastName,studArray[i].address,studArray[i].mobileNumber);       
        printf("enter the grades of the subjects \n");
        for(int j=0;j<5;j++){
            scanf(" %c",&studArray[i].grades[j]);
            if((studArray[i].grades[j]!='E')&&(studArray[i].grades[j]!='A')&&(studArray[i].grades[j]!='B')&&(studArray[i].grades[j]!='C')&&(studArray[i].grades[j]!='D')&&(studArray[i].grades[j]!='P')&&(studArray[i].grades[j]!='F')){
              printf("wrong grade inputed enter grade again\n");
              j--;  
            }
        }
    }
    for(int i=0;i<nstud;i++){
        sum=0;
        for(int j=0;j<5;j++){
            if(studArray[i].grades[j]=='E')sum=sum+10;
            else if(studArray[i].grades[j]=='A')sum=sum+9;
            else if(studArray[i].grades[j]=='B')sum=sum+8;
            else if(studArray[i].grades[j]=='C')sum=sum+7;
            else if(studArray[i].grades[j]=='D')sum=sum+6;
            else if(studArray[i].grades[j]=='P')sum=sum+5;
            else if(studArray[i].grades[j]=='F')sum=sum+0;
        }
        studArray[i].gpa=sum/5.0;
    }
    for(int i=0;i<nstud;i++){
        printf("roll number: %d\tfirst name: %s\tlast name: %s\taddress: %s\tmobile number: %lu\tgrades : %c %c %c %c %c\tgpa: %f\n",studArray[i].rollNumber,studArray[i].firstName,studArray[i].lastName,studArray[i].address,studArray[i].mobileNumber,studArray[i].grades[0],studArray[i].grades[1],studArray[i].grades[2],studArray[i].grades[3],studArray[i].grades[4],studArray[i].gpa);

    }
}

void modifystuddetails()
{
   int r,j;
   printf("enter the student roll number\n");
   scanf("%d",&r);
   for(int i=0;i<nstud;i++){
    if(studArray[i].rollNumber==r){
        j=i;
        break;
    }
   }
    printf("roll number: %d\tfirst name: %s\tlast name: %s\taddress: %s\tmobile number: %lu\n",studArray[j].rollNumber,studArray[j].firstName,studArray[j].lastName,studArray[j].address,studArray[j].mobileNumber);       
    printf("enter new adress \n");
    scanf("%s",studArray[j].address);
    printf("enter new mobile number \n");
    scanf("%lu",&studArray[j].mobileNumber);
    printf("roll number: %d\tfirst name: %s\tlast name: %s\taddress: %s\tmobile number: %lu\n",studArray[j].rollNumber,studArray[j].firstName,studArray[j].lastName,studArray[j].address,studArray[j].mobileNumber);       
    
}

void editstudgrades()
{
   int r,k;
   int sum=0;
   printf("enter the student roll number\n");
   scanf("%d",&r);
   for(int i=0;i<nstud;i++){
    if(studArray[i].rollNumber==r){
        k=i;
        break;
    }
   }
    printf("roll number: %d\tfirst name: %s\tlast name: %s\taddress: %s\tmobile number: %lu\tgrades : %c %c %c %c %c\tgpa: %f\n",studArray[k].rollNumber,studArray[k].firstName,studArray[k].lastName,studArray[k].address,studArray[k].mobileNumber,studArray[k].grades[0],studArray[k].grades[1],studArray[k].grades[2],studArray[k].grades[3],studArray[k].grades[4],studArray[k].gpa);
    printf("enter the new grades \n");
    for(int j=0;j<5;j++){
        scanf(" %c",&studArray[k].grades[j]);
    }
    for(int j=0;j<5;j++){
        if(studArray[k].grades[j]=='E')sum=sum+10;
            else if(studArray[k].grades[j]=='A')sum=sum+9;
            else if(studArray[k].grades[j]=='B')sum=sum+8;
            else if(studArray[k].grades[j]=='C')sum=sum+7;
            else if(studArray[k].grades[j]=='D')sum=sum+6;
            else if(studArray[k].grades[j]=='P')sum=sum+5;
            else if(studArray[k].grades[j]=='F')sum=sum+0;
    }
    studArray[k].gpa=sum/5.0;
    printf("roll number: %d\tfirst name: %s\tlast name: %s\taddress: %s\tmobile number: %lu\tgrades : %c %c %c %c %c\tgpa: %f\n",studArray[k].rollNumber,studArray[k].firstName,studArray[k].lastName,studArray[k].address,studArray[k].mobileNumber,studArray[k].grades[0],studArray[k].grades[1],studArray[k].grades[2],studArray[k].grades[3],studArray[k].grades[4],studArray[k].gpa);
    

}

void dispmeritlist()
{
   struct student y; 
  for(int i=0;i<nstud;i++){
    for(int j=i+1;j<nstud;j++){
    if(studArray[i].gpa<studArray[j].gpa){
        y=studArray[i];
        studArray[i]=studArray[j];
        studArray[j]=y;
    }
    }
  }
  for(int i=0;i<nstud;i++){
    printf("roll number: %d\tfirst name: %s\tlast name: %s\taddress: %s\tmobile number: %lu\tgrades : %c %c %c %c %c\tgpa: %f\n",studArray[i].rollNumber,studArray[i].firstName,studArray[i].lastName,studArray[i].address,studArray[i].mobileNumber,studArray[i].grades[0],studArray[i].grades[1],studArray[i].grades[2],studArray[i].grades[3],studArray[i].grades[4],studArray[i].gpa);
  }
}

void searchstud()
{
    int flag=2;
    int k;
  char input[20];
  printf("enter the name you want to search for \n");
  scanf("%s",input);
  for(int i=0;i<nstud;i++){
    flag=strcasecmp(studArray[i].firstName,input);
    if(flag==0){
        k=i;
        break;
    }
    else if(flag!=0){
    flag=strcasecmp(studArray[i].lastName,input);
    if(flag==0){
        k=i;
        break;
  }
  }
  }
  
  if(flag==0){
    printf("roll number: %d\tfirst name: %s\tlast name: %s\taddress: %s\tmobile number: %lu\tgrades : %c %c %c %c %c\tgpa: %f\n",studArray[k].rollNumber,studArray[k].firstName,studArray[k].lastName,studArray[k].address,studArray[k].mobileNumber,studArray[k].grades[0],studArray[k].grades[1],studArray[k].grades[2],studArray[k].grades[3],studArray[k].grades[4],studArray[k].gpa);
  }
else if(flag!=0)printf("no such name \n");

}

void displaystud()
{
   struct student y;
   for(int i=0;i<nstud;i++){
    for(int j=i+1;j<nstud;j++){
        if(strcasecmp(studArray[i].firstName,studArray[j].firstName)!=0){
        for(int k=0;k<strlen(studArray[i].firstName);k++){
           if(studArray[i].firstName[k]>studArray[j].firstName[k]){
              y=studArray[i];
              studArray[i]=studArray[j];
              studArray[j]=y;
              break;
           }
        }
        }
        else {
            for(int k=0;k<strlen(studArray[i].lastName);k++){
           if(studArray[i].lastName[k]>studArray[j].lastName[k]){
              y=studArray[i];
              studArray[i]=studArray[j];
              studArray[j]=y;
              break;
           }
            }
        }
    }
   }
    for(int i=0;i<nstud;i++){
        printf("roll number: %d\tfirst name: %s\tlast name: %s\taddress: %s\tmobile number: %lu\n",studArray[i].rollNumber,studArray[i].firstName,studArray[i].lastName,studArray[i].address,studArray[i].mobileNumber);       
    }
}

int main(){
     
     nstud=0;
     int n;
     
     while(1){
        printf("1-enroll student\n2-enter grade\n3-display studs\n4-search student\n5-edit student grades\n6-modify student details\n7-display merit list\n8-exit\n");
        scanf("%d",&n);
        if(n==8)break;
        else if(n==7)dispmeritlist(); 
        else if(n==6)modifystuddetails();
        else if(n==5)editstudgrades();
        else if(n==4)searchstud();
        else if(n==3)displaystud();
        else if(n==2)entergrades();
        else if(n==1)enrollstudents();
        else printf("wrong input\n");
     }
    return 0;
}