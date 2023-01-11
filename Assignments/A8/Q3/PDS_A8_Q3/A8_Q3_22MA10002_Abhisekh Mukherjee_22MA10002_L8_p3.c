/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:7
problem:3
topic:2d array and string 
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char str[100];
int i,j,count=0;
printf("enter\n");
   fgets(str,100,stdin);    // reading the string
  for(i=0;str[i]!='\0';i++){
       count++;
  }
  count=count-1;
 printf("length is %d\n",count);
printf("using strlen\n");   //  using without strlen
 int s= strlen(str);     // rechecking using strlen
  s=s-1;
  
  printf("%d\n",s);
int c1=0;
for(i=0;str[i]!='\0';i++){
 if((str[i]==' ') ||(str[i]=='.')|| (str[i]==',')  ){ 
       c1++;
   }
}
 printf("the number of words is %d\n",c1);
int c2=0;
for(i=0;str[i]!='\0';i++){
 if(str[i]=='.'){ 
       c2++;
   }
}
printf("the number of sentences is %d\n",c2);

int c3=0;
for(i=0;str[i]!='\0';i++){
 if((str[i]=='a') ||(str[i]=='e')|| (str[i]=='i')|| (str[i]=='o')|| (str[i]=='u') ){ 
       c3++;
   }
}
 printf("the number of vowels is %d\n",c3);




       



 return 0;
}
