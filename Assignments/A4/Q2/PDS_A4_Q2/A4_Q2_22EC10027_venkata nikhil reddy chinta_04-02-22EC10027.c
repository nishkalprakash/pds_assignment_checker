/*
section : 2
name : chinta venkata nikhil reddy
roll no : 22EC10027
assignment : 4
description : grade caluclation for number of students

*/
#include<stdio.h>
int main(){
float att,ct,ms,es,marks=0,n,a=1;
printf("\nenter the number of students n : \n");
scanf("%f" , &n);
while(a<=n){
printf("\ngive your marks for caluclation of grade (in order attendence(out of 40),class test(out of 20),midsem(out of 60),endsem(out of 100)) : \n");
scanf("%f%f%f%f" , &att , &ct , &ms , &es);
if (att>40)
{
    printf(" give correct marks \n");
    break;
}
if(ct>20)
{
    printf("give correct marks\n");
    break;
}
if(ms>60)
{
    printf("give correct marks\n");
    break;
}
if(es>100)
{
    printf("give correct marks\n");
    break;
}

 marks = (att/40)*10 +(ct/20)*20 + (ms/60)*30 + (es/100)*40;
 printf("\nyour marks is %f \n" , marks);
 printf("\nstudent %.0f grade is\n" ,a);
if((marks<=100)&&(marks>=90))
{
    printf(" EX ");
}
else if((marks<90)&&(marks>=80))
{
    printf(" A");
}
else if((70<=marks)&&(marks<80))
{
    printf("B");
}
else if((60<=marks)&&(marks<70))
{
    printf(" c");
}
else if((50<=marks)&&(marks<60))
{
    printf("D");
}
else if((35<=marks)&&(marks<50))
{
    printf("P");
}
else if((0<=marks)&&(marks<35))
{
    printf(" F");
}
else
{
    printf("give the marks within the range");
}

a++;
}
   return 0;
}
