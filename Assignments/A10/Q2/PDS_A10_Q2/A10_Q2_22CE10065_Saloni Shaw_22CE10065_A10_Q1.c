/*

Section 14

Roll no : 22CE10065

Name : Saloni Shaw

Assignment 10

Description - Program to print ascending descending
*/
#include<stdio.h>
struct list{
int arr[100];

};
int main(){
int f=0,g=0;
int arr[100],i,n;
printf("enter the value of n:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{

printf("enter element %d:\n",i);
scanf("%d",&arr[i]);
}
if(arr[i]<arr[i+1]){
printf("the link list is in ascending order\n");
}
else if(arr[i]>arr[i+1]){
printf("the link list is in descending order\n");
}
else
printf("the link list is not in sorted order\n");

}


