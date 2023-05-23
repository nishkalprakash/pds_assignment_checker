#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n1,n2,i,j,k;char **x,**y,**z;
  scanf("%d",&n1);
  x=(char**)calloc(n1,sizeof(char*));
  for(i=0;i<n1;i++)
  {
    x[i]=(char*)calloc(15,sizeof(char));
    scanf("%s",x[i]);
  }
  scanf("%d",&n2);
  y=(char**)calloc(n2,sizeof(char*));
  for(i=0;i<n2;i++)
  {
      y[i]=(char*)calloc(15,sizeof(char));
      scanf("%s",y[i]);
  }
  z=(char**)calloc((n1+n2),sizeof(char*));
  for(i=0;i<n1;i++)
  {
      z[i]=(char*)calloc(15,sizeof(char));
      z[i]=x[i];
  }
  for(j=i;j<(n1+n2);j++)
  {
      z[j]=y[j-n1];
  }
  printf("##after reading x##\n");
  printf("printing %d names in x\n",n1);
  for(i=0;i<n1;i++)
  {
      printf("%d    %s\n",i,x[i]);
  }
  printf("##after reading y##\n");
  printf("printing %d names in y\n",n2);
  for(i=0;i<n2;i++)
  {
      printf("%d    %s\n",i,y[i]);
  }
  printf("##after reading and deleting duplicates in z##\n");
  printf("printing %d elments of z\n",(n1+n2));
  for(i=0;i<(n1+n2);i++)
  {
      printf("%d    %s\n",i,z[i]);
  }
}