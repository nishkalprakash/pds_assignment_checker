# include <stdio.h>
# include <stdlib.h>
int main()
{
  int a1[10],a2[10],a3[10],a4[10];
  //part (a)
  for(int i=0;i<10;i++)
    {
      int x=(rand()%21)+10;
      a1[i]=x;
      int y=(rand()%31)+30;
      a2[i]=y;
      int z=(rand()%31)+60;
      a3[i]=z;
      int k=(rand()%31)+90;
      a4[i]=k;
    }
  for(int j=0;j<10;j++)
    {
      printf("a1[%d]=%d, ",j,a1[j]);
    }
  for(int l=0;l<10;l++)
    {
      printf("a2[%d]=%d, ",l,a2[l]);
    }
  for(int h=0;h<10;h++)
    {
      printf("a3[%d]=%d, ",h,a3[h]);
    }
  for(int f=0;f<10;f++)
    {
      printf("a4[%d]=%d, ",f,a4[f]);
    }
  printf("\n");
  //part (b)
  int a5[20],e=0,o=0;
  for(int d=0;d<20;d++)
    {
      if(d%2==0)
	{
	  a5[d]=a1[e];
	  e++;
	}
      else
	{
	  a5[d]=a2[o];
	  o++;
	}
    }
  for(int a=0;a<20;a++)
    {
      printf("a5[%d]=%d, ",a,a5[a]);
    }
  printf("\n");
  //part (c)
  int a6[20],m=0,v=0;
  for(int s=0;s<20;s++)
    {
      if(s%2==0)
	{
	  a6[s]=a3[m];
	  m++;
	}
      else
	{
	  a6[s]=a4[v];
	  v++;
	}
    }
  for(int h=0;h<20;h++)
    {
      printf("a6[%d]=%d, ",h,a6[h]);
    }
  printf("\n");
  //part (d)
  int a7[40],r=0,f=0;
  for(int g=0;g<40;g++)
    {
      if(g%2==0)
	{
	  a7[g]=a5[r];
	  r++;
	}
      else
	{
	  a7[g]=a6[f];
	  f++;
	}
    }
  for(int i=0;i<40;i++)
    {
      printf("a7[%d]=%d, ",i,a7[i]);
    }
  printf("\n");
  return 0;
}
