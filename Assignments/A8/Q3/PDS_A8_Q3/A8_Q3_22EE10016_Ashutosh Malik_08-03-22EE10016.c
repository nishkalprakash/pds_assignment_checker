#include<stdio.h>
typedef struct student{
    char RollNo[10];
    float marks[3];
    float total;
}stud;


int main(){
int n;
scanf("%d",&n);
stud s1[n];
int i;
for (i = 0; i < n; i++){
    scanf("%s %f %f %f" , s1[i].RollNo,&s1[i].marks[0],&s1[i].marks[1],&s1[i].marks[2]);
   }
for (i = 0; i<n; i++){
    s1[i].total =  s1[i].marks[0]+s1[i].marks[1]+s1[i].marks[2];
}

printf("Student Records\n");
printf("Sorted Student Records\n");
printf("Student Records:\n");
for (i = 0 ; i<n; i++){
        printf("Roll no: %s\n", s1[i].RollNo);
        printf("Marks: %f %f %f\n", s1[i].marks[0],s1[i].marks[1],s1[i].marks[2]);
        printf("Total Marks: %f\n", s1[i].total);
}


return 0;
}
