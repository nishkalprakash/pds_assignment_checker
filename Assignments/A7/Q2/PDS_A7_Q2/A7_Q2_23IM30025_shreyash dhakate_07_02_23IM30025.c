//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>

#include<string.h>
//defining funtions
int check(char *s);
void encode1(char *s);
void encode2(char *s);
int main(){
  char s[20],c[20];
  printf("Enter the char:");//user input
  fgets(s,strlen(s)+1,stdin);
  printf("%d\n",check(s));
  //copying user input to use same unmodified string for another funtion
  for(int i=0;i<strlen(s);i++){
    c[i]=s[i];
    
  }
  encode1(s);
  encode2(c);
  return 0;
}
int check(char *s){
  int m=strlen(s)+1;
  int s1,s2,count=0;
  for(int i=0;i<m-2;i++){
    s1=s[i];
    s2=s[i+2];//to get charactor after 1 succeding charactor
   
    if(s1+1==s2){
      count++;
    }
  }
  return count;
}
void encode1(char *s){
  int m=strlen(s)+1;
  int s1,s2,count=0;
  for(int i=0;i<m-2;i++){
    if(s[i]-'a'<25){//general case for a to x
    s1=s[i];
    s[i]=s[i]+2;
    }
    //special cases for y and z
    if(s[i]=='y') s[i]='a';
    if(s[i]=='z') s[i]='b';
  }
  printf("%s",s);//the modified string
}
void encode2(char *s){
  int m=strlen(s)+1,k=0;
  char a[m*2-4];//creating a new array which has size double of existing array
 
  for(int i=0;i<m-2;i++){
    a[k++]='a';//incerting a before each charactor
    a[k++]=s[i];
  }
  for(int i=0;i<m*2-6;i++){
    printf("%c",a[i]);
  }
}
