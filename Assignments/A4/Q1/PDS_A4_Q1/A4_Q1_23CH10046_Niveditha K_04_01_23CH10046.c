#include <stdio.h>

int main()
{
  int distance,time,fare;
  printf("Enter the no. of kilometres travelled and hours retained:");
  scanf("%d %d",&distance,&time);

  fare=0;
  int a=1;
  do{
    fare=20;
    a++;
  }while(a<=8 && a<=time);

  for(int j=1;j<=4;j++)
    fare=fare+10;
  
    for(int k=1;k<=4;k++)
    fare=fare+8;

    for(int l=1;l<=4;l++)
    fare=fare+6;

    int tim;
    tim=(time-20);

    int m=1;
    while(m>1 && m<=tim){
      fare=fare+5;
      m++;
	}
    
    if(time<=12 && time>=1)
      fare=fare+200;

    else if(time<=24 && time>12)
      fare=fare+500;

    int t;
    while(time>=24){
      t=(time)/24;

      for(int n=1;n<=t;n++)
	fare=fare+300;
    }
    printf("FARE = %d\n",fare);
    return 0;
}
