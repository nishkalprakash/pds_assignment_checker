//roll no-23EX10004
//NAME-ANSH KUMAR
#include<stdio.h>
#include<string.h>
char str[100];
void create(){
  int n;
  printf("enter the number of words you want to enter\n");
  scanf("%d",&n);
  printf("start entering the string");
  for(int i=0;i<n;i++){
    scanf("%s",str);
    
    printf("the %d string is %s\n",i+1,str);
  }
}
  
void letterstat(){
  int vowel=0;
  int n;
 
  printf("enter the string\n");
  scanf("%s",str);
  printf("string is %s\n",str);
 
  int length =0;
  for(int i=0;str[i]!='\0';i++){
    length++;
  }
  for(int i=0;i<length;i++){
  if(str[i]=='a'|| str[i]=='e' ||str[i]=='i' ||str[i]== 'o' ||str[i]=='u'){
    vowel++;
  }
  }
  printf("the number of vowels used is %d\n",vowel);
}
void lengthstat(){
   int n;
  printf("enter the number of words you want to enter\n");
  scanf("%d",&n);
  printf("start entering the string");
  for(int i=0;i<n;i++){
    scanf("%s",str);
    
    printf("the %d string is %s\n",i+1,str);
  }
  
  
  int num1=0,num2=0,num3=0;
  if(strlen(str<3)){
    num1++;
  }
   if(strlen(str>2&&str<6)){
    num2++;
  } if(strlen(str>5)){
    num3++;
  }
   printf("the number of words of length between 1-2 is %d\n",num1);
    printf("the number of words of length between 3-5 is %d\n",num2);
     printf("the number of words of length more than 5 is %d\n",num3);
}

int main(){
  int n;
  while(1){
    printf("1-create\n");
    printf("2-lengthstat\n");
    printf("3-letterstat\n");
    printf("4-search\n");
    printf("5-removeduplicate\n");
    printf("6-searchreplace\n");
    printf("7-arrange\n");
  printf("enter the number from 1 to 7\n");
  scanf("%d",&n);
  if(n==1){
    create();
  }
  else if(n==2){
    lengthstat();
  }
    
  else if(n==3){
    letterstat();
  }
  else if(n==0){
    break;
  }
  
  }
  return 0;
}
    
