//Roll no.:23IE10011
//Name: Avik Ghosh
#include <stdio.h>
#include <string.h>


void check(char str[20]){
  int i,l,c=0;
    l=strlen(str);
  for(i=0;i<l-1;i++){
    if(str[i+2] == str[i] + 1)
      c++;}
  printf("Output of check = %d\n",c);
      
  return;
}
void encode1(char str[20]){
int l=strlen(str);
int i;
printf("Output of encode1 is ");
for(i=0;i<l;i++){
printf("%c",str[i]+2);}
printf("\n");
return;
}

void encode2(char str[20]){
int l= strlen(str);
int i;
printf("Output of encode2 is ");
for(i=0;i<l;i++)
  printf("a%c",str[i]);
printf("\n");
return;
}



int main(){
  int size;
  printf("Enter size at most 20\n");
  scanf("%d",&size);
  char str[size];
  for(int i=0;i<size;i++)
    scanf("%c",&str[i]);
  
  printf("String is %s \n",str);

  check(str);
  encode1(str);
  encode2(str);
  return 0;
}
