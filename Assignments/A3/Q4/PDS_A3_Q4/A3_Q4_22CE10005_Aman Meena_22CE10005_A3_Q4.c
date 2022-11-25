/*
Section 14
Roll No : 22CE10005
Name : #Aman Meena#
Assignment No : 3
Description : Program that reads three integers representing time of the day
*/

#include<stdio.h>


int main()

{

int n;

int m;

int l;

int k;

int bill;


          printf("Number of units used");


          // bill = 0.5n+0.75m+1.20l + 1.5k   + 20% bill

          if (n<=100) {

          printf("bill = 0.5n + 20% bill");}

    

          else if (n>100 , m <=100){

          printf("bill = 50+0.75m + 20% bill");}


          else if (n>100,m>100 , l<=100){

          printf(" bill = 50 + 75 + 1.20l + 20 bill");}


          else if (n>100,m>100,l>100 , k<=100){

          printf(" bill = 50 +75 +120+1.50k + 20% bill");}


          return 0;

}         
