//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>
#include<math.h>
int main(){
  int a,c1,d=0,n=1,n1=0,flag=0,sum=0,addsum=0,f=0,n2=1;
  printf("Enter the number smaller han 9999:");
  scanf("%d",&a);
  if(a<9999){
    //solution for question 1 part a
    //analyasing the input integer digit by digit 
    do{
      for(int i=0;i<n1;i++){
	n*=10;
      }
      c1=(a%10);//getting digits
      d+=(c1+1)*(n);//modification
      a/=10;
      
      n1+=1;
      
      
      //special case for 9 for example 879 should be printed as 9810;
      if(c1==9){
	flag+=1;
	
	
	sum+=1;//getting sum for part b special case for 9
      }
      else{
	sum+=(c1+1);//getting sum generally
      }
      if(flag==1){
	
	n=10;
      }
      if(flag==2){
	n=100;
      }
      if(flag==3){
	n=1000;
      }
      if(flag==4){
	n=10000;
      }
     
      else{
	n=1;
      }
      
    }while(a!=0);
    printf("encoded %d\n",d);
    //question number 1 part 2
    addsum= d*100 + (sum%100);
    printf("with checksum %d\n",addsum);
    //part c
    for (int i=0;i<(n1+2);i++){
      f+=((addsum%10)*n2);
      n2*=100;
      addsum/=10;
    }
   
    printf("Double encoded:%d",f);
    
    
  }
    
  else{
    printf("Enter number smaller than 9999...");
  }
}
