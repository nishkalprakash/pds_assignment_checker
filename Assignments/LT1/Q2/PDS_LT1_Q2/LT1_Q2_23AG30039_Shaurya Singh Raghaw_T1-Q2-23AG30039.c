#include<stdio.h>
#include<stdlib.h>
int main()
{
  // a part 
  int a1[10],a2[10],a3[10],a4[10],a5[20],a6[20],a7[40];
  for(int i=0;i<10;i++)
    { a1[i]=(rand()%21)+10;
      printf("a1[%d]=%d ",i,a1[i]);
    }
  printf("\n");
  for(int j=0;j<10;j++)
    {
      a2[j]=(rand()%31)+30;
       printf("a2[%d]=%d ",j,a2[j]);
    }
  printf("\n");
  for(int k=0;k<10;k++)
    {
      a3[k]=(rand()%31)+60;
       printf("a3[%d]=%d ",k,a3[k]);
    }
  printf("\n");
  for(int l=0;l<10;l++)
    {
      a4[l]=(rand()%31)+90;
       printf("a4[%d]=%d ",l,a4[l]);
    }
  printf("\n");

  // b part

  for(int x=0;x<20;x++)
    {
      if(x%2==0)
	{
	a5[x]=a1[x/2];
	printf("a5[%d]=%d ",x,a5[x]);
	}
      else
	{
	  a5[x]=a2[(x-1)/2];
	printf("a5[%d]=%d ",x,a5[x]);
	}
      
    }
  printf("\n");
  for(int y=0;y<10;y++)
    {
      printf("a1[%d]=%d",y,a1[y]);
     }
  printf("\n");
  for(int z=0;z<10;z++)
  printf("a2[%d]=%d",z,a2[z]);
  printf("\n");
  //c part

  for(int b=0;b<20;b++)
    {
      if(b%2!=0)
		a6[b]=a4[(b-1)/2];
      
	
      else
	{
	  for(int n=18;n>=9;n--)
	    a6[b]=a3[n-b];
	}
      printf("a6[%d]=%d ",b,a6[b]);
    }
  printf("\n");
  for(int d=0;d<10;d++)
      printf("a3[%d]=%d",d,a3[d]);
    
  printf("\n");
  for(int e=0;e<10;e++)
  printf("a4[%d]=%d",e,a4[e]);

  printf("\n");
  // part d

  for(int f=0;f<40;f++)
    {
      if(f%2==0)
	{
	  for(int k=38;k>=19;k--)
	    a7[f]=a5[k-f];
	}
      else
	{
	for(int c=39;c>=20;c--)
	  a7[f]=a6[c-f];
        }
      printf("a7[%d]=%d",f,a7[f]);

    }
  printf("\n");
  for(int g=0;g<20;g++)
      printf("a5[%d]=%d",g,a5[g]);
    
  printf("\n");
  for(int h=0;h<20;h++)
  printf("a6[%d]=%d",h,a6[h]);

  
	
  
	
  return 0;
}
