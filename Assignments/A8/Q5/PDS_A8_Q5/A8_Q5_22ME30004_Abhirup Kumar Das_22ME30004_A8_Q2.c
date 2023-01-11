#include<stdio.h>

int main(){
/*int s;
printf("Enter no of letters in own desired word: ");
scanf("%d",&s);*/
char word[100];

printf("Enter any Word: ");
scanf("%s",word);

int count=0;
int i=0;

for(int i=0;i<100;i++){
for(int j=100-1;j>=0;j--){
if((i!=j) && (word[i]==word[j]) && (word[i+1]==word[j-1]) && (word[i+2]==word[j-2]))
{
count++;

for(int p=i;p<=j;p++){
printf("%c",word[p]);
}
printf(" , ");
}
else 
continue;
}
}
if(count==0)
printf("No Palindromes are found"); 
return 0;
}
