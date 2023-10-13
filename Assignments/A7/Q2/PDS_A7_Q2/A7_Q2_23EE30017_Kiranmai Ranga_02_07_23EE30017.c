//Name:Ranga Kiranmai
//Roll No:23EE30017
#include <stdio.h>
void check(char str[20]) {
  int i,count=0;
  for(i=0;i<17;i++) {
    if(str[i+2]==str[i]+1) count++;
  }
  printf("The pattern is seen %d times\n",count);
}
void encode1(char str[20]) {
  int i;
  char a[20];
  for(i=0;str[i]!='\0';i++) {
    if(str[i]!=121 && str[i]!=122)  a[i]=str[i]+2;
    if(str[i]==121) a[i]='a';
    if(str[i]==122) a[i]='b';
  }
  a[i]='\0';
  printf("The encode1 string:\n");
    printf("%s\n",a);
}
void encode2(char str[20]) {
  int i,j,k=0,strlen=0;
  char a[40];
  for(j=0;str[j]!='\0';j++) strlen++;
  for(i=0;i<39;i++) {
    if(i%2==0) a[i]='a';
    else {a[i]=str[k];
      k++;}
  }
  a[2*strlen]='\0';
  printf("The encode2 string:\n");
  printf("%s",a);
}
int main()
{
  char str[20];
  printf("Enter the string:\n");
  scanf("%s",str);
  printf("The string is:");
  printf("%s\n",str);
  check(str);
  encode1(str);
  encode2(str);
}
