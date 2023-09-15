//Roll No. : 23IM10028
//Name : Rishabh Dehariya


#include<stdio.h>

int main(){
  int i,a;
  int b, data[i];

  for(i=0;i<50;i++)
    {
      a= rand()%40;
      b=a+10;
      data[i]=b;

      printf(" %d", data[i]);
    }

  for(int i = 0; i<50; i=i+3)

    for(int j = 1; j<50; j=j+3)

      for(int l = 2; l<50; l=l+3)

	if((i+j+l)==60)

	  if((i==b && j==b) && l==b)
	  {
	    printf(" %d %d %d\n ", i, j, l);
	  }

 

  return 0;
}
