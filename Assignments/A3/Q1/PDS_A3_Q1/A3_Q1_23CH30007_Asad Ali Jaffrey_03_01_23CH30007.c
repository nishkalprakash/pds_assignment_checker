//Roll no. : 23CH30007
//Name : Asad Ali Jaffrey

#include<stdio.h>

int main() {

//roll numbers of students
int r1, r2, r3, r4, r5;     

//marks of 5 students in 5 subjects
int r1_1, r1_2, r1_3, r1_4, r1_5, r2_1, r2_2, r2_3, r2_4, r2_5, r3_1, r3_2, r3_3, r3_4, r3_5, r4_1, r4_2, r4_3, r4_4, r4_5, r5_1, r5_2, r5_3, r5_4, r5_5; 

//for taking information about the students from user

 printf("Enter the roll no. of student 1 along with the marks in 5 subjects (give spaces in between)\n");
scanf("%d%d%d%d%d%d",&r1, &r1_1, &r1_2, &r1_3, &r1_4, &r1_5);
 printf("Enter the roll no. of student 2  along with the marks in 5 subjects (give spaces in between)\n");
scanf("%d%d%d%d%d%d",&r2, &r2_1, &r2_2, &r2_3, &r2_4, &r2_5);
 printf("Enter the roll no. of student 3 along with the marks in 5 subjects (give spaces in between)\n");
scanf("%d%d%d%d%d%d",&r3, &r3_1, &r3_2, &r3_3, &r3_4, &r3_5);
 printf("Enter the roll no. of student 4 along with the marks in 5 subjects (give spaces in between)\n");
scanf("%d%d%d%d%d%d",&r4, &r4_1, &r4_2, &r4_3, &r4_4, &r4_5);
 printf("Enter the roll no. of student 5 along with the marks in 5 subjects (give spaces in between)\n");
scanf("%d%d%d%d%d%d",&r5, &r5_1, &r5_2, &r5_3, &r5_4, &r5_5);

//for printing information in tabular form

printf("Tabular Display:\n");
printf(" %d %d %d %d %d %d\n",r1, r1_1, r1_2, r1_3, r1_4, r1_5);
printf(" %d %d %d %d %d %d\n",r2, r2_1, r2_2, r2_3, r2_4, r2_5);
printf(" %d %d %d %d %d %d\n",r3, r3_1, r3_2, r3_3, r3_4, r3_5);
printf(" %d %d %d %d %d %d\n",r4, r4_1, r4_2, r4_3, r4_4, r4_5);
printf(" %d %d %d %d %d %d\n",r5, r5_1, r5_2, r5_3, r5_4, r5_5);

return 0;
}




