// Name : SWARUPJAYARAM DHANAVADE
// Roll No.: 23MI10052

#include<stdio.h>


struct student{
  char Fname[20];
  char Lname[20];
  char add[40];
  long long  int Mno;       
  char grade[5];
  float gpa;
  
};
  

struct student studArray[50];
int nStuds;
int Rno[51];

void enrolStuds();  // function decleration
void enterGrades();
void searchStud();



int main(){   
  nStuds=0;
  int ip=0;          // ip:in put choice number
  for(int i=0;ip>8|| ip<=0;i++){
    printf("1.Enrol student \n2.enter grade \n3.Display students \n4.Search student \n5.Edit student grade \n6.Modify student Details \n7.Display merit list \n8.Exit the program \n");
    printf("Enter number (1-8):");
      scanf("%d",&ip);
  }

  if(ip==1) enrolStuds();
  if(ip==2) { enrolStuds();enterGrades();} 
    // if(ip==3)
  if(ip==4){ enrolStuds() ; searchStud()}
  /* if(ip==5)
  if(ip==6)
  if(ip==7)
  if(ip==8)*/

  return 0;
}





void enrolStuds()  // function defination
{
  printf("Enter the number of students:");
  scanf("%d",&nStuds);
  for(int j=0;j< nStuds;j++){
    printf("Enter the details of student no : %d \n",j+1);
    printf("First Name: ");
    scanf(" %s",&studArray[j].Fname);
    printf("Last name: ");
    scanf(" %s", &studArray[j].Lname);
    printf("Address: ");
    scanf(" %[^\n]s",&studArray[j].add);
    printf("Mobile Number: ");
    scanf("%lld",&studArray[j].Mno);
    Rno[j]=j;
  }

   for(int j=0;j< nStuds;j++){
    printf(" Details of student with  Roll  no : %d \n",j+1);
    printf(" First Name:%s\n",studArray[j].Fname);
    printf(" Last name:%s\n ",studArray[j].Lname);
    printf("Address:%s\n",studArray[j].add);
    printf(" Mobile Number:%lld\n \n \n",studArray[j].Mno);
   }

}



 void enterGrades(){
   for(int i=0;i<nStuds;i++){
     int Ngrade[5];int gsum=0
     printf("Enter the grades for five subjects for Roll no:%d",i+1)
     printf(" latter Grade can be : E,A,B,C,D,P or F");
     for(j=0;j<5;j++){
       char a;
       printf("sub %d grade:",j+1);
       scanf("%c",&a);
       if(a==A || a==B || a==C || a==D || a==P || a==F || a==E){
	 studArray[i].grade[j]=a;
	 if(studArray[i].grade[j]==E) Ngrade[j]=10;
	 if(studArray[i].grade[j]==A) Ngrade[j]=9;
	 if(studArray[i].grade[j]==B) Ngrade[j]=8;
	 if(studArray[i].grade[j]==C) Ngrade[j]=7;
         if(studArray[i].grade[j]==D) Ngrade[j]=6;
	 if(studArray[i].grade[j]==P) Ngrade[j]=5;
	 if(studArray[i].grade[j]==F) Ngrade[j]=0;
	 gsum += Ngrade[j];
	    
       }else j--;
     }
     studArray[i].gpa= gsum/5.0;

     for(int j=0;j< nStuds;j++){
    printf(" Details of student with  Roll  no : %d \n",j+1);
    printf(" First Name:%s\n",studArray[j].Fname);
    printf(" Last name:%s\n ",studArray[j].Lname);
    printf(" gpa : %f \n", studArray[j].gpa);
     
     }

   }
 }


 void searchStud()
 { char temName[20];
   printf(" enter either first name or last name of student to be search:");
   scanf("%s",&temName);
   for(int k=0;k<nstuds;k++){
     if(strcasecmp(temName,studArray[k].Fname) || strcasecmp(temName,studArray[k].Lname){
       	  printf("roll no:%d",k+1);
          printf(" First Name:%s\n",studArray[k].Fname);
          printf(" Last name:%s\n ",studArray[k].Lname);
          printf("Address:%s\n",studArray[k].add);
          printf(" Mobile Number:%lld\n \n \n",studArray[k].Mno);
	  printf(" gpa : %f \n", studArray[k].gpa);
       }
   }
 }
