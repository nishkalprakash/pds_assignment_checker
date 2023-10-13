// Roll no: 23HS10010
// Name: Anurag Pokhariyal
#include <stdio.h>
#include <string.h>
//Main 
int main(){
  char str[20];
  printf("Enter the string:");
  scanf("%s",str);
  printf("The string entered is %s\n",str);
  //check
  int check(char c[20]){
    int count=0;
    for(int i = 0;i<20;i++){
      if((int)str[i]+1==(int)str[i+2]) count++;
    }
    printf("The number of character succeeding by a character: %d\n",count);
  }
  check(str); //function call

  //encode1
   int encode1(char c[20]){
     char str2[20];
     for(int i = 0;i<strlen(c);i++){
       str2[i]=(char)((int)c[i]+2);
     }
     printf("%s\n",str2);
   }
   encode1(str);//function call
   printf("After encode %s\n",str);//undisturbed

  //encode2
   int encode2(char d[20]){
     char str3[20];
     for(int i = 0;i<2*strlen(d);i++){
       str3[2*i+1]=d[i];
       str3[2*i]='a';
     }
     str3[2*strlen(d)]='\0';
     printf("%s\n",str3);
   }
   encode2(str); //function call   
  return 0;
}
