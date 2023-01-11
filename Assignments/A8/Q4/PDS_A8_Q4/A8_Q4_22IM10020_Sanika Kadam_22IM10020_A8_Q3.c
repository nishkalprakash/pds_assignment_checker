//Assignment 8
//Section 14
//Name:Sanika Kadam
//Question 3


#include<stdio.h>
#define MAX_SIZE 100  //defining max size of array

int main()

{
  char str1[MAX_SIZ],str2[MAX_SIZE];
  int i,j;
  
  printf("Enter first string: ");
  gets(str1);
  
  printf("Enter second string: ");
  gets(str2); 

  for(i=0;str2[i] != '\0';i++)
  {
    for(j=0;str1[j] != '\0';j++)
    {
      if(str1[j])
    



