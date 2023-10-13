//name vivek
// roll no 23cs10011
#include<stdio.h>
char str[20];
void check(char str[20],int b);
void encode1(char str[20],int b);
void encode2(char str[20],int b);
int main(){
  int len;
  printf("enter string\n");
  scanf("%[^\n]",str);
  len=0;while(str[len]) len++;
  check(str,len);
  encode1(str,len);
  encode2(str,len);
  return 0;
}
void check(char str[20],int b){
  int m=0;
  for(int i=0;i<b-1;i++){
    if (str[i]==str[i+2]-1)
      m++;
  }
  printf("\n output is %d",m);
  return;
}
void encode1(char str[20],int b){
  char sta[b];
  for (int i=0;i<b;i++){
    if(str[i]!='y'&&str[i]!='z'){
      sta[i]=str[i]+2;
    }
    else if(str[i]=='y') sta[i]='a';
    else if(str[i]='z') sta[i]='b';
}
  printf("\nout put is %s\n",sta);
  return;
}
void encode2(char str[20],int b){
  char sta[2*b];
  int i;
  for(i=0;i<2*b;i++){
    if (i%2==0) sta[i]='a';
    else sta[i]=str[(i-1)/2];
    printf("%c",sta[i]);
  }
  
  return ;
}
