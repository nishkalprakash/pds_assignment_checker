//Name : Shine Srivastava
//Roll no. : 23MF3IM17
#include<stdio.h>
int main(){
  
float marks;
printf("Enter your marks(0<=marks<=100):\n");
scanf("%f",&marks);

if(marks>=90)
{
  printf("Grade = Ex\n");
 }


 else if(marks>=80 && marks<90)
{
  printf("Grade = A\n");
 }


 else if(marks>=70 && marks<80)
{
  printf("Grade = B\n");
 }


 else if(marks>=60 && marks<70)
{
  printf("Grade = C\n");
 }

else if(marks>=50 && marks<60)
{
  printf("Grade = D\n");
 }

else if(marks>=35 && marks<50)
{
  printf("Grade = P\n");
 }

else
{
  printf("Grade = F\n");
 }

return 0;
}
