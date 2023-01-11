#include<stdio.h>

int main(){
//For Input/////////////////////////////////////////////////////////
char random[2];

printf("Enter any Random Character:\n ");
scanf("%s",random);

char input[100];

printf("Enter any Character you want:\n ");
scanf("%s",input);

//Searching the strings//////////////////////////////////////////////

int count=0,b=0;
for(int i=0;i<100;i++){
if((random[b]==input[i])&&(random[b+1]==input[i+1])&&(random[b+2]==input[i+2]))
{
printf("%s is found\n",random);
count++;
}
else
continue;
}
printf("%d\n",count);

if(count==0)
printf("No such string found!!");

return 0;
}
