/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:6
Description: Program to perform the given operation.
*/

#include<stdio.h>
int main()
{
int m;
for(int i=0;;i++)
{
printf("Press ‘1’ to perform search in Set A\n");
printf("Press ‘2’ to perform search in Set B\n");
printf("Press ‘3’ to perform Union of Set A and Set B\n");
printf("Press ‘4’ to perform Intersection of Set A and Set B\n");
printf("Press ‘5’ to perform Difference of Set A and Set B\n");
printf(" Press any other key to quit\n");
scanf("%d",&m);
if(m!=1||m!=2||m!=3||m!=4||m!=5)
break
}
return 0;
}
