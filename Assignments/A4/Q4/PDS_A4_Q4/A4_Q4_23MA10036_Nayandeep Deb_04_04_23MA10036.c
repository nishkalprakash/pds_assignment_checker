//Roll no. 23MA10036
//Name: Nayandeep Deb

#include <stdio.h>

int main () {
  int i = 1, j, k ,l;
  while (1){
    printf("enter a single digit number: ");
    scanf("%d", &i);
    if ( i == 5) {
      printf("enter a single digit number: ");
      scanf("%d", &j);
      if (j == 1)
	{
	  printf("enter a single digit number: ");
          scanf("%d", &k);
          printf("enter a single digit number: ");
          scanf("%d", &l);
	  if (l == 7){
	    printf("pattern found\n");
	    return 0;
	  }
	}
    }

    if ( i < 0) break;
  }
  return 0;
}
