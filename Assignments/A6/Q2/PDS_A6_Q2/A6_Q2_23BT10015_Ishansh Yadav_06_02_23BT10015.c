//Name-Ishansh Yadav
//Roll No.-23BT10015

#include<stdio.h>
#include<stdlib.h>

int sum(int a[30], int k)
{ if(k==0) return 0;
  else if(k==1) return a[0];

  else return a[k-1] + sum(a, k-1);
}

int max(int a[30], int m)
{int i ,maximum=0;
  for(i=0;i<m;i++)
    {if(a[i]>maximum) maximum=a[i];}
  return maximum;
}

int main()
{ int i, a[30], n;
  for(i=0;i<30;i++)
    {a[i]=20 + rand()%10;
      printf("%d ", a[i]);}
  printf("\n");
  scanf("%d", &n);
  printf("%d\n", sum(a , n));
  printf("%d", max(a , n));
}
