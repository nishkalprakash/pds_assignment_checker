#include<stdio.h>

struct Student{
char RollNo[10];
float marks[3];
float total;
    }s[5];

int main(){

int n, mrk ,std;
printf("enter the number of students :");
scanf("%d",&n);

printf("enter the marks of the student :");
scanf("%f",&mrk);

printf("enter the name of the student :");
scanf("%s",&std);


return 0;
}
