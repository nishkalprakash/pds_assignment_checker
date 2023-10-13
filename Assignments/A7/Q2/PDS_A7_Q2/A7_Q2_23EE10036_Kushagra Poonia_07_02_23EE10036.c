//Roll: 23EE10036
//Name: Kushagra Poonia

#include <stdio.h>

int check(char str[]);
int encode1(char str[]);
int encode2(char str[]);

int main(){
  char str[20];

  printf("Enter the string: ");
  scanf("%s", str);

  printf("Check = %d\n", check(str));
  printf("Input String: \"%s\". Encode 1: ", str);
  encode1(str);
  printf("Input String: \"%s\". Encode 2: ", str);
  encode2(str);
}

int check(char str[]){
  int k = 0;
  for(int i = 0; str[i+2] != '\0'; i++){
    if(str[i+2] - str[i] == 1){
      k++;
    }
  }
  return k;
}

int encode1(char str[]){
  char strmod[20];

  int i = 0;
  for(i = 0; str[i] != '\0'; i++){
    strmod[i] = str[i];
  }
  strmod[i] = '\0';

  for(int i = 0; strmod[i] != '\0'; i++){
    if(strmod[i] == 'y'){
      strmod[i] = 'a';
      continue;
    }
    if(strmod[i] == 'z'){
      strmod[i] = 'b';
      continue;
    }
    strmod[i] += 2;
  }

  printf("%s\n", strmod);
}

int encode2(char str[]){
  char strmod[50];
  
  int i = 0;
  for(i = 0; str[i] != '\0'; i++){
    strmod[2*i+1] = str[i];
    strmod[2*i] = 'a';
  }
  strmod[2*i] = '\0';

  printf("%s\n", strmod);
}
