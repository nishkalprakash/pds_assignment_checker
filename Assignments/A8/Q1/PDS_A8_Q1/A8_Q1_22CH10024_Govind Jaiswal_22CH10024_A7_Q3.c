0
0/*
Name : Govind Jaiswal
Roll no. : 22CH10024
Section : 14
Assignment no. : 7
Description : Program to check if two strings are Anagram
*/

#include <stdio.h>

int main()
{
    int x,y,i;
	char ch1[10],ch2[10];
    printf("Enter the no. of characters in  both strings for checking \n");
    scanf("%d %d",&x,&y);
    for(i=0;i<x;i++)
	{
	scanf("%c",&ch1[i]);
	printf("%c",ch1[i]);
	}
}
