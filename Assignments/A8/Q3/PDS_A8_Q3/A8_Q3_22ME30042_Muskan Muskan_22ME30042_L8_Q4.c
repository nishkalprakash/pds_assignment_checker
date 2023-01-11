/* Section 14

    Roll No. : 22ME30042

   Name:  # Muskan#

  Assignment No: 8*/
#include<stdio.h>
#include<string.h>
#define max_size 100


int main()
{ 
char msg[max_size];
int i,count1=0,count2=1,count3=0,count4=0;
printf("Enter your text Message \n");
 scanf("%[^\n]",msg);

for(i=0;msg[i]!='\0';i++)
count1++;
printf("length without using library  %d",count1);
printf("length without using library  %d",strlen(msg));


for(i=0;msg[i]!='\0';i++){
if(i==' '){ count2++;}
}
printf("Number of words %d",(count2+1));

 return 0;
}
