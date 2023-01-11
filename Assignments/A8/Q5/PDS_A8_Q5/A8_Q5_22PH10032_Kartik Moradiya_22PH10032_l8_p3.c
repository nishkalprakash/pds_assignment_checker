#include<stdio.h>
 int main()
 {
 char str[50];
 scanf("%s",str);
 int n;
 for(int i=0;str[i]!='\0';i++){
  n=i+1;
 }
 
  for(int i=0,j=i+1;i<n;i++,j++)
  {
    if(str[i]==str[j]){
     for(int k=i;k<i+2;k++){
     printf("%c",str[k]);
     }
    } 
    printf(" ");
  }
 
 for(int i=0,j=i+2;j<n;i++,j++)
  {
    if(str[i]==str[j]){
     for(int k=i;k<i+3;k++){
     printf("%c",str[k]);
     }
    } 
     printf(" ");
  }
  
  for(int i=0,j=i+3;j<n;i++,j++)
  {
    if(str[i]==str[j] && str[i+1]==str[j-1]){
     for(int k=i;k<i+4;k++){
     printf("%c",str[k]);
     }
    } 
     printf(" ");
  }
  for(int i=0,j=i+4;j<n;i++,j++)
  {
    if(str[i]==str[j] && str[i+1]==str[j-1]){
     for(int k=i;k<i+5;k++){
     printf("%c",str[k]);
     }
    } 
     printf(" ");
  }
  for(int i=0,j=i+5;j<n;i++,j++)
  {
    if(str[i]==str[j] && str[i+1]==str[j-1]&& str[i+2]==str[j-2]){
     for(int k=i;k<i+6;k++){
     printf("%c",str[k]);
     }
    } 
     printf(" ");
  }
 return 0;
 }
