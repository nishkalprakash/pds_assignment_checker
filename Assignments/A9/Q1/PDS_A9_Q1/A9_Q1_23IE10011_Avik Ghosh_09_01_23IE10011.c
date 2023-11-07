//Name: Avik Ghosh
//Roll no.: 23IE10011
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
  char f_name[21];
  char l_name[21];
  char address[41];
  long int mobile;
  char grades[5];
  float gpa;
};
struct student studArray[50];
int nStuds; //Number of students in the class

void enrolStuds(){
  printf("Enter the number of students: ");
  scanf("%d",&nStuds);
  int i;
  for(i=0;i<nStuds;i++){
    printf("Enter details of student with roll number %d\n",i+1);
    printf("Enter the first name: ");
    scanf("%s",studArray[i].f_name);
    printf("Enter the last name of student: ");
    scanf("%s",studArray[i].l_name);
    printf("Enter the address of student: ");
    scanf("%s",studArray[i].address);
    printf("Enter the mobile number of student: ");
    scanf("%ld",&studArray[i].mobile);
  }
  printf("Details of students\n");
  printf("Roll number\tFirst name\t Last name\t Address\t Mobile number\n");
  for(i=0;i<nStuds;i++){
    printf("%d\t\t%s\t%s\t%s\t%ld\n",i+1,studArray[i].f_name,studArray[i].l_name,studArray[i].address,studArray[i].mobile);
  }
}

void enterGrades(){
  int i,j,p,sum; char g;
  for(i=0;i<nStuds;i++){
    printf("Roll:%d\tFirst name: %s\tLast name: %s\n",i+1,studArray[i].f_name,studArray[i].l_name);
    printf("Enter the grades of five subjects(of any E,A,B,C,D,P or F\n");
    p=0; sum=0; //Initialising p and sum for each student
    while(j<5){
      j = p;
      scanf("%c",&g);
      if(g == 'E' || g == 'A' || g == 'B' || g == 'C' || g == 'D' || g == 'P' || g == 'F'){
	studArray[i].grades[j] = g;
	if(studArray[i].grades[j] == 'E')
	  sum += 10 * 3;
	else if(studArray[i].grades[j] == 'A')
	  sum += 9 * 3;
	else if(studArray[i].grades[j] == 'B')
	  sum += 8 * 3;
	else if(studArray[i].grades[j] == 'C')
	  sum += 7* 3;
	else if(studArray[i].grades[j] == 'D')
	  sum += 6* 3;
	else if(studArray[i].grades[j] == 'P')
	  sum += 5* 3;
	else if(studArray[i].grades[j] == 'F')
	  sum += 0* 3;
	p++;
      }
      else{
	printf("Wrong grade entered and please re_enter it\n");
	p = j;
      }
    }
    studArray[i].gpa = sum/(5.0*3.0);
    printf("GPA of student (credits of all subject = 3) = %f",studArray[i].gpa);
  }
  printf("Details of students\n");
  printf("Roll number\tFirst name\t Last name\t Address\t Mobile number\nGPA");
  for(i=0;i<nStuds;i++){
    printf("%d\t\t%s\t%s\t%s\t%ld\t%f\n",i+1,studArray[i].f_name,studArray[i].l_name,studArray[i].address,studArray[i].mobile,studArray[i].gpa);
  }
}

void displayStuds(){
  int i,j; struct student temp;
  for(i=0;i < nStuds;i++){
    for(j=i+1;j < nStuds; j++){
      if(strcmp(studArray[i].f_name,studArray[j].f_name) < 0){          //Sorting based on first name
	temp = 	studArray[i];
	studArray[i] = studArray[j];
	studArray[j] = temp;
      }
      else if(strcmp(studArray[i].f_name,studArray[j].f_name) == 0){
	if(strcmp(studArray[i].l_name,studArray[j].l_name) < 0){        //Sorting based on last name
	  temp = 	studArray[i];
	  studArray[i] = studArray[j];
	  studArray[j] = temp;	  
	}
      }
    }
  }
  printf("After sorting\n");
  printf("Roll number\tFirst name\t Last name\t Address\t Mobile number\nGPA");
  for(i=0;i<nStuds;i++){
    printf("%d\t\t%s\t%s\t%s\t%ld\t%f\n",i+1,studArray[i].f_name,studArray[i].l_name,studArray[i].address,studArray[i].mobile,studArray[i].gpa);
  }
}

void searchStud(){
  char word[21];int i,k=1;
  scanf("%s",word);
  for(i=0;i<nStuds;i++){
    if(strcasecmp(word,studArray[i].f_name) == 0 || strcasecmp(word,studArray[i].l_name) == 0){
      printf("Roll:%d  First name: %s  Last name: %s Address: %s Mobile: %ld\n",i+1,studArray[i].f_name,studArray[i].l_name,studArray[i].address,studArray[i].mobile);
      k=0;
    }
  }
  if(k)
    printf("Not found\n");
}

void modifyStudDetails(){
  int roll,i;
  printf("Enter the roll number: ");
  scanf("%d",&roll);
  i=roll-1;
  if(roll > nStuds)
    printf("Wrong roll number\n");
  else{
     printf("Roll:%d  First name: %s  Last name: %s Address: %s Mobile: %ld\n",i+1,studArray[i].f_name,studArray[i].l_name,studArray[i].address,studArray[i].mobile);
  printf("Enter new address: ");
  scanf("%s",studArray[i].address);
  printf("Enter new mobile number: ");
  scanf("%ld",studArray[i].mobile);
  printf("Updated details\n");
   printf("Roll:%d  First name: %s  Last name: %s Address: %s Mobile: %ld\n",i+1,studArray[i].f_name,studArray[i].l_name,studArray[i].address,studArray[i].mobile);
  }
}

void editStudGrades(){
  int roll,i,j; int sum;
  printf("Enter the roll number: ");
  scanf("%d",&roll);
  i=roll-1;
  printf("Roll:%d  First name: %s  Last name: %s Address: %s Mobile: %ld\n",i+1,studArray[i].f_name,studArray[i].l_name,studArray[i].address,studArray[i].mobile);
  printf("Previous 5 grades of student\n");
  for(j=0;j<5;j++)
    printf("%c\t",studArray[i].grades[j]);
  printf("Enter new grades\n");
  for(j=0;j<5;j++){
    scanf("%c",studArray[i].grades[j]);
    if(studArray[i].grades[j] == 'E')
      sum += 10 * 3;
    else if(studArray[i].grades[j] == 'A')
      sum += 9 * 3;
    else if(studArray[i].grades[j] == 'B')
      sum += 8 * 3;
    else if(studArray[i].grades[j] == 'C')
      sum += 7* 3;
    else if(studArray[i].grades[j] == 'D')
      sum += 6* 3;
    else if(studArray[i].grades[j] == 'P')
      sum += 5* 3;
    else if(studArray[i].grades[j] == 'F')
      sum += 0 * 3;
  }
  studArray[i].gpa = sum/ (5.0 *3.0);
	
  printf("Details updated\n");
  printf("Roll:%d  First name: %s  Last name: %s Address: %s Mobile: %ld\n",i+1,studArray[i].f_name,studArray[i].l_name,studArray[i].address,studArray[i].mobile);
  for(j=0;j<5;j++)
    printf("%c\n",studArray[i].grades[j]);
  printf("GPA = %f\n",studArray[i].gpa);
}
       
void dispMeritList(){
  struct student temp;
  int i,j;
  for(i=0;i < nStuds;i++){
    for(j=i+1;j < nStuds; j++){
      if(studArray[j].gpa > studArray[i].gpa){
	temp = studArray[j];   
	studArray[j]  = studArray[i];   
	studArray[i]  = temp;
      }
    }
  }
      if(studArray[j].gpa == studArray[i].gpa){
	  for(i=0;i < nStuds;i++){
	    for(j=i+1;j < nStuds; j++){
	      if(strcmp(studArray[i].l_name,studArray[j].l_name) < 0) {        //Sorting based on last name
		temp = 	studArray[i];
		studArray[i] = studArray[j];
		studArray[j] = temp;
	      }
	    }
	  }
	}
	}

   

    int main(){
      nStuds=0;
      int ch,k=1;
      while(k){
	printf("1. Enrol student\n2. Enter grade\n3. Display students\n4. Search student\n5. Edit student grades\n6. Modify student details\n7. Display merit list\n8. Exit the program\n");
	printf("Enter your choice\n");
	scanf("%d",&ch);
	switch(ch){
	case 1:enrolStuds();
	  break;
	case 2:enterGrades();
	  break;
	case 3:displayStuds();
	  break;
	case 4:searchStud();
	  break;
	case 5:modifyStudDetails();
	  break;
	case 6:editStudGrades();
	  break;
	case 7:dispMeritList();
	  break;
	case 8:k=0;
	  break;
	}
      }   
      return 0;
    }
