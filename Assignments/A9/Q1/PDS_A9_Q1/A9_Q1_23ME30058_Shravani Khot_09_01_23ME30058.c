//Shravani Khot
//23ME30058

#include <stdio.h>
#include <string.h>

struct student{
  char first_name[20];
  char last_name[20],address[40];
  unsigned int mob_no ;
  char grades[5];
  float gpa ;
  long int roll_no;
};
  struct student studArray[50];

int nStuds ;

void enrolStuds(){
  int temp;
  printf("Enter no. of students \n");
 
  scanf("%d",&temp);
  
  nStuds = temp ;

  for (int i=0 ; i<nStuds ; i++){
    
    printf("Enter fist name \n");
    scanf("%s",studArray[i].first_name);
    printf("Enter last name \n");
    scanf("%s",studArray[i].last_name);
    printf("Enter address \n");
    scanf("%s",studArray[i].address);
    printf("Enter mobile no \n");
    scanf("%u",&studArray[i].mob_no);

    studArray[i].roll_no = i+1 ;
    
  }
  
  for (int i=0 ; i<nStuds ; i++){
    
    printf("Roll no = %ld \n Name = %s %s \n Address = %s \n mobile no = %u \n",studArray[i].roll_no,studArray[i].first_name,studArray[i].last_name,studArray[i].address,studArray[i].mob_no);}

}

void enterGrades(){
  char temp_grade[100][5] ;
    int avg[5];
    
    for (int i=0 ; i<nStuds ; i++){
    
    printf("Roll no = %ld \n Name = %s %s \n Address = %s \n mobile no = %u \n",studArray[i].roll_no,studArray[i].first_name,studArray[i].last_name,studArray[i].address,studArray[i].mob_no);

    for (int j=0 ; j<5 ; j++ ) {
    printf("Enter grade in subject %d \n",j+1);
    scanf(" %c",&temp_grade[i][j]);
    
    if (temp_grade[i][j] == 'E' || temp_grade[i][j] == 'A' ||temp_grade[i][j] == 'B' ||temp_grade[i][j] == 'C' ||temp_grade[i][j] == 'D' ||temp_grade[i][j] == 'P' ||temp_grade[i][j] == 'F')
      
      studArray[i].grades[j]=temp_grade[i][j];
    
    else {printf("Invalid grade, enter again \n ");
      j-- ;}
    
    }
    
  }
  
  
}

void displayStuds(){
}

void searchStuds(){
  
  char temp_string[20];

  printf("Enter string \n");
  scanf("%s",temp_string);

  for (int i=0 ; i<nStuds ; i++) {
    if (strcmp(temp_string,studArray[i].first_name)==0)  printf("Roll no = %ld \n Name = %s %s \n Address = %s \n mobile no = %u \n",studArray[i].roll_no,studArray[i].first_name,studArray[i].last_name,studArray[i].address,studArray[i].mob_no);
    else if (strcmp(temp_string,studArray[i].last_name)==0)  printf("Roll no = %ld \n Name = %s %s \n Address = %s \n mobile no = %u \n",studArray[i].roll_no,studArray[i].first_name,studArray[i].last_name,studArray[i].address,studArray[i].mob_no);
  }
  
}

void editStudGrades(){
  int t ;
  printf("Enter roll no \n ");
  scanf("%d",&t);

  for (int i=0 ; i<nStuds ; i++){
 
  if (studArray[i].roll_no == t) printf("Roll no = %ld \n Name = %s %s \n Address = %s \n mobile no = %u \n grades = %c,%c,%c,%c,%c \n" ,studArray[i].roll_no,studArray[i].first_name,studArray[i].last_name,studArray[i].address,studArray[i].mob_no,studArray[i].grades[0],studArray[i].grades[1],studArray[i].grades[2],studArray[i].grades[3],studArray[i].grades[4]);
printf("Enter updated grades \n");
                                for (int j=0 ; j<5 ; j++){
				
				scanf("%c",&studArray[i].grades[j]);
				      }
				      
				printf("Updated : \n");
				printf("Roll no = %ld \n Name = %s %s \n Address = %s \n mobile no = %u \n grades = %c,%c,%c,%c,%c \n"
				       ,studArray[i].roll_no,studArray[i].first_name,studArray[i].last_name,studArray[i].address,studArray[i].mob_no,studArray[i].grades[0],studArray[i].grades[1],studArray[i].grades[2],studArray[i].grades[3],studArray[i].grades[4]);
				       }
				
     
  
}

void modifyStudGrades(){}

void dispMeritList(){}


int main(){
  int nStuds = 0,n ;
 

  while (1) {
    
     printf("Enter no. between 1-8 \n 1.Enrol student \n 2.Enter grade\n 3.Display\n 4.Search Student\n 5.Edit Student grades\n 6.Modify Student Details\n 7.Display merit list \n8.Exit the prog \n");

  scanf("%d",&n);
  
      switch (n){
      case 1 : enrolStuds();
	  break;
      case 2 : enterGrades();
	  break;
      case 3 : displayStuds();
	break;
      case 4 : searchStuds();
	break;
      case 5 : editStudGrades();
	break;
      case 6 : modifyStudGrades();
	break;
      case 7 : dispMeritList();
	break;
      case 8 : return 0;
	break;
      default : printf("Enter no btw 1-8 \n");
      }
  }
  
  
  return 0;
}
