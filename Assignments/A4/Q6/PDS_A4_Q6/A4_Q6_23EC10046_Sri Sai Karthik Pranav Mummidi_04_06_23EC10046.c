//rollno: 23EC10046
//name: mummidi sri sai karthik pranav
#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,a,dig,sum,small=33,s_num,b;
  for(i=1;i<=20;i++){
    a=rand() % 1001+5000;
    b=a;
    printf("random no=%d\n",a);
    sum=0;
    while(a!=0){
      dig=a%10;
      sum=sum+dig;
      a=a/10; 
    }
    printf("sum of digits of this no=%d\n",sum);
    if(sum<small){
      small=sum;
      s_num=b;
    }
  }
  printf("the smallest sum is=%d\n",small);
  printf("the no with smallest sum of didits=%d",s_num);
  return 0;
}
