#include<stdio.h>
#include<stdlib.h>
int main(){
  int A[30];
  int n=0;int x;
  while(n<30)
    {
      x=rand();
      if (x>=10 && x<=30){
	A[n]=x;
	n++;
      }
    }
      //calculating maximum of given values 
      float largest(float a[],int n);
      float value [4]={2.5,-4,1.2,3.67};
      printf("Enter the numbers whose maximum value is to be calculated");
      scanf("%d",&
      printf ("%f\n",largest(value,4));
    }
  float largest(float a[],int n)
  {
    int i;
    float max;
    max=a[0];
    for(i=1;i<n;i++)
      if(max<a[i])
	max=a[i];
    return(max);
  }
  return 0;
}

  
