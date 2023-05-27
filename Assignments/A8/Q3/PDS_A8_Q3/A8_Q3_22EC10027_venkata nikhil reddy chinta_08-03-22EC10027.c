/*
* Section 2
* Roll No : 22EC10027
* Name : Chinta venkata nikhil reddy
* Assignment No : 8
* Description : sorting
*question : 2
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct student{
char rollno[10];
float marks[3];
float total;
}student;
void sorting (student x[], int size) {
int t,i,j;
for (i = 0; i < size; i++)
for (j = 0; j < size-i-1; j++)
if (x[j].total > x[j+1].total) {

t = x[j].total;
x[j].total = x[j+1].total;
x[j+1].total=t;
for(i=0;i<size;i++)
{
     printf("%s\n" , x[i].rollno[10]);

        printf("marks : %f \n" , x[i].marks[0]);
         printf("marks : %f \n" , x[i].marks[1]);
          printf("marks : %f \n" , x[i].marks[2]);

    printf(" total : %f \n" , x[i].total);

}

}
}
int main(){


int s,i,j;
printf("enter the no of students : ");
scanf("%d" , &s);
student n[s];
printf("give the roll no of the students : ");
for(i=0;i<s;i++)
{
    scanf("%s" , n[i].rollno);

}
printf("give the marks of the students : ");
for(i=0;i<s;i++)
{
        scanf("%f" , &n[i].marks[0]);
        scanf("%f" , &n[i].marks[1]);
        scanf("%f" , &n[i].marks[2]);
}
for(i=0;i<s;i++)
{
        n[i].total=n[i].marks[0]+n[i].marks[1]+n[i].marks[2];
}
 sorting (n,s);


return 0;
}
