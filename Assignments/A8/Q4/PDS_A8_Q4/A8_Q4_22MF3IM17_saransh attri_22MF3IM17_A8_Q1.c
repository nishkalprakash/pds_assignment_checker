/*NAME SARANSH ATTRI
22MF3IM17
SEC 14
ASSIGNMENT 8*/

#include<stdio.h>

int main()
{
char rand[100]; // to input first string

printf("enter random three char string\n");
scanf("%s \n",rand);

char word[100] ; // to input second string

printf("enter the second string\n");
scanf("%s \n",word);

int count=0;
int b=0;

//TO CHECK SET_STRINGS


for(int a=0;a<100;a++)
{
     if((rand[b]==word[a])&&(rand[b+1]==word[a+1])&&(rand[b+2]==word[a+2]))
     count++;
     else
     continue;      
}

printf("the count is %d",count);

return 0;


}
    


