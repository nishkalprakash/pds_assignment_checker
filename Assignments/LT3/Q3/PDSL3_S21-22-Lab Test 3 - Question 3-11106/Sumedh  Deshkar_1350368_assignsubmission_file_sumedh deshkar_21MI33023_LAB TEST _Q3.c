/*
Name - Sumedh Deshkar
Roll no. - 21MI33023
Sec - 3
Question no.-3
*/
#include<stdio.h>
//program to print 5 digit numbers from the given digits
void digit(int x,int y,int a,int divisor,int n,int i)
{
n=( a + n*5*2);
if(i==5)
{
if(n%(x+y)!=0)
{
printf("%d ",n); // priniting program output
}
return;
}
digit(x,y,x,divisor,n,i+1);
digit(x,y,y,divisor,n,i+1);
}
// starting main function
int main()
{
int x,y; //user input from integers
printf("Enter the numbers : "); //taking inputs
scanf("%d %d",&x,&y); //taking inputs
int divisor = y+x; //defining integer divisor
digit(x,y,x,divisor,0,1); // use of program that we made
digit(x,y,y,divisor,0,1); //// use of program that we made
return 0;
}
