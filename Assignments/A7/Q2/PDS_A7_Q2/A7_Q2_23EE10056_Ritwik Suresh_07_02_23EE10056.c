#include<stdio.h>
  void check( char str[20])
  {
  int count=0,i;
  for(i=0;str[i]!= '\0';i++){
    if(str[i]=='z')
      continue;
    else{
    if(str[i+1] != str[i] + 1)
      {
	if(str[i+2] == str[i]+1)
	  count++;
      }
    }
   
  }
   printf("Output : %d\n",count);
  }
  void encode(char str[20]){
    int i;
    char str2[20];
    for(i=0;str[i]!='\0';i++)
      {
	str2[i] = str[i];
      }
    for(i=0;str2[i]!='\0';i++){
      if(str2[i]=='y')
	str[i]= 'a';
      else  if(str2[i]=='z')
	str2[i] = 'b';
      else
	str2[i]= str[i] + 2;
    }
    printf("\nEncoded string\n");
    printf("%s",str2);
    return;
  }
  void encode2(char str[20]){
    char str3[40];
    int i;
    for(i=0;str[i]!='\0';i++){
      str3[2*i]='a';
    str3[2*i+1]= str[i];
    }
    printf("\nOutput:\n");
    printf("%s",str3);
    return ;
  }
    
      
  int main()
{
  char str[20];
  printf("Enter the string:(utmost 20 characters)\n");
  scanf("%s", str);
  check( str);
  encode(str);
  encode2(str);
  return 0;
 }
