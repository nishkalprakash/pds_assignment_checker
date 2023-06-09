#include<stdio.h>
#include<string.h>
int main(){
typedef struct student{
    char rollno[10];
    char branch[2];
    int day;
   int month;
    int year;
} student;
int n;
scanf("%d",&n);
student number[n];
for(int i=0;i<n;i++){
    printf("enter your roll number:")
    scanf("%s",number[i].rollno);
   printf("enter your branch:");
    scanf("%s",number[i].branch);
    printf("enter the day of the date of birth:");
    scanf("%d",&number[i].day);
    printf("enter the month of the date of birth:");
    scanf("%d",&number[i].month);
    printf("enter the year of the date of birth:");
scanf("%d",&number[i].year);
}
for(int i=0;i<n;i++){
    printf("%s",number[i].rollno);
    printf("%s",number[i].branch);
    printf("%d/%d/%d\n",number[i].day,number[i].month,number[i].year);
}
return 0;
}