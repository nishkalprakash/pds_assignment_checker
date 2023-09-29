//roll number 23ME10063
//name Prem Pastagia
//Set 1 Question 1
#include <stdio.h>

int main()
{
  int n,t=0,m,i=0,n2=0,d=1;//part 1
  int sum=0,n3;//part 2
  int n4=0;//part 3

  //user input
  printf("Enter an positive integer (less than 9999)\n");
  scanf("%d",&n);
 
  //a) encoding number
  //checking number of digit is t
  m=n;
  while(m!=0)
    {m=m/10;
      t++;
    }
  //divisor d
  for(i=0;i<t-1;i++){d=d*10;}
  m=n;
  while(m!=0)
    { i=m/d;
      switch(i){
      case 0:{n2=n2*10+1;break;}
      case 1:{n2=n2*10+2;break;}
      case 2:{n2=n2*10+3;break;}
      case 3:{n2=n2*10+4;break;}
      case 4:{n2=n2*10+5;break;}
      case 5:{n2=n2*10+6;break;}
      case 6:{n2=n2*10+7;break;}
      case 7:{n2=n2*10+8;break;}
      case 8:{n2=n2*10+9;break;}
      case 9:{n2=n2*100+10;break;}
      }
      m=m%d;
      d=d/10;
    }

  printf("The original number is %d and encoded number is %d.\n",n,n2);
  //b) checksum encoded number
  m=n2;
  while(m!=0)
    {
      i=m%10;
      m=m/10;
      sum+=i;
    }
  n3=(n2*100)+sum;

  printf("The encoded number with sumcheck is %d.\n",n3);
    // c) encoded number after adding 0
  m=n3;
  t=0;
    while(m!=0)
    {m=m/10;
      t++;
    }
    
  //divisor d
    d=1;
    for(i=0;i<t-1;i++){d=d*10;}
      m=n3;
      while(m!=0)
    {
      i=m/d;
      m=m%d;
      d=d/10;
      n4=(n4*100)+i;
    }



  printf("The number after inserting 0s is %d.\n",n4*10);
  return 0;
}
