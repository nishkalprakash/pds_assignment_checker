//Role No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>

void check(char str[]);
void encode1(char str[]);
void encode2(char str[]);

int main(){
  char str[21];  //Size=21=maxsize+1 (for '\0')
  printf("Enter a string of maximum size 20: ");
  fgets(str, 21, stdin);
  printf("Inputted string: ");
  puts(str);
  check(str);
  encode1(str);
  encode2(str);
  printf("Inputted string: ");
  puts(str);
  return 0;
}

void check(char str[]){
  int count=0;
  for (int i=2; str[i]!='\0'; i++){
    if (str[i]-str[i-2]==1) count++;
  }
  printf("Output of check: %d\n\n", count);
  return;
}

void encode1(char str[]){
  char str1[21];
  int i;
  for (i=0; str[i]!='\0'; i++){
    if (str[i]<121){ //For chars a to x
      str1[i]=str[i]+2;
    }
    else if (str[i]==121){  //For y
      str1[i]='a';
    }
    else{  //For z
      str1[i]='b';
    }
  }
  str1[i]='\0';
  printf("Output of encode1: %s\n", str1);
  return;
}

void encode2(char str[]){
  char str1[41];
  int i;
  for (i=0; str[i+1]!='\0'; i++){
    str1[2*i]='a';
    str1[2*i+1]=str[i];
  }
  str1[2*i]='\0';
  printf("Output of encode2: %s\n\n", str1);
  return;
}


