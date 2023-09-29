//NAME:NAZEER ANWAR
//ROLL NO.:23BT30019
#include<stdio.h>
int main()
{
  int n,m,s=0,sum=0,t,r,sumd=0,checksum,su=0,st=0,p;
    printf("Enter the value of n less than 9999: ");
  scanf("%d",&n);


  //part 1
  
  m=n;
  while(m>0)
    {
      r=m%10;
      if(r==9)
	{  s=s*100 + 1 ;}
      else
	{  s=s*10 + (r+1);  }
      m=m/10;
    }

   while(s>0)
    {
      t=s%10;
      sumd=sumd+t;
      sum=sum*10 + t;
      s=s/10;
    }
   if(n%10==9){sum=sum*10;}
    printf("The encoded integer is %d\n  ", sum);


    //part 2

    checksum=(sum*100) + (sumd%100);
    printf("After adding checksum : %d\n  ",checksum);



    //part 3

    while(checksum>0)
      {
	p=checksum%10;
	st=st*100 + p;
	checksum=checksum/10;
      }
    while(st>0)
      {
	p=st%10;
	su=su*10+p;
	st=st/10;
      }
    printf("After inserting 0 after checksum : %d\n  ",su*10);
}
      
