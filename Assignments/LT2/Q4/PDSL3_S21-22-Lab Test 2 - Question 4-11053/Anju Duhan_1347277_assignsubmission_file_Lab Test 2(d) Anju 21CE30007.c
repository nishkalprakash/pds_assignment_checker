// Name --> Anju
// Roll number --> 21CE30007
// Section --> 3
#include<stdio.h>
#define MAX 20struct Student
{
char name[40];
char gender[4];
float marks;
};void readData(int n, struct Student arr[])
{
char c;
for (int i=0; i<n; i++)
{
scanf("%c", &c);
printf("Enter the name of student no. %d.\n", i+1);
gets (arr[i].name);
printf("Enter the gender of student no. %d.\n", i+1);
gets (arr[i].gender);
printf("Enter the marks of student no. %d.\n", i+1);
scanf("%f", &arr[i].marks);
}
return;
}void printData(int n, struct Student arr[])
{
printf("\nPrinting the student records.\n\n");
for (int i=0; i<n; i++)
{
printf("%s %s %.2f\n", arr[i].name, arr[i].gender, arr[i].marks);
}
return;
}void bestGirl(int n, struct Student arr[])
{
int arr1[n];
int j=0;
for (int i=0; i<n; i++)
{
if (arr[i].gender=="girl") arr1[j++] = i;
}
float max=0;
int index;
for (int arr1=0; arr1<j; arr1++)
{
if (arr[arr1].marks>max) {max = arr[arr1].marks; index=arr1;}
}
printf("Best girl student: %s.\n", arr[index].name);
}int main()
{
struct Student arr[MAX];
int n;
printf("Enter the number of students.\n");
scanf("%d", &n);
readData(n, arr);
printData(n, arr);
bestGirl(n, arr);
}

