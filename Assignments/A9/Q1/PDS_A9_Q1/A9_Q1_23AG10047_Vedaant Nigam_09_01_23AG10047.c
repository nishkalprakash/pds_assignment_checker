#include <stdio.h>
#include <string.h>
struct student{
  char fname[20];
  char lname[20];
  char add[40];
  int rollno;
  long long int mobno;
  char grades[5];
  float gpa;

}studarray[50];
int  enrolstuds(struct student[],int);
void entergrades(struct student[],int);
void searchstuds (struct student[],int);
void modifystuddetails  (struct student[],int);
void editstudgrades(struct student[],int);
int main(){
  int nstuds=0,c,a;
  do{
    printf("enter a number between 1 to 8 ");
    scanf("%d",&c);
    if(c==1){a= enrolstuds(studarray,nstuds);                                                     }
    if(c==2){ entergrades(studarray,a);}
    if(c==4){ searchstuds (studarray,a);}
    if(c==5){modifystuddetails(studarray,a);}
    if(c==6){editstudgrades(studarray,a);}
  }while(c!=8);
  return 0;
}
int  enrolstuds(struct student studarray[],int nstuds){
  printf("enter number of students in class\n");
  scanf(" %d",&nstuds);
  for(int i=0;i<nstuds;i++){
    studarray[i].rollno=i+1;
    printf("enter first name of student %d ",i+1);
    scanf("%s",studarray[i].fname);
    printf("enter last name of student %d ",i+1);
    scanf("%s",studarray[i].lname);
    printf("enter address of student %d ",i+1);
    scanf("%s",studarray[i].add);
    printf("enter moblie no. of student %d ",i+1);
    scanf("%lld",&studarray[i].mobno);
  }
  printf("\n");
  for(int i=0;i<nstuds;i++){
    printf("roll no.= %d\n",studarray[i].rollno);
    printf("first name= %s\n",studarray[i].fname);
    printf("last name= %s\n",studarray[i].lname);
    printf("adress= %s\n",studarray[i].add);
    printf("mob no.= %lld",studarray[i].mobno);
    }
    printf("\n");
    return(nstuds);
}

void entergrades(struct student studarray[],int nstuds){
  printf("\n");
  for(int i=0;i<nstuds;i++){
    printf("roll no.= %d\n",studarray[i].rollno);
    printf("first name= %s\n",studarray[i].fname);
    printf("last name= %s\n",studarray[i].lname);
    printf("adress= %s \n",studarray[i].add);
    printf("mob no.= %lld",studarray[i].mobno);
    }
    printf("\n");
    for(int i=0;i<nstuds;i++){
      int k=0,j=0;
      printf("enter grades of student %d ",i+1);
      do{
	scanf(" %c",&studarray[i].grades[j]);
	if(studarray[i].grades[j]=='E' || studarray[i].grades[j]=='A' || studarray[i].grades[j]=='B' || studarray[i].grades[j]=='C'|| studarray[i].grades[j]=='D'|| studarray[i].grades[j]=='P'|| studarray[i].grades[j]=='F' ){k++;j++;}
	else {printf("wrong grade... enter again\n");}
      }while(j!=5);
      int sum=0;
      for(int j=0;j<5;j++){
	if( studarray[i].grades[j]=='E'){sum=sum+10;continue;}
	if( studarray[i].grades[j]=='A'){sum=sum+9 ;continue;}
	if( studarray[i].grades[j]=='B'){sum=sum+8 ;continue;}
	if( studarray[i].grades[j]=='C'){sum=sum+7 ;continue;}
	if( studarray[i].grades[j]=='D'){sum=sum+6 ;continue;}
	if( studarray[i].grades[j]=='P'){sum=sum+5 ;continue;}
	if( studarray[i].grades[j]=='F'){sum=sum+0 ;continue;}
      }
      studarray[i].gpa=sum/5;
      printf("gpa of student %d is =%f\n",i+1,studarray[i].gpa);
    }
}
void searchstuds(struct student studarray[],int nstuds){
  char str[20];
  int flag=0;
  printf("enter the name of student you want to search ");
  scanf("%s",str);
  int n=strlen(str);
  for(int i=0;i<nstuds;i++){
    if(strlen(studarray[i].fname)==n){
      for(int j=0;j<n;j++){
	if (str[j]==studarray[i].fname[j]){flag=1;continue;}
	else{flag=0;break;}
      }
    }
    if(flag==1){
    printf("roll no.= %d\n",studarray[i].rollno);
    printf("first name= %s\n",studarray[i].fname);
    printf("last name= %s\n",studarray[i].lname);
    printf("adress= %s\n",studarray[i].add);
    printf("mob no.= %lld\n ",studarray[i].mobno);
    printf("gpa=%f",studarray[i].gpa);
    printf("\n");
    }
    flag=0;
if(strlen(studarray[i].lname)==n){
      for(int j=0;j<n;j++){
	if (str[j]==studarray[i].lname[j]){flag=1;continue;}
	else{flag=0;break;}
      }
 }
    if(flag==1){
    printf("roll no.= %d\n",studarray[i].rollno);
    printf("first name= %s\n",studarray[i].fname);
    printf("last name= %s\n",studarray[i].lname);
    printf("adress= %s\n",studarray[i].add);
    printf("mob no.= %lld\n",studarray[i].mobno);
    printf("gpa=%f",studarray[i].gpa);
    printf("\n");
    }    
  }
}
void modifystuddetails(struct student studarray[],int nstuds){
  int n,s;
  printf("enter the roll number of student\n");
  scanf("%d",&n);
  for(int i=0;i<nstuds;i++){
    if(studarray[i].rollno==n){
      s=i;break;
    }
  }
  printf("roll no.= %d\n",studarray[s].rollno);
    printf("first name= %s\n",studarray[s].fname);
    printf("last name= %s\n",studarray[s].lname);
    printf("adress= %s\n",studarray[s].add);
    printf("mob no.= %lld\n",studarray[s].mobno);
    printf("enter the new adress ");
    scanf("%s",studarray[s].add);
    printf("enter the new mobile number");
    scanf("%lld",&studarray[s].mobno);
    printf("info updated\n");
     printf("roll no.= %d\n",studarray[s].rollno);
    printf("first name= %s\n",studarray[s].fname);
    printf("last name= %s\n",studarray[s].lname);
    printf("adress= %s\n",studarray[s].add);
    printf("mob no.= %lld\n",studarray[s].mobno);
}
void editstudgrades(struct student studarray[],int nstuds){
  float n;
  int s;
  printf("enter gpa of student");
  scanf("%f",&n);
  for(int i=0;i<nstuds;i++){
    if(studarray[i].gpa==n){s=i;break;}
  }
   printf("roll no.= %d\n",studarray[s].rollno);
    printf("first name= %s\n",studarray[s].fname);
    printf("last name= %s\n",studarray[s].lname);
    printf("adress= %s\n",studarray[s].add);
    printf("mob no.= %lld\n",studarray[s].mobno);
    for(int i=0;i<5;i++){
      printf("grade in subject %d = %c\n",i+1,studarray[s].grades[i]);
    }
    printf("gpa=%f",studarray[s].gpa);
    printf("\n");
    for(int i=0;i<5;i++){
      printf("enter new grade of subject %d ",i+1);
      scanf(" %c",&studarray[s].grades[i]);
    }
    int sum=0;
     for(int j=0;j<5;j++){
	if( studarray[s].grades[j]=='E'){sum=sum+10;continue;}
	if( studarray[s].grades[j]=='A'){sum=sum+9 ;continue;}
	if( studarray[s].grades[j]=='B'){sum=sum+8 ;continue;}
	if( studarray[s].grades[j]=='C'){sum=sum+7 ;continue;}
	if( studarray[s].grades[j]=='D'){sum=sum+6 ;continue;}
	if( studarray[s].grades[j]=='P'){sum=sum+5 ;continue;}
	if( studarray[s].grades[j]=='F'){sum=sum+0 ;continue;}
      }
      studarray[s].gpa=sum/5;
      printf("info updated\n");
       printf("roll no.= %d\n",studarray[s].rollno);
    printf("first name= %s\n",studarray[s].fname);
    printf("last name= %s\n",studarray[s].lname);
    printf("adress= %s\n",studarray[s].add);
    printf("mob no.= %lld\n",studarray[s].mobno);
    for(int i=0;i<5;i++){
      printf("grade in subject %d = %c\n",i+1,studarray[s].grades[i]);
    }
    printf("gpa=%f",studarray[s].gpa);
    printf("\n");
      
    
}
