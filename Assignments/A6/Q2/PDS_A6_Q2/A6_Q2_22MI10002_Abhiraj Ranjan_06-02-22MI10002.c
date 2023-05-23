/*Name: Abhiraj Ranjan
Roll Number: 22MI10002
Section: 2
Assignment: 6
Question: 2
Description: scanf fucntion*/
#include<stdio.h>
void abc()
{
    char str[100],str1[20],str2[30];
    scanf("%s",str);
    int x= scanf("%19s %29s ", str1,str2);
    printf("x: %d\n",x);
    printf("str1: %s\n",str);
    printf("str2: %s\n",str1);
    return;
}
int main()
{
    abc();
    char str1[20],str2[20];
    char a[100];
    int i=0,count=0;
    printf("Numeric Characters: %d",count);
    return 0;
}
