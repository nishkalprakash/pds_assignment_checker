//name-ANSH KUMAR
//ROLL-23EX10004
#include<stdio.h>
#include<string.h>
struct student {
  char firstname[50];
  char lastname[50];
  char address[50];
  int mobnum;
  char grades[7];
  float GPA;
};
  struct student studArray[50];
int nstuds;
void enrolstuds(){
  printf("enter the number of students\n");
  scanf("%d",&nstuds);
  printf("Enter the firstname, lastname,address ,mobile number respectively in the array\n");
  for(int i=0;i<nstuds;i++){
    printf("enter firstname of student : %d \n",i+1);
    scanf("%s",&studArray[i].firstname);
     printf("enter lastname of student : %d \n",i+1);
      scanf("%s",&studArray[i].lastname);
      printf("enter address of student : %d \n",i+1);
       scanf("%s",&studArray[i].address);
       printf("enter the mob no. of student : %d\n",i+1);
       scanf("%d", &studArray[i].mobnum);
  }
       for(int i=0;i<nstuds;i++){
    printf("student : %d, firstname :%s, lastname: %s ,address: %s, mob no: %d \n", i+1,studArray[i].firstname,studArray[i].lastname,studArray[i].address,studArray[i].mobnum);

       }
       
}


void entergrades(){
  
   printf("enter the number of students\n");
  scanf("%d",&nstuds);
  int roll[nstuds];
  float GPA;
     printf("Enter the roll number,firstname, lastname and grades respectively in the array\n");
  for(int i=0;i<nstuds;i++){
    printf("enter roll number of student : %d \n",i+1);
    scanf("%d",&roll[i]);
     printf("enter firstname of student : %d \n",i+1);
    scanf("%s",&studArray[i].firstname);
     printf("enter lastname of student : %d \n",i+1);
      scanf("%s",&studArray[i].lastname);
      printf("enter grades of student : %d \n",i+1);
       scanf("%s",&studArray[i].grades);
       if(studArray[i].grades=='A'){
	    
	 }
	 else if(studArray[i].grades=='B'){
	   GPA=8.0;
	 }
	  else if(studArray[i].grades=='C'){
	   GPA=7.0;
	 }
	  else if(studArray[i].grades=='D'){
	   GPA=6.0;
	 }
	  else if(studArray[i].grades=='P'){
	   GPA=5.0;
	 }
	  else if(studArray[i].grades=='F'){
	   GPA=0.0;
	 }
	  else if(studArray[i].grades=='E'){
	   GPA=10.0;
	  }
	  else {
	    printf("wrong grade");

	    continue;
	  }
	  
  }
  for(int i=0;i<nstuds;i++){
    printf("Student :%d , roll no :%d ,firstname :%s, lastname :%s, GPA: %f \n", i+1,roll[i],  studArray[i].firstname,  studArray[i].lastname,GPA);
  }
}

int main(){
  nstuds=0;
  int n;
  while(1){
    printf("the menu is : \n");
    printf("1. Enrol student\n");
    printf("2. Enter grade\n");
    printf("3. display students\n");
    printf("4. search students\n");
    printf("5. edit student grades\n");
    printf("6. modify student details\n");
    printf("7. display merit list\n");
    printf("8. exit the program\n");
    printf("enter the number between 1-8\n");
    scanf("%d",&n);
    if(n==1){
      enrolstuds();
    }
    else if(n==2){
      entergrades();
      
  }
    else if (n==8){
      break;
  }
  }
   
  return 0;
}

    
