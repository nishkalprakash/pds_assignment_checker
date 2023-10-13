//ROLL NO.: 23ME10044
//NAME: LALIT KARTHIKEYAN.M.A

#include<stdio.h>
int main(){

  char str[21],ch;
  printf("Enter the string: \n");

  int c=0;
  do{
    scanf("%c",&ch);
    str[c]=ch;
    c+=1;
  }while(ch!='\n');

  c--;

  str[c]='\0';
  
  printf("The string enetered is: \n");
  for(int i=0;str[i]!='\0';i++){
    printf("%c",str[i]);
  }printf("\n\n");
  
  return 0;
}
