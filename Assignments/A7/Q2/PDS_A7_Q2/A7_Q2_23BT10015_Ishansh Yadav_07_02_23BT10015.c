//Name-Ishansh Yadav
//Roll No.-23BT10015

#include<stdio.h>
#include<stdlib.h>

void encode1(char a[20], int k)
{int i;
  for(i=0;i<k;i++)
    {a[i]=a[i]+2;
      printf("%c", a[i]);}
}


int main()
{char str[20];
  int i, k;
  scanf("%s", str);
  printf("%s", str);
  for(i=0;str[i]!='\0';i++)
    if(str[i+1]=='\0'){k=i+1;
  break;}
  encode1(str, k);
  return 0;
}
