//Assignment 8
//Section 14
//Name:Sanika Kadam
//Question 2


#include<stdio.h>
#define MAX_SIZE 100  //defining max size of array

int main()

{
  char word[MAX_SIZ];
  int i,length,count=0;
  
  printf("Enter any word: ");
  gets(word);

  //To determine length of word

  for(i=0;word[i] != '\0';i++)
  {
   count++;
  }
  
  length=count;

  //To find if word is palindrome or not

  for(i=0;word[i] != '\0';i++)
  {
   
  

