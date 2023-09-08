//rollno: 23EC10046
//name: mummidi sri sai karthik pranav
#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,max=0,num;
  for(i=1;i<=20;i++){
    num=rand() % 100;
    if(num>max){
      max=num;}
    printf("the random no in 0 to 100=%d\n",num);
  }
  printf("the max random no i=%d\n",max);
  return 0;
}
