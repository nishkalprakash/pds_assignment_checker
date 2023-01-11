/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 8
Description : To print pallindrome in words
*/
#include<stdio.h>
#define size 200
int test=0;
void find_pallindrome(char c[size],int i,int j) //function to check pallindrome
{
	int m=0,temp=1;
	while((i+m)<(j-m))
	{
	  if(c[i+m]!=c[j-m])
	  temp=0;
	  m++;
	}
	 if(temp)
	 {
            for(int l=i;l<=j;l++)
            printf("%c",c[l]);
	    test=1; //to check whether pallindrome fount or not
 	    printf(","); 	 
	}
}
int main()
{
char c[size]; //taking size for string
printf("Enter word \n");
scanf("%s",c);
int length=0;
for(int i=0;c[i]!='\0';i++)
{
for(int j=(i+1);c[j]!='\0';j++)
{
if(c[i]==c[j])
{
find_pallindrome(c,i,j); //function calling
}
}
}
if(test==0) //test will be 0 if no pallindrome
printf("NO pallindrome substrings found");
return 0;
}
