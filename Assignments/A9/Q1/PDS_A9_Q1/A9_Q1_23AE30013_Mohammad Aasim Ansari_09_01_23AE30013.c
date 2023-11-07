#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct student{
  char first_name[21];
  char last_name[21];
  char address[41];
  unsigned int mobile_number;
  char grades[5];
  float gpa;
};
struct student studarray[50];
int nstuds=0;
void enrolstuds(){
  printf("Enter the number of students :");
  scanf("%d",&nstuds);
  for(int i=0; i<nstuds;i++){
    printf("Enter the first name of student %d : ",i+1);
    scanf("%s",studarray[i].first_name);
    printf("Enter the last name of student %d : ",i+1);
    scanf("%s",studarray[i].last_name);
    printf("Enter the address of student %d : ",i+1);
    scanf("%s",studarray[i].address);
    printf("Enter mobile number of student %d : ",i+1);
    scanf("%u",&studarray[i].mobile_number);
    printf("Enrolled student %d with roll number %d\n",i+1,i+1);
  }
  printf("Enrollment done successfully.\n");
  printf("\n\n Details of Students are :\n");
  for (int i=0;i<nstuds;i++){
    printf("Roll Number : %d , Name : %s %s , Address : %s , Mobile Number : %u ",i+1,studarray[i].first_name,studarray[i].last_name,studarray[i].address,studarray[i].mobile_number);
  }
}

void enterGrades(){
  for (int i=0;i<nstuds;i++){
    printf("Enter the letter grades of student %d (A,B,C,D,E or F)\n",i+1);
    printf("For subject 1:");
    scanf("%c",&studarray[i].grades[0]);
    printf("For subject 2:");
    scanf("%c",&studarray[i].grades[1]);
    printf("For subject 3:");
    scanf("%c",&studarray[i].grades[2]);
    printf("For student 4:");
    scanf("%c",&studarray[i].grades[3]);
    printf("For subject 5:");
    scanf("%c",studarray[i].grades[4]);
    float Total_points=0;
    for(int j=0;j<nstuds;j++){
      char grade= toupper(studarray[i].grades[j]);
      switch(grade){
      case'E':
	Total_points+=10.0;
	break;
      case'A':
	Total_points+=9.0;
	break;
      case'B':
	Total_points+=8.0;
	break;
      case'C':
	Total_points+=7.0;
	break;
      case'D':
	Total_points+=6.0;
	break;
      case'P':
	Total_points+=5.0;
	break;
      case'F':
	Total_points+=0.0;
	break;
      default:
	printf("Invalid Grade Entered.\n");
	j--;
      }
    }
    studarray[i].gpa=Total_points/5;
    printf("Grades and GPA entered for student %d\n",i+1);
  }
  printf("Student details after entering grades.\n");
  for(int i=0;i<nstuds;i++){
    printf("Roll Number : %d , Name : %s %s , GPA : %0.2f\n",i+1,studarray[i].first_name,studarray[i].last_name,studarray[i].gpa);
  }
}
/*void displaystuds(){
  for (int i=0;i<nstuds-1;i++){
    for(int j=0; j<nstuds-i-1;j++){
      if(strcmp(studarray[j].first_name,studarray[j+1].firstname)>0&&
	 )
    }
  }
}*/
void editStudGrades(){
  int roll_number;
  printf("Enter the roll number of the student u want to update :");
  scanf("%d",&roll_number);
  if(roll_number<1||roll_number>nstuds){
    printf("Enter the correct Roll number.\n");
    break;
  }
  printf("Details of the student %d before updating the grades\n",roll_number);
  printf("Roll Number :%d, Name : %s %s , GPA : %0.2f",roll_number,studarray[roll_number-1].first_name,studarray[roll_number-1].last_name,studarray[roll-number-1].gpa);
  printf("Enter the updated grades of student %d\n",roll_number);
  printf("For subject 1:");
  scanf("%c",studarray[roll_number-1].grades[0]);
  printf("For subject 2:");
  scanf("%c",studarray[roll_number-1].grades[1]);
  printf("For subject 3:");
  scanf("%c",studarray[roll_number-1].grades[2]);
  printf("For subject 4:");
  scanf("%c",studarray[roll_number-1].grades[3]);
  printf("For subject 5:");
  scanf("%c",studarray[roll_number-1].grades[4]);
  float Total_points=0;
  for (int i=0;i<5;i++){
    char grade= toupper(studarray[roll_number-1].grade[i]);
    switch(grade){
    case'E':
      Total_points+=10.0;
      break;
    case'A':
      Total_points+=9.0;
      break;
    case'B':
      Total_points+=8.0;
      break;
    case'C':
      Total_points+=7.0;
      break;
    case'D':
      Total_points+=6.0;
      break;
    case'P':
      Total_points+=5.0;
      break;
    case'F':
      Total_points+=0.0;
      break;
    default:
      printf("Enter the correct grade.\n");
      i--;
    }
  }
  studarray[roll_number-1].gpa=Total_points/5;
  printf("Grade of Roll Number %d is updated successfully.\n",roll_number);
  printf("\nDetails of the student of Roll number %d after grade update\n",roll_number);
  printf("Roll Number :%d, Name : %s %s , GPA : %0.2f\n",roll_number,studarray[roll_number-1].first_name,studarray[roll_number-1].last_name,studarray[roll_number-1].gpa);
}

void modifyStudDetails(){
  int roll_number;
  printf("Enter the Roll Number of the student %d of which u want to modify the details : ",roll_number);
  scanf("%d",&roll_number);
  if(roll_number<1||roll_number>nstuds){
    printf("Entered roll number does not exist.\n");
    break;
  }
  printf("Details of the student of roll number %d before modification\n",roll_number);
  printf("\nName : %s %s , Mobile Number : %u , Address : %s\n",studarray[roll_number-1].first_name,studarray[roll_number-1].last_name,studarray[roll_number-1].mobile_number,studarray[roll_number-1].address);
  printf("Enter the updated mobile number : ");
  scanf("%u",&studarray[roll_number-1].mobile_number);
  printf("Enter the updated address : ");
  scanf("%s",studarray[roll_number-1].address);
  printf("\nDetails of student of roll number %d after modifications\n",roll_number);
  printf("Name : %s %s , Mobile Number : %u , Address : %s",studarray[roll_number-1].first_name,studarray[roll_number-1].last_name,studarray[roll_number-1].mobile_number,studarray[roll_number-1].address);
}

void dispMeritList(){
  for(int i=0;i<nstuds-1;i++){
    for(int j=0;j<nstuds-i-1;j++){
      if(studarray[j].gpa<studarray[j+1].gpa){
	struct temp=studarray[j].gpa;
	studarray[j].gpa=studarray[j+1].gpa;
	studarray.[j+1].gpa= temp;
      }
    }
  }
  printf("Display of Merit List:\n");
  for(int i=0;i<nstuds;i++){
    printf("Roll Number :%d GPA : %0.2f\n",i+1,studarray[i].gpa);
  }
}


    


int main(){
  int choice;
  printf("Enter the choice for calling the function\n1.Enrol Student\n2.Enter Grades\n3.Display studs\n4.Search Studs\n5.Edit Stud Grades\n6.Modify Student Details\n7.Display Merit List\n8.Exit the program\n");
  scanf("%d",&choice);
  switch(choice){
  case'1':
    enrolstuds();
    break;
  case'2':
    enterGrades();
    break;
  case'3':
    displaystuds();
    break;
  case'4':
    searchstuds();
    break;
  case'5':
    editStudGrades();
    break;
  case'6':
    modifyStudDetails();
    break;
  case'7':
    dispMeritList();
    break;
  case'8':
    printf("Exiting the program");
    return 0;
  default:
    printf("Please enter the correct choice.");
    break;
  }
}
    
    
	
	
   
	
    
    

    
  
