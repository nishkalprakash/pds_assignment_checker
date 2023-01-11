/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:7
problem:2
topic:2d array and string  
*/
#include<stdio.h>
int main(){
char s1[100],s2[100];
int i,j,e,c=0,b=0,count;
 printf("enter the firststring\n");
  scanf("%s",s1);   // reading the first string

printf("enter the second string\n");
  scanf("%s",s2);    // reading the second string
  for(i=0;s1[i]!='\0';i++){
       c++;
}
  


for(i=0;s2[i]!='\0';i++){
     count=0;
     e=i;
      for(j=e;s2[j]!='\0' && s1[j-e]!='\0';j++){      // using nested loop to compare those two strings
             
       if(s1[j-e]==s2[j]){
             count++;
       }
       
    }
 
  if(count==c){
         b++;
}


}

printf("number of times it get repeated is%d\n",b);


 return 0;
}
