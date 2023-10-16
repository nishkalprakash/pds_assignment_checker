#include <stdio.h>
#include <string.h>
void encoded1(char [],int);
int main(){
  char str[20];
  int n;
  scanf("%s",str);
  printf("%s\n",str);
  n=strlen(str);
  encoded1(str,n);
}
void encoded1(char arr[],int n){
  char str1[20];
  strcpy(str1,arr);
  for(int i=0;i<n;i++){
    if(str1[i]=='y') str1[i]='a';
    else if(str1[i]=='z') str1[i]='b';
    else str1[i]= str1[i] +2;
  }
  printf("encoded =%s\n",str1);
}
