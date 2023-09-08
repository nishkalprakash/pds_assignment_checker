//roll no: 23EC10046
//name: mummidi sei sai karthik pranav
#include<stdio.h>
int main(){
  int num,sum=0,dig,lar=0,lar2=0;
  printf("enter a number");
  scanf("%d",&num);
  while(num!=0){
    dig=num%10;
    sum=sum+dig;
    num=num/10;
    if(dig>=lar){
      lar=dig;}
    else if(dig>=lar2 && dig<=lar){
      lar2=dig;}
  }
  printf("sum of the digits=%d\n",sum);
  printf("largest=%d\n",lar);
  printf("second largest=%d\n",lar2);
  return 0;
}
