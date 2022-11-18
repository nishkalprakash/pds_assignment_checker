/*
Name : Ankit Yadav
Roll NO: 21EE30005
Department: Electrical Engineering
Package : Codeblocks
Operating system: Windows 11
Assignment : 4
*/

#include<stdio.h>


int myHostelChangingTrips(int a,int b,int c,int d){

int count=0;

if(b>c)count=1;

count=count+myHostelChangingTrips(a,b+1,c,d);

return count;

}


int main(){

int k,n,m,i=1,num;

printf("Enter the number of days, number of items and maximum items can be carried respectively\n");
scanf("%d %d %d",&n,&m,&k);

num=myHostelChangingTrips(k,i,n,m);

printf("%d",num);

return 0;
}

