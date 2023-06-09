#include<stdio.h>
#include<stdlib.h>
struct Student{
char rollNo[9];
char Branch[2];

   struct DOB{
       int dd;
       int mm;
       int yy;
   } DOB;
}std;
int main()
{
int noofRecords;
printf("Enter the number of records: ");
scanf("%d",&noofRecords);
struct Student std;
printf ("Enter rollNo:");
gets(std.rollNo);
printf("Enter Branch:");
gets(std.Branch);
printf("Enter DOB[DD MM YY] format: ");
scanf("%d%d%d", &std.DOB.dd, &std.DOB.mm, &std.DOB.yy);
printf("rollNo : %s \nBranch: %s \nDOB: %02d / %02d / %02d", std.rollNo,
std.Branch, std.DOB.dd, std.DOB.mm, std.DOB.yy);

}

printf("student data:");
for ( int i = 0 ; i<noofrecords; ++i){
printf("rollNo : %s \nBranch: %s \nDOB: %02d / %02d / %02d", std.rollNo,
std.Branch, std.DOB.dd, std.DOB.mm, std.DOB.yy);
return 0;
}
