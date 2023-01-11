#include<stdio.h>

int main()
{
  char message[1000];
  printf("enter '@!' to end input");
  scanf("%[^!]",message);
  
  int length=0,sentence=0,words=1,vowels=0;
  for(int i=0;message[i]!='@' ;i++){
    if(message[i]=='.'){
     sentence++;
    }
    if(message[i]==' '){
     words++;
    }
    if(message[i]=='a' || message[i]=='e' ||message[i]=='i' ||message[i]=='o' ||
    message[i]=='u' ||message[i]=='A' ||message[i]=='E' ||message[i]=='I' ||
    message[i]=='O' ||message[i]=='O' ||message[i]=='U'){
     vowels++;
    }
    
    
    length++;
  }
  
  printf("length is %d\n",length);
  printf("sentence is %d\n",sentence);
  printf("words is %d\n",words);
  printf("vowels is %d\n",vowels);
  int count=0;
  char ch='a';
  for(int i=0;i<length;i++){
    for( ch='a';ch >='z' ;ch++){
     if(message[i]==ch){
      count++;
     }
    }
  }
  if(count>0){
    printf("%c=%d",ch,count);
    }
return 0;
}
