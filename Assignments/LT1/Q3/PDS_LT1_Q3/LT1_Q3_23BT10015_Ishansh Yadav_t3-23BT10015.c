//Name-Ishansh Yadav
//Roll No.- 23BT10015

#include<stdio.h>

int main()
{int s, n, m, i, k;
  printf("Enter the value of s and n");
  scanf("%d %d", &s, &n);
  int a[10];
  k=s;
  for(i=0;i<(3+s);i++)
    {a[i]=k;
     k++;}
  for(m=1;m<=n;m++)
    for(i=0;i<m;i++)
      {printf("%d", a[i]);
	for(l=1;l>n-m;l++)
	  {printf(" ");}
  
       
      }
  return 0;}
