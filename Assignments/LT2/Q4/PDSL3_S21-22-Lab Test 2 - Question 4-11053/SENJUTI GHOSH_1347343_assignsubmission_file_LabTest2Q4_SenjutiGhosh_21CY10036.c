/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#define MAX 100
/*capacity of array of structures in macro*/
#include<stdio.h>
#include<string.h>
/*Structure Student defined as mentioned in the question*/
typedef struct{
        char name[30];
        char gender[10];
        float marks;
}Student;
/*Function to add user input of student details to the array of structures of type Student*/
void inputStudentdetails(Student data[],int n){
      printf("Enter the student details");
      for (int i=0;i<n;i++){
           scanf("%s",data[i].name);
           scanf("%s",data[i].gender);
           scanf("%f",&data[i].marks);
      }
      return;
}
/*function to print the previously inputted student details in the format specified in question*/
void printStudentdetails(Student data[],int n){
     printf("Printing the student records\n");
     for(int i=0;i<n;i++){
         printf("%s %s - %f\n",data[i].name,data[i].gender,data[i].marks);
     }
     return;
}
/*function to find and print the best girl student*/
void printbestgirlStudent(Student data[],int n){
     int max=-1,index;
     /*max stores the maximum marks and is initialised to -1 assuming there is no negative marking*/
     /*index stores the index value of the current maximum marks stored in max*/
     char temp[10]="girl";
     /*the string temp is declared to compare and ensure that maximum marks for only girl students are stored*/
     for (int i=0;i<n;i++){
          if (strcmp(data[i].gender,temp)==0){
              if (data[i].marks>max){
                  max=data[i].marks;
                  index=i;
              }
          }
     }
     /*The name of girl student with maximum marks is printed*/
     printf("Best girl student:%s",data[index].name);
     return;
}
/*Main function*/
int main(){
int n;
/*data is an array of structures of type Student*/
Student data[MAX];
/*n is number of records*/
printf("Enter number of records\n");
scanf("%d",&n);
inputStudentdetails(data,n);
printStudentdetails(data,n);
printbestgirlStudent(data,n);
return 0;
}
