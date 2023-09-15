// Name - Anshuman Acharya
// Roll No. - 23CH10006.c
#include<stdio.h>
#include<stdlib.h>

int main()
{
  //Swapping the evenly placed numbers
  const int maxi = 50;
  int list[maxi], n, i, temp, store1, store2, store3, j, k, flag = 0;
  printf("Enter the number of elements in your array: ");
  scanf("%d", &n);
    for(i = 0;i < n;i++){
      list[i] = 10 + rand()%90;
      printf("%d ",list[i]);
    }

    printf("\n\n");

    for(i = 0;i < n;i++){
      for(j = 0;j < i;j++){
	for(k = 0;k < j;k++){
	  if(list[i] + list[j] + list[k] == 60){
	    store1 = list[i];
	    store2 = list[j];
	    store3 = list[k];
	    flag = 1;
	  }
	}
      }
      if(flag == 1){
      printf("%d %d %d    ",store1, store2, store3);
      }
    }
    if(flag != 1){
      printf("No such triplet\n");
    }
  return 0;
}	
