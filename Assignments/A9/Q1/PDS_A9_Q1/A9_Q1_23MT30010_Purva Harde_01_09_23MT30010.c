//Name:<Purva Harde>
//Roll NO:<23MT30010>
#include<stdio.h>
    struct student {
        char first_name[20];
        char last_name[20];
        char address[40];
        long mobile_no[10];
        char grades[5];
        float gpa[];
    }; studArray[50];
    return 0;
}

void enrolStuds();
void enterGrades();
void displayStuds();
void searchStuds();
void editStudGrades();
void modifyStudDetails();
void dispMeritList();


    

    int main (){
        int studArray[50];
        int nStuds=0;
        int x;

	 printf("Enter the number between 1 to 8\n");{
	 if(x=1){
	 printf("Enrol student\n");
	 Enrol student = enrolStuds();
	 }
	  if(x=2){
	      printf("Enter Grade\n");
	      Enter Grade = enterGrade();
	  }
	  if (x=3){
	      printf("Display students\n");
	      Display student = displayStuds();
	  }
	  if(x=4){
	    printf("search student\n");
	    search student = searchStuds();
	  }
	  if(x=5){
	    printf("Edit Students Grade\n");
	    Edit Students Grade = editStudGrade();
	  }
	  if(x=6){
	    printf("Modify students Details\n");
	    Modify students Details = modifyStudDetail();
	  }
	  if(x=7){
	    printf("Diplay Merit List\n");
	    Display Merit List = dispMeritList();
	  }
	  if(x=8){
	    printf("Exit the program\n");
	    
	  }
	 }
	 return 0;
    }


void enrolStuds(){
     int nStuds;
      printf("Enter the number of students\n");
      scanf("%d", &nStuds);{
	for(int i=0; i<=nStuds; i++){
      printf("Enter the first name\n");
      scanf(" %c", &studArray[].first_name);
      printf("Enter the last name\n");
      scanf(" %c", &studArray[].last_name);
      printf("Enter the adress\n");
      scanf(" %c", &studArray[].address);
      printf("Enter mobile number\n");
      scanf("%lf", &studArray[].mobile_no);
	}
      }
      return 0;
   }
       

void enterGrades(){
  for(int a=0; a<=nStuds; a++){
    for(int b=0;b<5; b++)
    
  
  
	



        


        

    }


