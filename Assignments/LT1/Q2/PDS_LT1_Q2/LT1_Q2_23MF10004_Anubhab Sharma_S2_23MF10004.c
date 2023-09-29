// 23MF10004
// Anubhab Sharma


#include<stdio.h>
#include<stdlib.h>

int main()
{
  int num,i,n,a,b,c,d,e,f,g,h,k,j;
  float per1,per2,per3,per4,per5,per6,per7,per8,per9,per10;
  printf("Total numbers to be entered: ");
  scanf("%d", &n);

  for( i=1;i<=n;i++)
    {
      num=rand()%100;               // takes random numbers between 0-99
      a = 0;
      if (num>=0 && num<10)
	{
	  a = a+1; //counter gets incremended when it gets a number in the range
	}
      per1 = (a/n)*100;

      b = 0;
      if (num>=10 && num<20)
	{
	  b = b+1;
	}
      per2 = (b/n)*100;

      c = 0;
      if (num>=20 && num<30)
	{
	  c = c+1;
	}
      per3 = (c/n)*100;

      d = 0;
      if (num>=30 && num<40)
	{
	  d = d+1;
	}
      per4 = (d/n)*100;

      e = 0;
      if (num>=40 && num<50)
	{
	  e = e+1;
	}
      per5 = (e/n)*100;

      f = 0;
      if (num>=50 && num<60)
	{
	  f = f+1;
	}
      per6 = (f/n)*100;

      g = 0;
      if (num>=60 && num<70)
	{
	  g = g+1;
	}
      per7 = (g/n)*100;

      h = 0;
      if (num>=70 && num<80)
	{
	  h = h+1;
	}
      per8 = (h/n)*100;

      k = 0;
      if (num>=80 && num<90)
	{
	  k = k+1;
	}
      per9 = (k/n)*100;

      j = 0;
      if (num>=90 && num<100)
	{
	  j = j+1;
	}
      per10= (j/n)*100;

    }
  printf("0-9: %1f\n", per1);
  printf("10-19: %1f\n", per2);
  printf("20-29: %1f\n", per3);
  printf("30-39: %1f\n", per4);
  printf("40-49: %1f\n", per5);
  printf("50-59: %1f\n", per6);
  printf("60-69: %1f\n", per7);
  printf("70-79: %1f\n", per8);
  printf("80-89: %1f\n", per9);
  printf("90-99: %1f\n", per10);
}

      
