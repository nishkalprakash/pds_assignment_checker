//claculate mean of the array
#include <stdio.h>
float mean(int *a,int n)
{
    if(n==0)
        return 0;
    return (a[n-1]) + mean(a,n-1);   //calculating the sum of the array elements
}
int main()
{
  int n;
  scanf("%d \n",&n);

  float arr[n];
  for (int i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }

  /*printf("List = {");
  for (int i=0;i<n;i++)
  {
      printf("%f,",arr[i]);
  }
  printf("}");*/
  float m;
  m=mean(arr,n);   // calling the maen funtion to vlculate the sum
  m=m/n;   // calcumlating the mean

  printf("\nmean = %.2f\n",m);   // printing th e mean with two decimal points

}
