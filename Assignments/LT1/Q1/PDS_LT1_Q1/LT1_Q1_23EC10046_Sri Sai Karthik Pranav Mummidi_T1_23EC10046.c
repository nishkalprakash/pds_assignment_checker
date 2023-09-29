//roll no: 23EC10046
//name: mummidi sri sai karthik pranav
#include<stdio.h>
int main(){
  int num,dig,num2=0,i=1,a,b,c,count=1,sum=0,dig2,dig3,dig4,dig5,dig6,num4=0,num3=0,j=10;
  scanf("%d",&num);
  a=num;
  while(num!=0){
    dig=(num%10)+1;
    num=num/10;
    num2+=dig*i;
    i=i*10;}
  b=num2;
  while(b!=0){
    dig6=b%10;
    sum+=dig6;
    b=b/10;}
  printf("the input integer=%d\n",a);
  printf("the encoded output=%d\n",num2);
  if(sum<10)
    printf("with checksum=%d0%d\n",num2,sum);
  else
    printf("with checksum=%d%d\n",num2,sum);
  printf("double encoded=");
  while(num2!=0){
    dig2=num2%10;
    num3=(num3*j)+dig2;
    num2/=10;
     }
  
  while(num3!=0){
    dig3=num3%10;
    num3/=10;
    printf("%d0",dig3);}
  c=sum;
  while(c!=0){
    dig4=c%10;
    num4=(num4*j)+dig4;
    c/=10;}
  if(sum<10)
    printf("00%d0",sum);
  else{
    while(count!=3){
      dig5=num4%10;
      num4/=10;
      count++;
      printf("%d0",dig5);}
  }
  return 0;
}
    

    
   
  
  
  

