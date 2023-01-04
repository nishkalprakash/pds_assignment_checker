#include<stdio.h>
int main()
{
 int m,number,count=0,arr[100];
 printf("enter size of array");
 scanf("%d" ,&m);
  for(int i=0;i<m;i++)
                  {
                  scanf("%d" ,&arr[i]);
                  }
 printf("enter element to find output");
 scanf("%d" ,&number);
 for(int j=0;j<m;j++)
{  if(number==arr[j])
count =count +1;

}printf("%d appears %d times",count,number);
return 0;
}


