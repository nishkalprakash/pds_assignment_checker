//Assignment 11
//Section 14
//Name:Sanika Kadam
//Question 5



#include<stdio.h>
#include<stdlib.h>
#define MAX 100

typedef struct{
              int data;
              node *next;
              }node;

int main()
{
   int N;
   int arr[MAX];

   printf("Enter size of array: ");
   scanf("%d",&N);

   printf("Enter elements of array: ");
   for(int i=0;i<N;i++)
   {
     scanf("%d",&arr[i]);
   }


 
