/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:7
topic:searching and sorting 
problem:4
*/

#include<stdio.h>
int main()
{
  char stra[100];
  char strb[100];
int i,j;
   printf("enter string 1\n");
  scanf("%s",stra);
printf("enter string 2\n");
  scanf("%s",strb);



for(i=0;stra[i]!='\0';i++){
 for(j=0;;j++){
  if(stra[i]==strb[j]) break;
   if(strb[j]=='\0') {
    printf("not anagram\n");
  return 0;
          }
}
}
  


for(i=0;strb[i]!='\0';i++){
 for(j=0;;j++){
  if(strb[i]==stra[j]) break;
   if(stra[j]=='\0') {
    printf("not anagram\n");
  return 0;
          }
}
}



printf("anagram\n");
 return 0;
}



















