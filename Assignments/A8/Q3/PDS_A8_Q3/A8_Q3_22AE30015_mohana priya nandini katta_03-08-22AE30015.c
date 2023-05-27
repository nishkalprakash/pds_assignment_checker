#include<stdio.h>
#include<stdlib.h>
struct student{
 char Rollno[10];
 float marks[3];
 float total;

} s[3];
int main()
{
 int i;
 printf("Enter data of students /n");
 for ( i=0 ; i<3; ++i) {
  printf("Enter Roll no:");
  scanf("%s",s[i].Rollno);
  printf("Enter marks:") ;
  scanf("%f",&s[i].marks);
  printf("Enter Total:");
  scanf("%f",&s[i].total );
 }
 for (i=0 ; i<3 ; ++i){
    printf("Roll no:");
    puts(s[i].Roll no);
    printf("marks: %lf",s[i].marks);
    printf("Total: %lf",s[i].total);

 }
 return 0;
}
