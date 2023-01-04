/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 7
Description :  Program to check whether two given strings are anagram of each other
*/

#include <stdio.h>
#include <string.h>

void bubbleSort(int arr[], int size)    //BubbleSort to sort the given strings;
{
int temp;
	for (int trial = 0; trial < size-1 ; trial++)
	{ 
		for ( int j = 0; j < size-1-trial; j++)
			if ( arr[ j ] > arr[ j +1] ) /*  compare  the  two  neighbors  */
		{    
	   /*  swap  arr[j]  and  arr[j+1]*/
			temp = arr[ j +1];
			arr[ j +1] = arr[ j ];
			arr[ j ] = temp ;
		}
	}
}

int main()
{

char a[100],b[100];  
printf("Enter string1 : ");  //taking string input
scanf("%s",a);
printf("Enter string2 : ");
scanf("%s",b);
int len=0;
while(a[len]!='\0')  //finding string length
{
len++;
}
int A[len],B[len]; //declaring integer arrays that will store ASCII values of each character in given strings
for(int i=0;i<len;i++)
{
	A[i] = (int)a[i];   //converting string characters into ASCII values
	B[i] = (int)b[i];
}
bubbleSort(A,len);  //Sorting the arrays containing ASCII values of the characters of the string 
bubbleSort(B,len);
int check = 0;
for(int i=0;i<len;i++)   //After sorting, the integer arrays must be same if they are anagram of each other otherwise not
{
	if(A[i] != B[i]){
		check = 1;
	}
}
if(check == 0) printf("ANAGRAM");  //declaring result
else printf("NOT A ANAGRAM");




return 0;
}

