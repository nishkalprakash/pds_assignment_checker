//Name: Swaraj Dian
//Roll: 23EC30056

#include<stdio.h>
#include<stdlib.h>

int a[30];
int sum(int size,int x[])
{
  if(size==1)
    return x[0];
  else
    return (x[size-1]+sum(size-1,x));
}

int max(int size,int x[])
{
  if (size==2)
    {
      if(x[0]>x[1])
	return (x[0]);
      else
	return(x[1]);
    }
  else
    {
      if(x[0]>max(size-1,x))
	return(x[0]);
      else
	return(max(size-1,x));
    }
}

void reverse(int l,int r,int x[])
{
  int t;
  while(1)
    if(l<r)
      {
	reverse(l,r,x);
	t=x[l];
	x[l]=x[r];
	x[r]=t;
	l++;
	r--;
      }
    else
      break;
}
    

int main()
{
  int i,s,m;
  for (i=0;i<30;i++)
    a[i]=20+rand()%11;
  for(i=0;i<30;i++)
    printf("a[%d]= %d, ",i,a[i]);
  printf("\n");
  s=sum(30,a);
  printf("sum of elements in array: %d\n",s);
  
  m=max(30,a);
  printf("Maximum of elements= %d",m);
  reverse(0,29,a);
  for(i=0;i<30;i++)
    printf("a[%d]= %d, ",i,a[i]);
}
