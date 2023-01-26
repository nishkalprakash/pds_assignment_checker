/*

Section 14

Roll no : 22CE10065

Name : Saloni Shaw

Assignment 10

Description - Program to create lists

*/
#include<stdio.h>
#include <stdlib.h>
struct node{
 int data;
struct list *next;
};
struct node *createlist(int n,int A[])//creating list
{
struct node*head=NULL;
struct node*tail;
int i;
head=(struct node*)malloc(sizeof (struct node));