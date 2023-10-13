//T.Sritan Reddy
//23AE10036

#include<stdio.h>
#include<string.h>
void  check(char str[20]);
void encode1(char str[20]);
void encode2(char str[20]);



int main(){
  char str[20];

  printf("enter the string\n");
  scanf("%s",str);
  printf("%s \n",str);
  
  check(str);
  encode1(str);
  encode2(str);

  return 0;
  }

void  check(char str[20]){
  int len=strlen(str);
  int count=0;
  for(int i=0;i<len;i++){
    int x=str[i],y=str[i+2];

    if(x==y-1){
      count++;
    }
  }
  printf("no of pattern=%d \n",count);
}


void encode1(char str[20]){
  char str2[20],len=strlen(str);
  strcpy(str2,str);
  for(int i=0;i<len;i++){
    if(str2[i]>=122){str2[i]-=25;}

   else str2[i]+=2;
     }
  printf("%s \n",str2);
}


void encode2(char str[20]){
 char str2[50],len=strlen(str);
 int j=0;
  for(int i=0;j<len;i++){

    if(i%2!=0){
      str2[i]=str[j];
      j++;
    }
    else{str2[i]='a';}
  }
  
  printf("%s \n",str2);

}
