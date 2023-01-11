/*
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No :8
 Question No :2
 Description: Print all pallindromic substrings in the string
*/
#include <stdio.h>

int length(char s[]){ //to compute length of string 
	int n=0;
	while(s[n]!='\0')
		n++;
	return n;
}

int pal(char a[]) // to check whether string is pallindrome
{
	int flag=1;
	for(int i=0;i<(length(a)/2);i++)
		if(a[i]!=a[length(a)-i-1])
		{
			flag=0;
			break;
		}
	return flag;
}

int main()
{
	char s[100];
	printf("enter the string:");
	scanf("%s",s);
    int l=length(s);//length of string
    
    for(int l1=2;l1<=l;l1++)//length of substring
    {
    	int i2=l-l1;//last index of substring
    	for(int i=0;i<=i2;i++){//first index of substring
    		char s3[l1];
    	     int j;
             for( j=0;j<l1;j++)
         	  s3[j]=s[i+j];//extract the substring 
       if(pal(s3)==1)//if the extracted substring is pallindrome
       	printf("%s",s3);
    }
   }
   return 0;
}
