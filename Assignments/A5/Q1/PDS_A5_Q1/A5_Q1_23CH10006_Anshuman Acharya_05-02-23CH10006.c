// Name - Anshuman Acharya
// Roll No. - 23CH10006.c
#include<stdio.h>
#include<stdlib.h>

int main()
{
  //Swapping the evenly placed numbers
  const int maxi = 50;
  int list[maxi], n, i, temp, count = 0;
  printf("Enter the number of elements in your array: ");
  scanf("%d", &n);
    for(i = 0;i < n;i++){
      list[i] = 10 + rand()%90;
      printf("%d ",list[i]);
    }

    printf("\n\n");

    
    for(i = 0;i < n-2;i=i+2){
      if(list[i] > list[i+2]){
	temp = list[i];
	list[i] = list[i + 2];
	list[i + 2] = temp;
	count++;
    }
    }

    for(i = 0;i < n;i++){
      printf("%d ",list[i]);
    }
    printf("No. of interchanges is %d",count);
  return 0;
}	
      
