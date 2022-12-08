/*
Section 14
Roll no : 22CE10065
Name : Saloni Shaw
Assignment 5
Description - Program to make a guessing game
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int f=0,x;
int guess (int a)
{
if(a==x)
{
printf("winner.\n");//printing if its a win
f=1;
}
else if(a>x)//checking if number is big
printf("your guess is too big\n");
else if(a<x)
printf("your guess is too small.\n");//checking if number is small
return f;
}
int main()//main function 
{
srand(time(0));
int i;
int g[5];
x=rand()%100+1;
printf("enter the numbers you guessed\n");//entering numbers to guess
for(i=0;i<5;i++)
{
scanf("%d",&g[i]);
if(f==1)//chekcing if value of f is 1
return 0;
}
if(f==0)
printf("loser : the number was %d",x);//printing loser
return 0;
}

