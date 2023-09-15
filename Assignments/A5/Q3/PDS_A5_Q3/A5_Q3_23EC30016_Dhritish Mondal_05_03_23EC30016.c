#include<stdio.h>

int main()

{

int n, roll[10];

float cgpa[10];

printf(" Enter the num of students ");

scanf("%d", &n);

for(i=0;i<n;i++)

{   printf(" enter the roll number of student %d", i);

scanf("%d", &roll[i]);

 printf(" enter the cgpa of student %d", i);

scanf("%f", &cgpa[i]);

}

printf(" the details of user are as follows");

for(roll[i] = cgpa[i])

printf(" the avg cgpa %f", cgpa[10]);

 return 0;

}



