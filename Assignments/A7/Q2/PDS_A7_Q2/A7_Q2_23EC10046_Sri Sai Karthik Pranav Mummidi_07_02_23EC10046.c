//rollno: 23EC10046
//name: mummidi sri sai karthik pranav
#include<stdio.h>
#include<string.h>
char check(char str[]){
  int count=0;
  int d=strlen(str);
  for(int i=0;i<d;i++){
    if(str[i+2]-str[i]==1) count++;}
  printf(" output=%d",count);}
char encode1(char str[]){
  int d=strlen(str);
  for(int i=0;i<d;i++){
    if(str[i]>='a'&&str[i]<'y') printf("%c",str[i]+2);
    if(str[i]=='y') printf("a");
    if(str[i]=='z') printf("b");}}
char encode2(char str[]){
  int d=strlen(str);
  for(int i=0;i<d;i++){
    printf("a");
    printf("%c",str[i]);}}

int main(){
  char str[21];
  printf("enter a string");
  scanf("%s",str);
  printf("%s\n",str);
  check(str);
  printf("\n");
  encode1(str);
  printf("\n");
  encode2(str);
  return 0;
}
