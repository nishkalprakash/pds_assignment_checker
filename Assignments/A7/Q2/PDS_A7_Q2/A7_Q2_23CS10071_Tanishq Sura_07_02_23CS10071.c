//name tanishq sura
//roll no 23CS10071

#include<stdio.h>
char str1[21],str2[42];
void check(char str[]);
void encode1(char str[]);
void encode2(char str[]);

int main(){
  char str[21];
  printf("give the sting of length atmost 20 characters(without any whitespace characters): ");
  scanf("%s",str);
  check(str);
  encode1(str);
  encode2(str);
  printf("the initial string : %s",str);
  return 0;
}

void check(char str[]){
  int count=0;
  for(int i=0;str[i+2]!='\0';i++){
    if(str[i]+1==str[i+2]){
      count++;
    }
  }
  printf("the no. of such occurences : %d\n",count);
  return;
}

void encode1(char str[]){
  int i;
  for(i=0;str[i]!='\0';i++){
    if(str[i]=='y') str1[i]='a';
    else if(str[i]=='z') str1[i]='b';
    else str1[i]=str[i]+2;
  }
  str1[i]='\0';
  printf("the encoded string 1 : %s\n",str1);
  return;
}

void encode2(char str[]){
  int i;
  for(i=0;str[i]!='\0';i++){
    str2[2*i+1]=str[i];
    str2[2*i]='a';
  }
  str2[2*i]='\0';
  printf("the encoded string 2 : %s\n",str2);
  return;
}





