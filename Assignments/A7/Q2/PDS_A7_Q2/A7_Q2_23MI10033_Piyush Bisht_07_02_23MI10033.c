//Roll No.:23MI10033
//Name:Piyush Bisht

#include <stdio.h>
#include <string.h>

void check(char ar[20]);
void encode1(char ar[20]);
void encode2(char ar[20]);

int main(){
  char str[20];
  printf("Enter a string : ");
  scanf("%s",str);
  printf("Input String is : %s",str);
  check(str);
  encode1(str);
  encode2(str);
  return 0;
}

void check(char ar[20]){
  int i=0,count=0;
  while (i+2!=strlen(ar)){
    if (ar[i+2]-ar[i]==1)count++;
    i++;
  }
  printf("\n\nInput string\n%s\nOutput = %d",ar,count);
  return;
}
void encode1(char ar[20]){
  printf("\n\nEncoded string1:");
  for (int i=0;i<strlen(ar);i++){
    if (ar[i]=='y')printf("a");
    else if (ar[i]=='z')printf("b");
    else printf("%c",ar[i]+2);
  }
  return;
}
void encode2(char ar[20]){
  printf("\n\nEncoded string2:");
  for (int i=0;i<strlen(ar);i++)printf("a%c",ar[i]);
  return;
}
  
    
  
  
