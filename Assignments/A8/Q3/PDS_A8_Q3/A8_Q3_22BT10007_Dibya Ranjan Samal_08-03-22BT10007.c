#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student {
char rollno[10];
float marks[3];
float total;
};
int main(){
  int n;
  struct student s[n];
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%s",s[i].rollno);
    for(int j=0;j<3;j++){
    scanf("%f",&s[i].marks[j]);}


  }
  printf("Student Records:\n");
  printf("Sorted student records: ");



  }

return 0;}
