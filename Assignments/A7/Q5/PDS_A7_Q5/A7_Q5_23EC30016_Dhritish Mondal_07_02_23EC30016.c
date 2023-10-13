#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int arr[20][3];
 

    for(int i=0;i<20;i++)
      { arr[i][0]= rand()%1001+1000;
	arr[i][1]= rand()%11+15;
	arr[i][2] = rand()%101;
      }
    printf("display the random roll");
    for(int i=0;i<20;i++)
      {
	printf("Roll:%d, Age:%d, Marks:%d", arr[i][0],arr[i][1],arr[i][2]);
      }
  return 0;
}
