/*Ankit Kumar
Roll no.21MI10010*/

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>
int main() {

 char username[40];
 char password[200];
 scanf("%s",&username);//printf("%s",username);
 scanf("%s",&password);
 int cnt=0;
for(int i=0;i<200;i++){
if(password[i]==NULL) break;
else cnt++;
}
if(cnt<8||cnt>15){ printf("Not acceptable\n");return 0;}
 if(strcmp(password,username)==0){ printf("Not acceptable\n") ; return 0;}
int x1=0;
int x2=0;
int x3=0;// $, *, +, /, #, @, <, >, ?, _, !
char ch[11]={'$','*','+','/','#','@','<','>','?','_','!'};
for(int i=0;i<cnt;i++){
    if(password[i]>='A'&&password[i]<='Z') x1++;
     if(password[i]>='a'&&password[i]<='z') x2++;
    for(int j=0;j<11;j++){
        if(password[i]==ch[j]) x3++;
    }
}
if(x1<1||x2<1||x3<2){ printf("Not acceptable\n") ; return 0;}
int flag=0;
for(int i=0;i<cnt;i++){
        int p=0;
    for(int j=i;j<i+5;j++){
      if(j<cnt){
        if(isdigit(password[j])) p++;
        else break;
      }
    }
    if(p>=5) flag++;
}
int h=0;
for(int i=0;i<cnt;i++){
        char cp=password[i];
        int hi=0;
        if(cp=='~') continue;
    for(int j=i+1;j<cnt;j++){
        if(password[j]==cp) {
                hi++;
                password[j]='~';
        }
    }
    if(hi) h++;
}
if(h>5) flag++;
if(flag) { printf("Not acceptable\n") ; return 0;}
else printf("Acceptable");
  return 0;
}