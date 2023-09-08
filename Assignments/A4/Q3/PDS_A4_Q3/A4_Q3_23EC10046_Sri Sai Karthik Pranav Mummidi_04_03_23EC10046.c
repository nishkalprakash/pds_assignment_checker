//rollno: 23EC10046
//name: mummidi sri sai karthik pranav
#include<stdio.h>
int main(){
  int num,digit,rnum=0,a;
  printf("enter a number to check=");
  scanf("%d",&num);
  a=num;
  while(a!=0){
    digit=a%10;
    rnum=rnum*10+digit;
    a=a/10;
    }
  
  if(rnum==num){
    printf("it is palindrone");}
  else{
    printf("it is not a palindrome");}
  return 0;
}
    
