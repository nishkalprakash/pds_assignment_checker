/*
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No :8
 Question No :4
 Description: Find frequency of substring S1 in string S2
*/

#include <stdio.h>

int length(char s[]){
	int n=0;
	while(s[n]!='\0')
		n++;
	return n;
}

int equals(char a[],char b[])
{
	int flag=1;
	for(int i=0;i<length(a);i++)
		if(a[i]!=b[i])
		{
			flag=0;
			break;
		}
	return flag;
}

int main()
{
	char s1[100],s2[100];
	int f=0;
	printf("enter the substring:");
	scanf("%s",s1);
	printf("enter the string:");
	scanf("%s",s2);
    int l1=length(s1);//length of substring
    int l2=length(s2);//length of string 
    int i2=l2-l1;//index of last substring 
    for(int i=0;i<=i2;i++)//start index of the substring
    {    
    	 char s3[l2];
    	 int j;
         for( j=0;j<l1;j++)
         	s3[j]=s2[i+j];//extract the substring 
       if(equals(s1,s3)==1)//if the extracted substring and given substring are equal
       	f++;
   }
   printf("The frequency is: %d",f);
}
