/*Surabhi Dhavale
sec14
22ME10026
lab 8
question5
*/

#include<stdio.h>
#include<string.h>
int main(){
char str1[100];
char str2[200];
printf("enter 1st word");
fgets(str1,100,stdin);     //input of 1st string
int n1=strlen(str1);       //n1 is the length of 1st string
printf("enter 2nd word");
fgets(str2,200,stdin);    //input of 2nd string
int n2=strlen(str2);      //n2 is the length of 2ns string
int count=0;
for (int i=0;i<n1;i++){
for (int j=0;j<n2;j++){    //searching for number of mutual elements 
if (str1[i]==str2[j]){
count++;
     }
    }
    }
if((count==n1)||(count==n2)){
printf("anagram\n");
}
else printf("not anagram\n");

return 0;}
