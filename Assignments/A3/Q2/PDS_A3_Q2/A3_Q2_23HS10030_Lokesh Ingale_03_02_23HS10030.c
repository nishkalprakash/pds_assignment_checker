//NAme:Lokesh Nitin Ingale
//Roll no:23HS10030
#include<stdio.h>
int main()
{
  int marks;
  printf("Enter marks of the student:");
  scanf("%d",&marks);
  if (marks>=90 && marks<100){
    printf("Grade: EX\n");}
  else if (marks>=80 &&marks<90){
    printf("Grade:A\n");}
  else if (marks>=70 &&marks<80){
    printf("Grade:B\n");}
  else if (marks>=60 &&marks<70){
    printf("Grade:C\n");}
  else if (marks>=50 &&marks<60){
    printf("Grade:D\n");}
  else if (marks>=35 &&marks<50){
    printf("Grade:P\n");}
  else if (marks<35){
    printf("Grade:F\n");}
  else{
    printf("Invalid Marks"); }
  return 0;
}
  
	 
