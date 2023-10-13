#include <stdio.h>
#include <string.h>

void check(char a[20]){
  int i,count=0;
  for(i=2;i<strlen(a);i++){
    if(a[i]!= 'y' && a[i]!='z'){
      if(a[i]-a[i-2]==2) count++;
    }
    else if(a[i]=='a' && a[i-2]=='y') count++;
    else if(a[i]=='b' && a[i-2]=='z') count++;
  }
  printf("Output is:%d\n",count);
  return;
}
void encode1(char a[20]){
  int i,count=0;
  for(i=0;i<strlen(a);i++){
    if(a[i]!= 'y' && a[i]!='z'){
      a[i]=a[i]+2;
    }
    else if(a[i]=='y') a[i]='a';
    else if(a[i]=='z') a[i]='b';
  }
  printf("The output encoded string is:%s\n",a);
  return;
}
      
  
    		
    
  

int main(){
  char str[20];
  printf("Enter a string:");
  scanf("%s",str);
  check(str);
  encode1(str);
  return 0;
}
  
