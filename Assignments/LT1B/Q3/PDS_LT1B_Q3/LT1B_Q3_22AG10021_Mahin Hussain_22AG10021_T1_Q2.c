/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Lab Test No.:1
Description: Program to print two largest values.
*/

#include<stdio.h>
int big=-1,big_2=-1;
int arr[10];
int main()
{
 printf("Enter numbers:");             //asking user to input number and storing in array
 for(int i=0;i<10;i++)
 {
  scanf("%d",&arr[i]);
  if(arr[i]<0)           //if negative number is inputted
  {
   big=-1;
   big_2=-1;           //updating the value of big and big_2 for termination of program
   break;
  }
  else
   {
   if(arr[i]>big)   //computing for storing largest value in big and second largest in big_2
   {
    big_2=big;
    big=arr[i];
   }
  else if(arr[i]>big_2&&arr[i]<big)
   big_2=arr[i];
  }
 }
  if(big!=-1&&big_2!=-1)       //checking if numbers are inputted or not by checking values of big and big_2
  {
   printf("Largest number:%d\n",big);
   printf("Second largest number:%d\n",big_2);     //printing values
 }
 else if(big!=-1&&big_2==-1)         //checking if only 1 number is inputted
 {
  printf("Largest number:%d\n",big);
  printf("Second largest number: Value Not yet entered");     //printing values
 }   
return 0;
}
