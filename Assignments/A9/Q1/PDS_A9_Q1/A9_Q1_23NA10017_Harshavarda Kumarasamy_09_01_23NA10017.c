//Roll No:<23NA10017>
//Name:<Harshavarda Kumarasamy>

#include <stdio.h>
#include <string.h>

typedef struct{
  char fname[20];
  char lname[20];
  char address[40];
  long int mobile;
  char grades[5];
  float gpa;
  int roll_num;
}student;

student studArray[50];
int nStuds;

void enrolStuds(){
  int i, c=0;
  char ch, temp[5];
  printf("Enter number of students:");
  scanf("%d", &nStuds);
  printf("Enter individual data:\n");
  for(i=0;i<nStuds;i++){
    printf("Student no.%d\n", i+1);
    printf("Enter first name:");
    scanf("%s", studArray[i].fname);
    printf("Enter last name:");
    scanf("%s", studArray[i].lname);
    printf("Enter address:");
    //scanf("%s", temp);
    getchar();
    fgets(studArray[i].address, 40, stdin);
    printf("Please enter mobile number of student:");
    scanf("%ld", &studArray[i].mobile);
  }

  for(i=0;i<nStuds;i++){
    studArray[i].roll_num= i+1;
    printf("%d.Name: %s %s, Address: %s Mobile No.: %ld\n",studArray[i].roll_num, studArray[i].fname, studArray[i].lname, studArray[i].address, studArray[i].mobile);
  }
  return;
    }
/*void displayStuds(){
  int i,max=0;
  char temp[50];
  for(i=0;i<nStuds;i++){
  for(j=0;j*/
      
void enterGrades(){
  int i, a, j, sum;
  for(i=0;i<nStuds;i++){

    printf("%d.Name: %s %s, Address: %s Mobile No.: %ld\n",studArray[i].roll_num, studArray[i].fname, studArray[i].lname, studArray[i].address, studArray[i].mobile);
   
   sum=0;
    for(j=0;j<5;j++){
      
       printf("Enter grade:");
       scanf(" %c", &studArray[i].grades[j]);
      if( studArray[i].grades[j]=='E'){
	a=10;
	sum+=a;
      }
      else if( studArray[i].grades[j]=='A'){
	a=9;
	sum+=a;
	}
      else if( studArray[i].grades[j]=='B'){
	a=8;
	sum+=a;
	}
      else if( studArray[i].grades[j]=='C'){
	a=7;
	sum+=a;
      }else if( studArray[i].grades[j]=='D'){
	a=6;
	sum+=a;
      }else if( studArray[i].grades[j]=='P'){
	a=5;
	sum+=a;
      }else if( studArray[i].grades[j]=='F'){
	a=0;
	sum+=a;
	}
    }
	  studArray[i].gpa=sum/5.0;
	  printf(" GPA=%f\n", studArray[i].gpa);
  }
  printf("Final output:\n");
  for(i=0;i<nStuds;i++){
    printf("%d.Name: %s %s, Address: %s Mobile No.: %ld GPA=%f\n",studArray[i].roll_num, studArray[i].fname, studArray[i].lname, studArray[i].address, studArray[i].mobile, studArray[i].gpa );
  }
     return;
    }
void searchStud(){
  int i;
  char s[20];
  printf("Enter a string:");
  scanf("%s", s);
  for(i=0;i<nStuds;i++){
    if(strcasecmp(studArray->fname , s)==0 || strcasecmp(studArray->lname , s)==0){
      printf("Given string matches with following details\n");
      printf("%d.Name: %s %sAddress: %s Mobile.No: %ld Grades:%c,%c,%c,%c,%c GPA=%f\n",studArray[i].roll_num, studArray[i].fname, studArray[i].lname, studArray[i].address, studArray[i].mobile,studArray[i].grades[0],studArray[i].grades[1],studArray[i].grades[2],studArray[i].grades[3],studArray[i].grades[4], studArray[i].gpa);
    }
  }
  return;
}
void modifyStudDetails(){
  int n, i;
  printf("Enter roll number of student:");
  scanf("%d", &n);
  i=n-1;
  printf("%d.Name: %s %s, Address: %s Mobile No.: %ld\n",studArray[i].roll_num, studArray[i].fname, studArray[i].lname, studArray[i].address, studArray[i].mobile);
  printf("Enter new address of student:");
  getchar();
  fgets(studArray[i].address, 40, stdin);
  printf("Please enter new mobile number of student:");
  scanf("%ld", &studArray[i].mobile);
  printf("%d.Name: %s %s, Address: %s Mobile No.: %ld\n",studArray[i].roll_num, studArray[i].fname, studArray[i].lname, studArray[i].address, studArray[i].mobile);
  return ;
}

void editStudGrades(){
  int n, j,i, a, sum;
  printf("Enter roll number of student:");
  scanf("%d", &n);
  i=n-1;
  printf("%d.Name: %s %sAddress: %s Mobile.No: %ld Grades:%c,%c,%c,%c,%c GPA=%f\n",studArray[i].roll_num, studArray[i].fname, studArray[i].lname, studArray[i].address, studArray[i].mobile,studArray[i].grades[0],studArray[i].grades[1],studArray[i].grades[2],studArray[i].grades[3],studArray[i].grades[4], studArray[i].gpa);
  printf("Enter new grades\n");
  for(j=0;j<5;j++){
      
       printf("Enter grade:");
       scanf(" %c", &studArray[i].grades[j]);
      if( studArray[i].grades[j]=='E'){
	a=10;
	sum+=a;
      }
      else if( studArray[i].grades[j]=='A'){
	a=9;
	sum+=a;
	}
      else if( studArray[i].grades[j]=='B'){
	a=8;
	sum+=a;
	}
      else if( studArray[i].grades[j]=='C'){
	a=7;
	sum+=a;
      }else if( studArray[i].grades[j]=='D'){
	a=6;
	sum+=a;
      }else if( studArray[i].grades[j]=='P'){
	a=5;
	sum+=a;
      }else if( studArray[i].grades[j]=='F'){
	a=0;
	sum+=a;
	}
    }
  studArray[i].gpa=sum/5.0;
  printf("Updated Info:\n");
  printf("%d.Name: %s %sAddress: %s Mobile.No: %ld Grades:%c,%c,%c,%c,%c GPA=%f\n",studArray[i].roll_num, studArray[i].fname, studArray[i].lname, studArray[i].address, studArray[i].mobile,studArray[i].grades[0],studArray[i].grades[1],studArray[i].grades[2],studArray[i].grades[3],studArray[i].grades[4], studArray[i].gpa);

  return;
  
}
int main()
{int n;
  nStuds=0;
  while (1){
  printf("Enter any number between 1 and 8:");
  scanf("%d", &n);
  switch(n){
  case 1:enrolStuds();
    break;
  case 2:enterGrades();
    break;
    // case 3:displayStuds;
    // break;
  case 4:searchStud();
    break;
  case 5:editStudGrades();
    break;
  case 6:modifyStudDetails();
     break;
    // case 7:dispMeritList;
     // break;
  case 8:return 0;
  }
  }
}

  
  
  
