#include<stdio.h>
#include<math.h>
typedef struct{
  int n;
  float *arr;
  }vector;

void readvector(vector *value,int n)//function to read two vectors
{

    for(int i=0;i<n;i++)
    {
        scanf("%f",&value->arr[i]);
    }
}
int main()
{
  vector v1,v2,v3;
  /*printf("enter the dimensions of v1\n");
  scanf("%d",&v1.n);
  for(int i=0;i<3;i++)
  {
      scanf("%f",&v1.arr[i]);
  }
  printf("enter the dimensions of v2\n");
  scanf("%d",&v2.n);
  for(int i=0;i<3;i++)
  {
      scanf("%f",&v2.arr[i]);
  }
  for(int i=0;i<n;i++)
  {
      v3.arr[i]=v1.arr[i]+v2.arr[i];
  }*/
  int n;
  scanf("%d",&n);
  printf("enter the dimensions of v1\n");
  readvector(&v1,n);
  scanf("%d",&n);
  printf("enter the dimensions of v2\n");
  readvector(&v2,n);



return 0;
}
