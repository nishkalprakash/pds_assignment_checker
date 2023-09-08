//rollno.: 23GG10041
//name: samriddhi ahuja
#include <stdio.h>
int main()
{
int num,a, max,secondmax, temp;
printf("enter the number=\n");
scanf("%d", &num);
temp=num;
while (temp!=0)
  {a=temp%10;
    temp=temp/10;}
    if (a>max)
      {secondmax=max;
	max=a;}
    if(a>secondmax && a<max)
      {secondmax=a;
      }
    printf("max digit is=%d\n", max);
    printf("second max digit is =%d\n",secondmax);
    return 0;
  }
    
    
