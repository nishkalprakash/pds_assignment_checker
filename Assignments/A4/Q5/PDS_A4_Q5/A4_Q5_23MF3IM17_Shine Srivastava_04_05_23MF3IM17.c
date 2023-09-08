//Roll No. : 23MF3IM17
//Name: Shine Srivastava

#include<stdio.h>
int main()
{
  int num,sum=0,n2,max1=0,max2,n3,n1;
  n1=num;


  printf("Enter a number:\n");
  scanf("%d",&num);
  while(num>0){
    n2=num%10;
    if(max1<n2){
       max1=n2;}
   
    
   
    
    sum=sum+n2;
    num=num/10;
      }

  
  while(n1>0){
    n3=n1%10;
    if(n3!=max1){
      if(max2<n3){
	max2=n3;}
  }
  }
    
  printf("sum of digits =%d\n",sum);
  printf("max = %d\n",max1);
  printf("second max = %d\n",max2);
}
  
