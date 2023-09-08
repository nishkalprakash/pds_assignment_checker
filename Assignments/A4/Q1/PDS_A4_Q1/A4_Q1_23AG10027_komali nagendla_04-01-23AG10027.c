//RollNo.:<23AG10027>
//Name:<Nagendla Komali>
#include<stdio.h>
int main()
{
  int i;
  for(i=0;i<8;i++)
    {
      printf("20Rs");
    }
int j;
 for(j=i;j<i+4;j++)
   {
     printf("10Rs/km:%d",(10*j));
   }
 int k;
 for(k=j;k<j+4;k++)
   {
     printf("8Rs/km:%d",(8*k));
   }
 int l;
 for(l=k;l<k+4;l++)
   {
     printf("6Rs/km:%d",(6*l));
   }
 int m;
 for(m>20;m++;)
   {
     printf("5Rs/km:%d",(5*m));
   }
 int a;
 for(a=0;a<1;)
   {
     printf("vehicle rental is 0");
   }
 for(a>2;a<12;a++)
   {
     printf("vehicle rental is 200Rs");
   }
 for(a>12;a<24;a++)
   {
     printf("vehicle rental is 300Rs");
   }
 
 return 0;
	 }

