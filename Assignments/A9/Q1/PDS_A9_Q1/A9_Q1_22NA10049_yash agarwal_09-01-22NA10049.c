#include <stdio.h>
int main()
{
 int a=0,b=1,c=0,min=0,num=0,max,flag=0;

scanf("%d",&num);
if(num<0)
{
    printf("please give positive number");
    return 0;
}

  while(1)
  {


    if(num==c)    //to check if the input interger is in the series
        flag=1;
      if(c>num)
        {
            max=c;
            break;
        }

      else if(c<=num)
        min=c;

      c=a+b;   //generating the series
      a=b;
      b=c;


  }
  if(flag==1)
  {
      printf("%d is a fibonacci number",num);   //if input is itself a fibonacci

  }
  else if(max-num==num-min)  //printting smaller number if both equally close
    printf("%d",min);
  else if(max-num>num-min)   // finging nrearest number in the series
    printf("%d",min);
  else
    printf("%d",max);


    return 0;
}
