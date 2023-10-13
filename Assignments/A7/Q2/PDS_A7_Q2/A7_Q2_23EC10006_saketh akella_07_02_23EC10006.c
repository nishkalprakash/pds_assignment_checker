//name:Akella Satya Hanuma Saketh
//Roll No.:23EC10006
#include<stdio.h>
#include<string.h>
void check(char s[],int l)
{
  int count=0;
  for(int i=0;i<l-2;i++){
    if(s[i+2]-s[i]==1)count++;
  }
  printf("%d \n",count);
}

void encode1(char s[],int l)
{
  for(int i=0;i<l;i++){
    if(s[i]=='y')s[i]='a';
    else if(s[i]=='z')s[i]='b';
    else s[i]=s[i]+2;
  }
  printf("%s \n",s);
}

void encode2(char s[],int l)
{
  for(int i=0;i<l;i++){
    printf("a");
    printf("%c",s[i]);
  }
  printf("\n");
}

int main(){
  char str[21];
  char str1[21];
  char str2[21];
  int l;
  scanf("%s",str);
  printf("%s \n",str);
  l=strlen(str);
  strcpy(str2,str);
  strcpy(str1,str);
  check(str1,l);
  encode1(str1,l);
  encode2(str2,l);
  printf("%s \n",str);
  return 0;
}
