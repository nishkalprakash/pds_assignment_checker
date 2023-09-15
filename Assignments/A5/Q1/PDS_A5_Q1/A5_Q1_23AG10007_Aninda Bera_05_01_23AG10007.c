# include <stdio.h>
# include <stdlib.h>
int main()
{
  int a[50],n,x,c,v,interchange=0;
  printf("enter the no of random numbers u want\n");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    {
      x=(rand()%90)+10;
	  a[i]=x;
    }
  for(int g=0;g<n;g++)
    {
    printf("%d ",a[g]);
    }
  printf("\n");
  for(int d=0;d<n;d++){
    if(d%2==0 && d<(n-2)){
      if(a[d]>a[d+2]){
	c=a[d];
	v=a[d+2];
	a[d]=v;
	a[d+2]=c;
	interchange++;
      }
    }
  }
  for(int f=0;f<n;f++)
    {
    printf("%d ",a[f]);
  }
    printf("\n");
    printf("number of interchanges=%d",interchange);
    return 0;
}
    
      
