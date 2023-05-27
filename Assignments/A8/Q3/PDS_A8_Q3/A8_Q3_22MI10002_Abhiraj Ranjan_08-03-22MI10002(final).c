/*Name: Abhiraj Ranjan
Roll Number: 22MI10002
Section: 2
Assignment: 8
Question: 3
Description: Student Marks*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct{
char roll[10];
float marks[3];
float total;
}student;
int main(){
int n;
scanf("%d",&n);
student s[n];
int i,j;
for(i=0;i<n;i++){
    scanf("%s",s[i].roll);
for(int j=0;j<3;j++){
scanf("%f",&s[i].marks[j]);
}
s[i].total=s[i].marks[0]+s[i].marks[1]+s[i].marks[2];
}
printf("Student Records: \n");
printf("<Print in the order read>\n");
printf("\nSorted Student Records:\n");
printf("Student Records: \n");
student t;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(s[i].total<s[j].total){
        t=s[i];
        s[i]=s[j];
        s[j]=t;
        }
    }
}
for(i=0;i<n;i++){
    printf("Roll No: %s\n",s[i].roll);
    printf("Marks: %.2f %.2f %.2f\n",s[i].marks[0],s[i].marks[1],s[i].marks[2]);
    printf("Total: %.2f\n",s[i].total);
}

return 0;
}

