
//NAME : HARSH PATIDAR
// ROLL NO . : 22MF10015
// SECTION : 2
// PROBLEM 3
//DESCRIPTION ;
#include <stdio.h>
struct student
{
char rollno[10];
float marks[10];
float total ;
};

int main(){
    int n ;
     ;

printf("enter number of student");
scanf("%d",&n);

struct student a[n];

for(int i=0; i<n;i++){
        int total=0;
        printf("enter rollno of %d student",i+1);
   scanf("%s",a[i].rollno) ;
   for(int j=0;j<3;j++)
    {
    printf("enter marks for %d subject",j+1);
   scanf("%f",&a[i].marks[j]);
    }
    }


printf("student records :");

for(int i=0; i<n; i++)
{
printf("roll no: %s\n",a[i].rollno);
printf("marks:%f,%f,%f\n",a[i].marks[0],a[i].marks[1],a[i].marks[2]);
}
    return 0;
}



