/*NAME SARANSH ATTRI
22MF3IM17
SEC 14
ASSIGNMENT 8*/

#include<stdio.h>

int main()
{
int size;
printf("enter the size of the string\n");
scanf("%d",&size);

char word[size] ; // to input the string

printf("enter the string\n");
scanf("%s",word);

int count=0;
int b=0;

//TO CHECK palindromes

for(int a=0;a<size;a++)
   {
     for(int f=size-1;f>=0;f--)
     {
     	if((a!=f)&&(word[a]==word[f])&&(word[a+1]==word[f-1])&&(word[a+2]==word[f-2]))
     	{
     		count=count+1;
//printf("palindrome found " );
for(int m=a;m<=f;m++)
{
printf("%c",word[m]);
}
printf(" ,");
     	}
     	else 
     		continue;
     }
   } 

if(count==0)
{
printf("no palindromes");
}
return 0;
}
    
