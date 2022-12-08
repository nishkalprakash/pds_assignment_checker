/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:5
Description: Program to make a Guessing game.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
 int a[5],f=0;         //array a is used to run 5 guesses, f is used to check if correct number is found or not
 srand(time(0));
 int r=rand()%100+1;     // to get different random numbers everytime
 printf("Guess the number between 1-100 \n");
 for(int i=0;i<5;i++)        //loop to run 5 guesses
 {
  scanf("%d",&a[i]);
  if(a[i]==r)
  {
   printf("Winner");
   f++;
   break;         //to terminate if correct number is found
  }
 else if(a[i]>r)
  printf("Your guess is too big \n");
 else if(a[i]<r)
  printf("Your guess is too small \n");      //message for big and small numbers
 }
 if(f==0)
  printf("Loser:The number was:%d",r);  //displaying correct number if all the guesses were wrong
return 0;
}

