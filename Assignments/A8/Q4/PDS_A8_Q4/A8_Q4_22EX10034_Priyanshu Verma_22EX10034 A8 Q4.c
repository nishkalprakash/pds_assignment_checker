/*
* SEC: 14
* Roll no: 22EX10034
* Name: Priyanshu Verma 
* Assignment No 8
* Description : C program that would print the numbers of times the first string S1appears in the second string S2 as a substring.
*/

#include <stdio.h>

int length(char S[]){
  int count = 0;
   while (S[count] ='\0') count++;
    return count;
}
    

int c_substring(char S1[],char S2[]){
int count=0;
 for (int a=0,S1[a]='\0';a++){
   int flag=1;
   for (int b=0,S2[b]='\0';b++){
           
        if (S1[a+b]!=S2[b]) flag=0;
     if (flag) count++;
      }
   }
return count;
}

int main(){
char string[100], substring[100];
printf("S1:\t");
scanf("%s",&substring);
printf("S2:\t");
scanf("%s",&string);
printf("%d\n",c_substring(string , substring));
return 0;
}



 


