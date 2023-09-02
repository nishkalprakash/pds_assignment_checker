//Roll no.-23BT10015
//Name-Ishansh Yadav
#include<stdio.h>

int main()
{ int marks;
    printf("Enter the marks out of hundered scored by the student in the subject:");
    scanf("%d", &marks);
    if(marks<0||marks>100) printf("Wrong input! Enter the correct input");
    else if(marks<35) printf("Grade:F");
    else if(35<=marks&&marks<50) printf("Grade:P");
    else if(50<=marks&&marks<60) printf("Grade:D");
    else if(60<=marks&&marks<70) printf("Grade:C");
    else if(70<=marks&&marks<80) printf("Grade:B");
    else if(80<=marks&&marks<90) printf("Grade:A");
    else if(90<=marks&&marks<=100) printf("Grade:EX");
   return 0;
}