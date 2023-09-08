//Roll no.:23CH10026
//Name:Disha Mukherjee

#include <stdio.h>

int main()
{
  int tm,hr,amt=0;
  double days=0;
  printf("enter total no of kilometres travelled and hours the taxi was retained\n");
  scanf("%d %d",&tm,&hr);
  if(tm<=8)
    amt=20;
  else if(tm>8 && tm<=12)
    amt=20+(tm-8)*10;
  else if(tm>12 && tm<=16)
    amt=20+4*10+(tm-12)*8;
  else if(tm>16 && tm<=20)
    amt=20+4*10+4*8+(tm-16)*6;
  else if(tm>20)
    amt=20+4*10+4*8+4*6+(tm-20)*5;

  if(hr>=1 && hr<12)
    amt=amt+200;
  else if(hr>=12 && hr<=24)
    amt =amt+500;
  else if(hr>24)
    {
      days=hr/24.0;
      if(days>(int)days)
	 amt=amt+500+(int)days*300;
      else if(days==(int)days)
	amt=amt+500+((int)days-1)*300;
    }

  printf("\nTotal fare=%d",amt);
  return 0;
}
